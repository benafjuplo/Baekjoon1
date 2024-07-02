/*
- Title : 4963 - How Many Islands
- Start Time : 24-07-02, 13:06
- End Time : 24-07-02, 13:38
- Try : 1
- Category : 8-Direction, BFS
*/

#include<queue>
#include<iostream>
#include<vector>

using namespace std;

void bfs(vector<vector<int>> &v, int x, int y) {
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	v[x][y] = 2;

	int dirX[8] = {1, 0, -1, 0, 1, -1, 1, -1};
	int dirY[8] = {0, 1, 0, -1, 1, -1, -1, 1};

	while (!q.empty()) {
		pair<int, int> pos = q.front();
		q.pop();

		for (int i = 0; i < 8; i++) {
			int newX = pos.first + dirX[i];
			int newY = pos.second + dirY[i];
			if (newX >= 0 && newY >= 0 && newX < v.size() && newY < v[x].size() && v[newX][newY] == 1) {
				q.push(make_pair(newX, newY));
				v[newX][newY] = 2;
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	while (true) {
		//Input Start
		int w, h;
		cin >> w >> h;

		if (w == 0 && h == 0)
			break;
		
		vector<vector<int>> v(h, vector<int>(w));

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> v[i][j];
			}
		}
		//Input End

		//BFS
		int cnt = 0;

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (v[i][j] == 1) {
					cnt++;
					bfs(v, i, j);
				}
			}
		}

		cout << cnt << "\n";
	}
}

//Finish