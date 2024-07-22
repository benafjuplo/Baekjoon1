/*
- Title : 6107 - Plumbing the Pond
- Start Time : 24-07-22, 08:50
- End Time : 24-07-22, 09:40
- Try : 2(1 : Wrong Translation)
- Category : 8-Direction
*/

#include<iostream>
#include<vector>

using namespace std;

bool isCorrect(vector<vector<int>> &v, int x, int y) {
	int ori = v[x][y];
	int dirX[8] = { 1, -1, 1, -1, 0, 1, 0, -1 };
	int dirY[8] = { 1, -1, -1, 1, 1, 0, -1, 0 };

	for (int i = 0; i < 8; i++) {
		int newX = x + dirX[i];
		int newY = y + dirY[i];
		if (0 <= newX && newX < v.size() && 0 <= newY && newY < v[newX].size() && v[newX][newY] == ori)
			return true;
	}

	return false;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	//Input
	int R, C;
	cin >> R >> C;

	vector<vector<int>> v(R, vector<int>(C));

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cin >> v[i][j];
		}
	}
	//Input

	int result = 0;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (v[i][j] > result)
				if (isCorrect(v, i, j))
					result = v[i][j];
		}
	}

	cout << result;
}

//Finish