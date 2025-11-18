/*
- Title : 4932 - Still Johnny Can’t Add
- Start Time : 25-11-19, 05:18
- End Time : 25-11-19, 05:31
- Try : 1
- Category : mathematics, implementation, simulation, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	for (int testCase = 1; testCase <= T; ++testCase) {
		int n;
		cin >> n;

		vector<vector<int>> matrix(n, vector<int>(n, 0));

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				cin >> matrix[i][j];
			}
		}

		bool isPossible = true;

		// 1. Top down
		vector<int> topDown(n - 1, 0);

		for (int j = 1; j < n; ++j) {
			topDown[j - 1] = matrix[0][j] - matrix[0][j - 1];
		}

		for (int i = 1; i < n; ++i) {
			for (int j = 1; j < n; ++j) {
				if (matrix[i][j] - matrix[i][j - 1] != topDown[j - 1]) {
					isPossible = false;
					break;
				}
			}
		}

		if (!isPossible) {
			cout << testCase << ". NO\n";
			continue;
		}

		// 2. Left right
		vector<int> leftRight(n - 1, 0);
		for (int i = 1; i < n; ++i) {
			leftRight[i - 1] = matrix[i][0] - matrix[i - 1][0];
		}

		for (int j = 1; j < n; ++j) {
			for (int i = 1; i < n; ++i) {
				if (matrix[i][j] - matrix[i - 1][j] != leftRight[i - 1]) {
					isPossible = false;
					break;
				}
			}
		}

		if (isPossible) {
			cout << testCase << ". YES\n";
		}
		else {
			cout << testCase << ". NO\n";
		}
	}

	return 0;
}

// Finish