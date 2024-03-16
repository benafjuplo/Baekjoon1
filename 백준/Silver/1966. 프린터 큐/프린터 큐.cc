#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//struct document {
//	int ori;
//	int prior;
//};

struct document {
	int x;
	int prior;
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);


	int T;
	cin >> T;
	for (int mainloop = 0; mainloop < T; mainloop++) {
		int N; // Number of documents
		cin >> N;

		int M; // Pos
		cin >> M;

		vector<document> v;
		for (int i = 0; i < N; i++) {
			document tempdoc;
			tempdoc.x = i;
			int temp;
			cin >> temp;
			tempdoc.prior= temp;
			v.push_back(tempdoc);
		}

		int cnt = 0;

		int targetx = v[M].x;		// Target x
		//int targetP = v[M].prior;	// Target prioritiy

		int curP = -1;			// Current Priority
		int curcnt = 0;			// Current Count
		while(true) {
			if (curcnt == 0) {
				curP = -1;
				// set curP
				for (int j = 0; j < v.size(); j++) {
					if (curP < v[j].prior)
						curP = v[j].prior;
				}
				// set curcnt
				for (int j = 0; j < v.size(); j++) {
					if (curP == v[j].prior)
						curcnt++;
				}
			}

			if (v.front().prior == curP) {
				curcnt--;
				cnt++;
				if (v.front().x == targetx)
					break;
				v.erase(v.begin());
			}
			else if (v.front().prior < curP) {
				v.push_back(v.front());
				v.erase(v.begin());
			}
		}

		cout << cnt << "\n";
		/*int curP = v[M].prior;
		int curO = v[M].ori;*/

		//int upP = 10;
		//int upO = -1;

		////Setting
		//for (int i = 0; i < N; i++) {
		//	if (curP < v[i].prior && v[i].prior < upP)
		//		upP = v[i].prior;
		//}

		////Higher Priority
		//for (int i = 0; i < N; i++) {
		//	if (upP == v[i].prior)
		//		upO = v[i].ori;
		//	if (curP < v[i].prior)
		//		cnt++;
		//}

		//Same Proirty

		//if (upO != -1 && upO < curO) {
		//	for (int i = 0; i <= curO; i++) {
		//		if (i < upO)
		//			continue;
		//		if (curP == v[i].prior)
		//			cnt++;
		//	}
		//}
		//else {
		//	for (int i = 0; i < N; i++) {
		//		if (i > curO) {
		//			if (upO == -1)
		//				break;
		//			//upP exist;
		//			else {
		//				if (i <= upO)
		//					continue;
		//			}
		//		}
		//		if (curP == v[i].prior)
		//			cnt++;
		//	}
		//}

		
	}

}


//Finish