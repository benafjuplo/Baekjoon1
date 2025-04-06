/*
- Title : 10026 - Red-Green Color Blindness
- Start Time : 25-03-24, 14:40
- End Time : 25-03-24, 14:59
- Try : 1
- Category : BFS, DFS, graph
- Language : C++20
*/

/* 한국어 주석
BFS와 DFS 모두 가능한 문제이다. 아래 코드에서는 BFS를 사용했으므로 BFS로 설명한다.
적록색약에 대해서는 입력받은 데이터를 먼저 G를 R로 혹은 R을 G로 만든 후 BFS를 하거나 BFS 함수를 2개 만들면 된다.
일반인에 대해서는 일반적인 BFS를 진행한다.

입력받은 데이터를 변형하고 같은 BFS 함수를 사용하는 편이 가독성 측면에서 훨씬 좋아 보인다.
아래는 BFS 함수를 2개 사용하였다.
*/

#include<iostream>
#include<queue>
#include<vector>
#include<string>

using namespace std;

const int DIRECTION4 = 4;

// Four directions: right, left, down, up.
const int directX[DIRECTION4] = { 0,0,1,-1 };
const int directY[DIRECTION4] = { 1,-1,0,0 };

// BFS for normal vision: only cells with the exact same color are considered connected.
void bfs1(vector<string>& worldMap, int x, int y) {
	int n = worldMap.size();
	char target = worldMap[x][y];
	queue<pair<int, int>>q;

	q.push({ x,y });

	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();

		// Check all four directions.
		for (int i = 0;i < DIRECTION4;++i) {
			int newX = p.first + directX[i];
			int newY = p.second + directY[i];

			// Ensure new position is within bounds and matches target color.
			if (0 <= newX && newX < n && 0 <= newY && newY < n && worldMap[newX][newY] == target) {
				worldMap[newX][newY] = 'X';
				q.push({ newX, newY });
			}	
		}
	}
}

// BFS for color-blind vision: red ('R') and green ('G') are treated as the same.
void bfs2(vector<string>& worldMap, int x, int y) {
	int n = worldMap.size();
	char target = worldMap[x][y];
	queue<pair<int, int>>q;

	q.push({ x,y });

	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();

		for (int i = 0;i < DIRECTION4;++i) {
			int newX = p.first + directX[i];
			int newY = p.second + directY[i];

			if (0 <= newX && newX < n && 0 <= newY && newY < n) {
				// For color-blind, both 'R' and 'G' are considered equivalent.
				if (target == 'R' || target == 'G') {
					if (worldMap[newX][newY] == 'R' || worldMap[newX][newY] == 'G') {
						worldMap[newX][newY] = 'X';
						q.push({ newX, newY });
					}
				}
				else if(worldMap[newX][newY] == target){
					// For 'B', check normally.
					worldMap[newX][newY] = 'X';
					q.push({ newX, newY });
				}				
			}
		}
	}
}

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	// Read the grid.
	vector<string> worldMap1(n);

	for (int i = 0; i < n;++i) {
		cin >> worldMap1[i];
	}

	// Copy grid for color-blind processing.
	vector<string> worldMap2 = worldMap1;		

	int cnt1 = 0;	// Count for normal vision.
	int cnt2 = 0;	// Count for color-blind vision.

	// Traverse every cell for both grids.
	for (int i = 0; i < n;++i) {
		for (int j = 0; j < n;++j) {
			// Normal vision: if not visited, count a region and process it.
			if (worldMap1[i][j] != 'X') {
				cnt1++;
				bfs1(worldMap1, i, j);
			}
			// Color-blind vision: if not visited, count a region and process it.
			if (worldMap2[i][j] != 'X') {
				cnt2++;
				bfs2(worldMap2, i, j);
			}
		}
	}

	// Output region counts: normal and color-blind.
	cout << cnt1 << " " << cnt2;

	return 0;
}

// Finish