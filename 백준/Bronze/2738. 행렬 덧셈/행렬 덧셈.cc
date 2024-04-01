#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> m1;
	vector<vector<int>> m2;
	//Input1
	for (int i = 0; i < N; i++) {
		vector<int> v;
		for (int j = 0; j < M; j++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		m1.push_back(v);
	}
	//Input2
	for (int i = 0; i < N; i++) {
		vector<int> v;
		for (int j = 0; j < M; j++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		m2.push_back(v);
	}
	//Sum
	vector<vector<int>> res;
	for (int i = 0; i < N; i++) {
		vector<int> v;
		for (int j = 0; j < M; j++) {
			int temp;
			temp = m1[i][j] + m2[i][j];
			v.push_back(temp);
		}
		res.push_back(v);
	}
	//Print
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << res[i][j] << " ";
		}
		cout << "\n";
	}

}

//Finish