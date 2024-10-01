/*
- Title : 20152 - Game Addiction
- Start Time : 24-10-01, ??:??
- End Time : 24-10-01, 19:10
- Try : 2(1 : int size)
- Category : dynamic programming, BFS, 2-Direction, Catalan number
*/

/* 한국어 문제 요약
- 문제
시작 지점에서 목표 지점까지 이동하려고 한다.
이동은 상, 하, 좌, 우 방향으로만 할 수 있으며, 한 번 이동할 때의 거리는 1이다.
또한, 시작 지점에서 목표 지점까지 최단경로로 이동해야 한다.

시작 지점의 좌표 (H, H)와 목표 지점의 좌표 (N, N)이 주어진다.
좌표 평면 위 (x, y)에서 y > x인 곳은 지나갈 수 없다고 할 때, 목표 지점까지 갈 수 있는 경로의 개수를 구하라.
단, 목표 지점 좌표가 시작 지점의 좌표와 같은 경우 경로는 1가지이다.

- 입력
첫째 줄에 시작 지점과 목표 지점의 좌표 (H, H), (N, N)을 나타내는 두 정수 H, N(0 ≤ H, N ≤ 30)이 차례로 주어진다.

- 출력
시작 지점에서 목표 지점까지 갈 수 있는 경로의 개수를 출력한다.

- 예제
입력 1:
8 4
출력 1:
14
입력 2:
0 3
출력 2:
5
*/

/* 한국어 주석
이 문제는 카탈랑 수에 관한 문제이다.
하지만, 문제에서 주어진 조건을 따라 다이나믹 프로그래밍과 BFS를 잘 조합하면, 카탈랑 수를 사용하지 않고도 직접 계산할 수도 있다.
이 프로그램은 카탈랑 수를 정보를 알기 전에 작성되었기에 다이나믹 프로그래밍과 BFS를 사용하였다.

2방향 BFS을 이용하여 시작 지점부터 목표 지점까지 차례로 누적하며 경로를 계산하면, 문제를 간단히 해결할 수 있다.

숫자가 매우 커질 수 있으므로 long long 자료형을 사용해야 한다.

참고로, ChatGPT를 통해 구현된 카탈랑 수를 활용한 코드는 아래에 주석으로 추가하였다.
*/

/* English Problem Summary
- Question
You need to move from a starting point to a target point.
Movement is allowed in the four cardinal directions: up, down, left, and right, and the distance covered in one move is 1.
Additionally, you must move from the starting point to the target point via the shortest path.

The coordinates of the starting point are (H, H), and the coordinates of the target point are (N, N).
You cannot pass through any point (x, y) where y > x on the coordinate plane. Calculate the number of distinct paths to the target point.
If the target point is the same as the starting point, there is only one possible path.

- Input
The first line contains two integers H and N, representing the coordinates of the starting point and the target point (H, H) and (N, N), respectively. (0 ≤ H, N ≤ 30)

- Output
Print the number of distinct paths from the starting point to the target point.

- Example
Input 1:
8 4
Output 1:
14
Input 2:
0 3
Output 2:
5
*/

/* English Comment
This problem relates to the Catalan number.
However, by combining dynamic programming and BFS according to the conditions given in the problem, it is possible to directly calculate the solution without using Catalan numbers.
Since this program was written before learning about Catalan numbers, dynamic programming and BFS were used.

By using bidirectional BFS, where paths are accumulated step by step from the starting point to the target point, the problem can be solved simply.

Since the numbers can grow very large, the long long data type should be used.

As a reference, code utilizing Catalan numbers, implemented via ChatGPT, is included below as a comment.
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

void bfs(vector<vector<long long>> &v) {
	queue<pair<int, int>>q;

	// 2-Direction : Right, Down
	int dirX[2] = {0, 1};
	int dirY[2] = {1, 0};

	q.push({ 0,0 });

	while (!q.empty()) {
		int currentX = q.front().first;
		int currentY = q.front().second;
		q.pop();
		// 2-Direction
		for (int i = 0; i < 2; i++) {
			int nextX = currentX + dirX[i];
			int nextY = currentY + dirY[i];
			if (0 <= nextX && nextX < v.size() && 0 <= nextY && nextY < v.size() && nextY <= nextX) {
				//only once
				if (v[nextX][nextY] == 0)
					q.push({ nextX, nextY });
				//accumulate
				v[nextX][nextY] += v[currentX][currentY];
			}
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int H, N;
	cin >> H >> N;
	
	// Always make H <= N for bfs directions
	if (H > N) {
		int temp = H;
		H = N;
		N = temp;
	}

	// Set the starting point(H) to 0 to reduce the size of vector.
	N -= H;
	H = 0;

	// Map of problem
	vector<vector<long long>> v(N + 1, vector<long long>(N + 1, 0));

	// Starting point is always 1
	v[0][0] = 1;

	bfs(v);

	cout << v[N][N];
}

//Finish

// Catalan number
/*
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	unsigned long long C[31]; // Array to store Catalan numbers up to C[30]
	C[0] = 1;
	for(int n = 1; n <= 30; n++) {
		C[n] = (2 * (2 * n - 1) * C[n - 1]) / (n + 1);
	}

	int H, N;
	cin >> H >> N;

	int D = abs(N - H);

	cout << C[D] << endl;
	return 0;
}
*/