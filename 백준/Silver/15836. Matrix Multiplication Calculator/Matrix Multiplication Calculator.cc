/*
- Title : 15836 - Matrix Multiplication Calculator
- Start Time : 25-03-17, 09:21
- End Time : 25-03-17, 10:21
- Try : 1
- Category : mathematics, linear algebra
- Language : C++20
*/

/* 한국어 주석
행렬의 크기가 작기에 3중 반복문으로 행렬곱 연산을 구현할 수 있다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	for (int i = 1; ;++i) {
		int m, n, p, q;
		cin >> m >> n >> p >> q;
		if (m == 0)
			break;

		vector<vector<int>> a(m, vector<int>(n));
		vector<vector<int>> b(p, vector<int>(q));

		for (int i = 0; i < m;++i) {
			for (int j = 0; j < n;++j) {
				cin >> a[i][j];
			}
		}

		for (int i = 0; i < p;++i) {
			for (int j = 0; j < q;++j) {
				cin >> b[i][j];
			}
		}

		//vector<vector<int>> result(m, vector<int>(q));

		cout << "Case #" << i << ":\n";

		if (n != p) {
			cout << "undefined\n";
		}
		else {
			for (int i = 0; i < m;++i) {
				cout << "| ";
				for (int j = 0; j < q;++j) {
					int result = 0;
					for (int k = 0; k < n;++k)
						result += a[i][k] * b[k][j];
					cout << result << " ";
				}
				cout << "|\n";
			}
		}
	}
	return 0;
}

// Finish