/*
- Title : 12051 - Dynamic Grid (Large)
- Start Time : 24-09-02, 14:22
- End Time : 24-09-02, 15:10
- Try : 1
- Category : BFS, Graph, 4-Direction
*/

/*한글 주석
이 문제는 그래프 탐색을 요구하며, 너비 우선 탐색(BFS) 혹은 깊이 우선 탐색(DFS)을 사용할 수 있다.
테스트 케이스가 T개 주어지지만, 한 케이스를 해결하면 반복문으로 간단히 전체를 구현할 수 있으므로 여기서는 한 케이스에 대하여 설명한다.
또한 이 문제에서는 그래프가 아닌 그리드로 표현되므로 이하에서는 그리드라고 표현한다.

먼저, 행의 수 R과 열의 수 C를 입력받고 이를 바탕으로 그리드를 2차원 정수 벡터로 초기화한 후 값을 입력받는다.
참고로, 메모리 사용이 유의미하게 감소하는 지 궁금하여 2차원 부울 벡터로 변경 후 실행해보았으나, 큰 차이가 없었으므로 어떤 방식으로 구현해도 무방하다.

이후, 수행할 연산의 수 N을 입력받고, N회 연산을 차례로 처리한다. 문제에 주어진 바와 같이 연산은 두 가지 이다.
첫 번째 연산인 Q는 4방향 BFS(대각선을 제외한 동서남북)을 수행한 후, BFS가 실행된 횟수를 출력하는 것이다.
이때, BFS가 진행된 지점을 기록하기 위해 정수형 일 때는 1이 아닌 다른 숫자로, 부울형일 때는 false로 값을 변경하여, 이미 탐색된 지점에서 BFS가 중복으로 실행되지 않도록 해야 한다.
두 번째 연산인 M은 Q와 달리 변경할 행과 열, 그리고 새로운 값을 추가적으로 입력받야야 한다. 여기서는 row, column, value로 변수 선언 후 값을 입력받았다.
이 후 다음과 같이 간단히 그리드 벡터에 직접 대입하면 된다. grid[row][column] = value;

또한 Q 연산은 M 연산이 중간에 없는 경우 결과값이 변하지 않으므로, 이를 부울 변수를 활용하여 생략할 수 있다. 여기서는 'alreadyShow'라는 부울 변수로 관리하였다.
이 과정에서 단순히 alreadyShow를 추가하는 것이 아니라, 최적화된 곳으로 변경하여 속도를 증가시켰고, 이를 주석으로 기록해 놓았았다.

맨 앞에서 언급한 것처럼, 이 과정을 테스트 케이스 T만큼 반복하면 문제를 해결할 수 있다.
*/

/*English Comment
This problem requires graph traversal, and either Breadth-First Search (BFS) or Depth-First Search (DFS) can be used.
Although there are T test cases, since solving one case can be implemented simply for all cases using a loop, this explanation will focus on a single case.
Additionally, since this problem uses a grid instead of a graph, it will be referred to as a grid from here on.

First, the number of rows, R, and the number of columns, C, are input, and based on these, the grid is initialized as a 2D integer vector, followed by receiving the grid values.
For reference, to see if memory usage would significantly decrease, I tried changing it to a 2D boolean vector, but since there was no significant difference, either implementation is fine.

Next, the number of operations, N, is input, and the N operations are processed in sequence.
As specified in the problem, there are two types of operations.
The first operation, Q, performs a 4-directional BFS (north, south, east, west, excluding diagonals) and outputs the number of times BFS was executed.
At this time, to avoid executing BFS multiple times on the same point, the value at that point should be changed to something other than 1 for integers or to false for booleans,
indicating that it has already been explored.

The second operation, M, unlike Q, additionally takes inputs for the row and column to be changed, as well as the new value.
Here, I declared variables as 'row', 'column', and 'value' and received the input. Then, you can simply assign the value directly to the grid vector as follows: grid[row][column] = value;.

Furthermore, if there is no M operation in between, the result of the Q operation does not change, so it can be skipped using a boolean variable.
Here, I managed this with a boolean variable named 'alreadyShow'. In this process, rather than just adding 'alreadyShow', I optimized its placement to increase speed and documented this in the comments.

As mentioned at the beginning, by repeating this process for the number of test cases T, the problem can be solved.
*/


#include<iostream>
#include<vector>
#include<string>
#include<queue>

using namespace std;

void bfsGrid(vector<vector<int>>& gridForBFS, int row, int col) {
	queue<pair<int, int>>  q;
	q.push({ row, col });

	const int DIRECTION = 4;

	int rowSize = gridForBFS.size();
	int columnSize = gridForBFS[0].size();

	constexpr int dirX[DIRECTION] = { 1, 0, -1, 0 };		// You can delete 'constexpr' and use 'const' instead.
	constexpr int dirY[DIRECTION] = { 0, 1, 0, -1 };

	while (!q.empty()) {
		int curX = q.front().first;
		int curY = q.front().second;
		q.pop();
		for (int i = 0; i < DIRECTION; i++) {
			int newX = curX + dirX[i];
			int newY = curY + dirY[i];

			if (0 <= newX && newX < rowSize && 0 <= newY && newY < columnSize && gridForBFS[newX][newY] == 1) {
				gridForBFS[newX][newY] = 2;
				q.push({ newX, newY });
			}
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	// Main loop for number of test cases T
	for (int mainLoopKey = 1; mainLoopKey <= T; mainLoopKey++) {

		cout << "Case #" << mainLoopKey << ":\n";

		int R, C;	// R : Rows, C : Columns
		cin >> R >> C;

		vector<vector<int>> originalGrid(R, vector<int>(C, 0));

		// Input the grid
		for (int i = 0; i < R; i++) {
			string lineInput;
			cin >> lineInput;
			for (int j = 0; j < C; j++) {
				originalGrid[i][j] = lineInput[j] - '0';
			}
		}

		int N;	// Number of operations
		cin >> N;

		bool alreadyShow = false;	// To reduce memory and time usage, check the grid that has already been shown.
		// This restricts the worst-case scenario to a situation where only Q and M are repeated continuously.
		int savedCount = -1;

		// Sub loop for number of operations N
		while (N--) {
			char operation;
			cin >> operation;

			// operation Q : show with BFS
			if (operation == 'Q') {
				vector<vector<int>> gridForBFS = originalGrid;

				if (alreadyShow == true) {
					cout << savedCount << "\n";
				}

				else {
					int count = 0;

					for (int i = 0; i < R; i++) {
						for (int j = 0; j < C; j++) {
							if (gridForBFS[i][j] == 1) {
								count++;
								//BFS
								bfsGrid(gridForBFS, i, j);
							}
						}
					}

					alreadyShow = true;
					savedCount = count;
					cout << count << "\n";
				}
			}

			// operation M : change grid
			else {
				//alreadyShow = false;							// old version
				int row, column;
				int value;
				cin >> row >> column >> value;
				if (originalGrid[row][column] != value) {
					alreadyShow = false;						// new version
					originalGrid[row][column] = value;
				}
			}
		}
	}
}

//Finish