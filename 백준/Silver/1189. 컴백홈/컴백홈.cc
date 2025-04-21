/*
- Title : 1189 - Back to the Barn
- Start Time : 25-03-18, 10:25 | 10:38 | 14:??
- End Time :   25-03-18, 10:28 | 10:?? | 14:48
- Try : 2(1 : DFS end condition)
- Category : DFS, graph, brute force
- Language : C++20
*/

/* 한국어 주석
우선 일반적인 문제와 달리 움직이지 않은 경우에도 1로 시작된다.
일반 DFS 문제와 달리 아래 상황을 고려하여 변형을 해야한다.
1. 최선의 경로가 아님.
2. 분기된 루트의 경우 서로 중복 확인하지 않음.
이해가 안되는 경우 주석을 해제하여 어떻게 탐색하는 지 확인한다.
아래 코드는 지도의 크기가 1, 1 인 경우는 따로 확인한다.
*/

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

const int ASCII_BOUND = 100; // to avoid ASCII code

const int MOVE_NUMBER = 4;

const int moveX[MOVE_NUMBER] = {1, -1, 0, 0};
const int moveY[MOVE_NUMBER] = {0, 0, 1, -1};

inline bool checkCondition(const vector<vector<int>>& worldMap, const pair<int, int>& point) {
	if (0 <= point.first && point.first < worldMap.size() && 0 <= point.second && point.second < worldMap[0].size())
		return true;
	else
		return false;
}

int result = 0;
stack<pair<int, int>> s;

void dfs(vector<vector<int>>& worldMap, pair<int, int> startPoint, pair<int, int> endPoint, int k) {
	for (int i = 0; i < MOVE_NUMBER;++i) {
		pair<int, int> newPoint = { s.top().first + moveX[i], s.top().second + moveY[i] };
		int prevValue = worldMap[s.top().first][s.top().second];

		if (checkCondition(worldMap, newPoint)) {
			if (worldMap[newPoint.first][newPoint.second] == '.') {
				if (newPoint != endPoint) {
					if (prevValue < k+ASCII_BOUND) {
						s.push(newPoint);
						worldMap[newPoint.first][newPoint.second] = prevValue + 1;

						////debug
						//for (int a = 0; a < worldMap.size();++a) {
						//	for (int b = 0; b < worldMap[0].size();++b) {
						//		if (worldMap[a][b] == '.' || worldMap[a][b] == 'T')
						//			cout << (char)worldMap[a][b];
						//		else
						//			cout << worldMap[a][b]-ASCII_BOUND;
						//	}
						//	cout << "\n";
						//}
						//cout << "\n";
						////debug

						dfs(worldMap, startPoint, endPoint, k);
						worldMap[newPoint.first][newPoint.second] = '.';
						s.pop();
					}
					else
						return;
				}				
				else if (prevValue + 1 == k + ASCII_BOUND) {
					result++;
				}
			}
		}
	}

	return;
}


int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int r, c, k;
	cin >> r >> c >> k;

	vector<vector<int>> worldMap(r, vector<int>(c));

	for (int i = 0; i < r;++i) {
		for (int j = 0; j < c;++j) {
			char c;
			cin >> c;
			worldMap[i][j] = c;
		}
	}
	
	pair<int, int> startPoint = { r - 1, 0 };
	pair<int, int> endPoint = { 0, c - 1 };

	if (startPoint == endPoint) {
		if (k == 1)
			cout << 1;
		else
			cout << 0;
		return 0;
	}

	s.push(startPoint);
	worldMap[startPoint.first][startPoint.second] = 1 + ASCII_BOUND;
	dfs(worldMap, startPoint, endPoint, k);
	cout << result;

	return 0;
}

//Finish