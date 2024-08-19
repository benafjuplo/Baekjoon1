/*
- Title : 15092 - Sheba's Amoebas
- Start Time : 24-08-19, 07:18
- End Time : 24-08-19, 07:25
- Try : 1
- Category : BFS, Breath First Search, 8-Direction
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int mRow, nColumn;

// 8-Direction
void bfs(vector<vector<bool>> &v, int x, int y) {
	int dirX[8] = { 1, 0, -1, 0, 1, -1, 1, -1};
	int dirY[8] = { 0, 1, 0, -1, 1, -1, -1, 1};

	queue<pair<int, int>> q;
	q.push({ x,y });
	v[x][y] = false;
	
	while (!q.empty()) {
		int currentX = q.front().first;
		int currentY = q.front().second;
		q.pop();

		for (int i = 0; i < 8; i++) {
			int newX = currentX + dirX[i];
			int newY = currentY + dirY[i];
			if (0 <= newX && newX < mRow && 0 <= newY && newY < nColumn && v[newX][newY]) {
				q.push({ newX, newY });
				v[newX][newY] = false;
			}
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	cin >> mRow >> nColumn;

	vector<vector<bool>> dish(mRow, vector<bool>(nColumn, false));

	for (int i = 0; i < mRow; i++) {
		for (int j = 0; j < nColumn; j++) {
			char c;
			cin >> c;
			if (c == '#')
				dish[i][j] = true;
		}
	}

	int numberOfAmoeba = 0;

	for (int i = 0; i < mRow; i++) {
		for (int j = 0; j < nColumn; j++) {
			if (dish[i][j]) {
				numberOfAmoeba++;
				bfs(dish, i, j);
			}
		}
	}
	
	cout << numberOfAmoeba;
}

//Finish