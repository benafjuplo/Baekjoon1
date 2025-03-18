/*
- Title : 6004 - The Chivalrous Cow
- Start Time : 25-03-17, 16:08
- End Time : 25-03-17, 16:48
- Try : 1
- Category : BFS, Graph
- Language : C++20
*/

/* 한국어 주석
시작 지점에서 도착 지점에 도달 가능함이 보장됨.
문제에 주어진 힌트처럼 BFS를 사용하여 문제 풀이.
이동을 체스의 나이트로 설정하여 진행한다.
*/

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

const int DIRECTIONS = 8;
const int LOW_BOUND = 100;	// to avoid ASCII CODE

const int knightMoveX[DIRECTIONS] = { +1, +2, +2, +1, -1, -2, -2, -1 };
const int knightMoveY[DIRECTIONS] = { +2, +1, -1, -2, -2, -1, +1, +2 };

inline bool checkCondition(vector<vector<int>>& maps, pair<int,int> point) {
	
	if (
		0 < point.first &&
		0 < point.second &&
		point.first < maps.size() &&
		point.second < maps[0].size()
		)
		return true;

	else return false;
}

int bfs(vector<vector<int>> &maps, pair<int, int> startPoint, pair<int, int> endPoint) {
	queue<pair<int, int>> q;
	q.push(startPoint);

	maps[startPoint.first][startPoint.second] = LOW_BOUND + 0;

	while (!q.empty()) {
		pair<int, int> pt = q.front();
		q.pop();
		for (int i = 0; i < DIRECTIONS;++i) {
			pair<int, int> newPoint = { pt.first + knightMoveX[i], pt.second + knightMoveY[i] };
			if (checkCondition(maps, newPoint)) {
				if (maps[newPoint.first][newPoint.second] == '.') {
					maps[newPoint.first][newPoint.second] = maps[pt.first][pt.second] + 1;
					q.push(newPoint);
				}
				else if(maps[newPoint.first][newPoint.second] == 'H') {
					return maps[pt.first][pt.second] + 1 - LOW_BOUND;
				}
			}
		}
	}
}


int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int c, r;
	cin >> c >> r;

	vector<vector<int>> maps(r, vector<int>(c));

	pair<int, int> startPoint;
	pair<int, int> endPoint;

	for (int i = 0; i < r;++i) {
		for (int j = 0; j < c;++j) {
			char c;
			cin >> c;
			maps[i][j] = c;
			if (maps[i][j] == 'K') startPoint = { i,j };
			else if (maps[i][j] == 'H') endPoint = { i,j };
		}
	}

	cout << bfs(maps, startPoint, endPoint);

	return 0;
}

//Finish