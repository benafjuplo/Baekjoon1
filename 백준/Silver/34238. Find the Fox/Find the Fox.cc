/*
- Title : 34238 - Find the Fox
- Start Time : 25-11-30, 07:48
- End Time : 25-11-30, 08:03
- Try : 1
- Category : brute-force, implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

int countFoxes(const vector<vector<char>>& board, int x, int y) {
	int count = 0;

	// Check right direction
	if (y + 2 < board[0].size() && board[x][y + 1] == 'O' && board[x][y + 2] == 'X') {
		count++;
	}

	// Check right-down diagonal
	if (x + 2 < board.size() && y + 2 < board[0].size() && board[x + 1][y + 1] == 'O' && board[x + 2][y + 2] == 'X') {
		count++;
	}

	// Check down direction
	if (x + 2 < board.size() && board[x + 1][y] == 'O' && board[x + 2][y] == 'X') {
		count++;
	}

	// Check left-down diagonal
	if (x + 2 < board.size() && y - 2 >= 0 && board[x + 1][y - 1] == 'O' && board[x + 2][y - 2] == 'X') {
		count++;
	}

	// Check left direction
	if (y - 2 >= 0 && board[x][y - 1] == 'O' && board[x][y - 2] == 'X') {
		count++;
	}

	// Check left-up diagonal
	if (x - 2 >= 0 && y - 2 >= 0 && board[x - 1][y - 1] == 'O' && board[x - 2][y - 2] == 'X') {
		count++;
	}

	// Check up direction
	if (x - 2 >= 0 && board[x - 1][y] == 'O' && board[x - 2][y] == 'X') {
		count++;
	}

	// Check right-up diagonal
	if (x - 2 >= 0 && y + 2 < board[0].size() && board[x - 1][y + 1] == 'O' && board[x - 2][y + 2] == 'X') {
		count++;
	}

	return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);


	int n, m;
	cin >> n >> m;

	vector <vector<char>> board(n, vector<char>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	int result = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'F') {
				result += countFoxes(board, i, j);				
			}
		}
	}

	cout << result << "\n";

	return 0;
}

// Finish