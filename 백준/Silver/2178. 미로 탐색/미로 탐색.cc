/*2178 - Maze Exploration*/
#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<climits>
using namespace std;

struct pt {
	int x;
	int y;
	pt(int a, int b) {
		x = a;
		y = b;
	}
};

void findpath(vector<vector<int>>&v, vector<vector<int>>&res, queue<pt> &q, pt now, int N ,int M) {
	int cur = res[now.x][now.y];
	int next = cur + 1;
		
	int x, y;
	x = now.x; y = now.y;
	if (x == N - 1 && y == M - 1)
		return;

	//Left
	if (now.x >= 0 && now.y - 1 >= 0) {
		if (res[x][y - 1] > next){
			if (v[x][y - 1] == 1) {
				res[x][y - 1] = next;
				q.push(pt(x, y - 1));
			}
		}
	}

	//Up
	if (now.x - 1 >= 0 && now.y >= 0) {
		if (res[x - 1][y] > next) {
			if (v[x - 1][y] == 1) {
				res[x - 1][y] = next;
				q.push(pt(x - 1, y));
			}
		}
	}
	//Down
	if (now.x + 1 < N && now.y >= 0) {
		if (res[x + 1][y] > next) {
			if (v[x + 1][y] == 1) {
				res[x + 1][y] = next;
				q.push(pt(x + 1, y));
			}
		}
	}
	//Right
	if (now.x >= 0 && now.y + 1 < M) {
		if (res[x][y + 1] > next) {
			if (v[x][y + 1] == 1) {
				res[x][y + 1] = next;
				q.push(pt(x, y + 1));
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<vector<int>> v;
	vector<vector<int>> res;

	// Input res
	for (int i = 0; i < N; i++) {
		vector<int>tempV;
		for (int j = 0; j < M; j++) {
			if (i == 0 && j == 0)
				tempV.push_back(1);
			else
				tempV.push_back(INT_MAX);
		}
		res.push_back(tempV);
	}

	// Input v
	for (int i = 0; i < N; i++) {
		vector<int>tempV;
		string str;
		cin >> str;
		for (int j = 0; j < M; j++) {
			tempV.push_back(str[j]-'0');
		}
		v.push_back(tempV);
	}


	queue<pt> q;
	q.push(pt(0, 0));

	while (!q.empty()) {
		pt now = q.front();
		q.pop();
		findpath(v, res, q, now, N, M);
	}

	cout << res[N - 1][M - 1];

}

//Finish