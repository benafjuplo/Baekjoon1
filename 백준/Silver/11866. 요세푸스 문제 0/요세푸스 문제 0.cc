#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector<int> v;
	for (int i = 1; i <= N; i++)
		v.push_back(i);
	
	int cnt = 1;
	auto iter = v.begin();
	cout << "<";
	while (v.size() != 0) {
		if (iter == v.end())
			iter = v.begin();
		if (cnt == K) {
			cout << *iter;
			iter = v.erase(iter);
			cnt = 1;
			if (v.size() != 0)
				cout << ", ";
		}
		if (v.size() == 0)
			break;
		if (cnt == K) // case: K == 1
			continue;
		iter++;
		cnt++;
		if (iter == v.end())
			iter = v.begin();
		
		if (cnt == K) {
			cout << *iter;
			iter = v.erase(iter);
			cnt = 1;
			if (v.size() != 0)
				cout << ", ";
		}

	}
	cout << ">";

}


//Finish