/*
- Title : 1996 - Minesweeper
- Start Time : 25-07-14, 11:37
- End Time : 25-07-14, 12:13
- Try : 1
- Category : brute force, implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

bool isInside(int idx, int limit) {
	return 0 <= idx && idx < limit;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<vector<char>> originalMap(n, vector<char>(n));
	vector<vector<char>> result(n, vector<char>(n, '0'));

	// Input
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> originalMap[i][j];
			if (originalMap[i][j] != '.')
				result[i][j] = '*';
		}
	}

	const int NUMBER_OF_DIRECTIONS = 8;
	const int DIRECTION8_X[NUMBER_OF_DIRECTIONS] = { 1,0,-1,0,1,-1,1,-1 };
	const int DIRECTION8_Y[NUMBER_OF_DIRECTIONS] = { 0,1,0,-1,1,-1,-1,1 };

	// Processing
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (originalMap[i][j] != '.') {
				for (int k = 0; k < NUMBER_OF_DIRECTIONS; ++k) {
					int newX = i + DIRECTION8_X[k];
					int newY = j + DIRECTION8_Y[k];
					
					if (isInside(newX, n) && isInside(newY, n) && result[newX][newY] != '*' && result[newX][newY] != 'M') {
						int newValue = result[newX][newY] - '0' + originalMap[i][j] - '0';
						if (newValue >= 10)
							result[newX][newY] = 'M';
						else
							result[newX][newY] = newValue + '0';
					}
				}
			}
		}
	}

	// Output
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << result[i][j];
		}
		cout << "\n";
	}

	return 0;
}

// Finish