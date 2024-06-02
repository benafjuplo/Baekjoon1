/*
- Title : 14940 - Easy Shortest Path
- Start Time : 24-06-01, 10:26
- End Time : 24-06-01, 10:48
- Try  : 1
*/

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct point {
	int x;
	int y;
	point(int x, int y) {
		this->x = x; this->y = y;
	}
	point() {
		x = 0;
		y = 0;
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	vector<vector<int>> map;

	point start;

	//input
	for (int i = 0; i < n; i++) {
		vector<int> v;
		for (int j = 0; j < m; j++) {
			int x;
			cin >> x;
			if (x == 2) {
				start.x = i;
				start.y = j;
				v.push_back(0);
			}
			else if(x==1)
				v.push_back(-1);
			else
				v.push_back(x);
		}
		map.push_back(v);
	}

	int dirX[4] = {-1, 0, 1, 0};
	int dirY[4] = {0, -1, 0, 1};

	queue<point> q;
	q.push(start);
	while (!q.empty()) {
		point pt = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int newX = pt.x + dirX[i];
			int newY = pt.y + dirY[i];
			if(newX >= 0 && newX < n && newY >= 0 && newY < m)
				if (map[newX][newY] == -1) {
					map[newX][newY] = map[pt.x][pt.y] + 1;
					q.push(point(newX, newY));
				}
		}
	}

	// output
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
}

//Finish