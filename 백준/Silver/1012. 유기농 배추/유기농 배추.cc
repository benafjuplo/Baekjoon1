/*
- Title : 1012 - Organic Cabbage
- Start Time : 24-05-10, 21:05
- End Time : 24-05-10, 21:50
- Try : 1
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct point {
	int x;
	int y;
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}
};

void checkLeftRightUpDown(queue<point>& q, vector<vector<bool>>& cabbage, vector<vector<bool>>& isSearched, int M, int N, int x, int y) {

	//Left
	if (y - 1 >= 0)
		if (!isSearched[x][y - 1] && cabbage[x][y - 1]) {
			isSearched[x][y - 1] = true;
			point pt(x, y - 1);
			q.push(pt);
		}

	//Up
	if (x - 1 >= 0)
		if (!isSearched[x - 1][y] && cabbage[x - 1][y]) {
			isSearched[x - 1][y] = true;
			point pt(x - 1, y);
			q.push(pt);
		}

	//Down
	if (x + 1 < M)
		if (!isSearched[x + 1][y] && cabbage[x + 1][y]) {
			isSearched[x + 1][y] = true;
			point pt(x + 1, y);
			q.push(pt);
		}

	//Right
	if (y + 1 < N)
		if (!isSearched[x][y + 1] && cabbage[x][y + 1]) {
			isSearched[x][y + 1] = true;
			point pt(x, y + 1);
			q.push(pt);
		}
}

void bfs(vector<vector<bool>> &cabbage, vector<vector<bool>> &isSearched, int M, int N, point &pt) {
	queue<point> q;
	q.push(pt);
	isSearched[pt.x][pt.y] = true;

	while (!q.empty()) {
		point pos = q.front();
		q.pop();
		checkLeftRightUpDown(q, cabbage, isSearched, M, N, pos.x, pos.y);
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int mainloop = 0; mainloop < T; mainloop++) {
		int M, N, K;
		cin >> M >> N >> K;
		
		vector<vector<bool>> cabbage(M, vector<bool>(N, false));

		vector<vector<bool>> isSearched(M, vector<bool>(N, false));

		for (int i = 0; i < K; i++) {
			int x, y;
			cin >> x >> y;
			cabbage[x][y] = true;
		}

		int cnt = 0;

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (!isSearched[i][j]) {
					if (cabbage[i][j]) {
						point pt(i, j);
						cnt++;
						bfs(cabbage, isSearched, M, N, pt);
					}
					else
						isSearched[i][j] = true;
				}
			}
		}

		cout << cnt << "\n";
	}
}

//Finish