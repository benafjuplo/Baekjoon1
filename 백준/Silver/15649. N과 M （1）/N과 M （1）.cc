#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void pick(int seq, int sel, int N, int M, vector<int>&v) {
	if (seq <= M) {
		if (seq != 0)
			v[seq-1] = sel;

		if (seq == M) {
			for (int i = 0; i < M; i++) {
				cout << v[i] << " ";
			}
			cout << "\n";
		}

		for (int i = 1; i <= N; i++) {
			for (int j = seq; j < M; j++)
				v[j] = 0;
			if (v.end() == find(v.begin(), v.end(), i)) {
				pick(seq + 1, i, N, M, v);
			}
		}
	}

}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;
	vector<int> v(M);
	pick(0, 0, N, M, v);
}


//Finish