/*
- Title : 6186 - Best Grass
- Start Time : 24-10-29, 13:??
- End Time : 24-10-29, 13:19
- Try : 1
- Category : BFS, DFS, 4-Direction
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
R(1 <= R <= 100)행과 C(1 <= C <= 100)열로 이루어진 목초지가 주어진다.
각 풀 덩어리는 지도에서 하나의 '#' 또는 두 개의 '#'가 가로 또는 세로로 연결되어 나타난다(대각선 제외).
두 개의 풀 덩어리는 서로 인접하지 않는다. 주어진 목초지 지도에서 풀 덩어리가 몇 개 있는지 구하는 프로그램을 작성하라.

예를 들어, R=5, C=6인 다음의 목초지 지도를 고려하면,
.#....
..#...
..#..#
...##.
.#....
이 목초지에는 총 5개의 덩어리가 있다.
첫 번째 줄에 하나, 2열에서 2번째와 3번째 줄에 걸쳐 있는 덩어리, 세 번째 줄에 혼자 있는 덩어리, 4열에서 4번째와 5번째 줄에 걸쳐 있는 덩어리, 그리고 5열에 하나 더 있다.

- 입력
첫번째 줄에 공백으로 구분된 두 정수 R과 C가 주어진다.
다음 R개의 줄에는 목초지 지도의 i번째 행을 나타내는 C개의 문자로 이루어진 문자열이 주어진다. 각 문자는 '#' 또는 '.'이다.

- 출력
풀 덩어리의 개수를 나타내는 단일 정수를 출력한다.

- 예제
입력 : 
5 6
.#....
..#...
..#..#
...##.
.#....
출력 : 
5
*/

/* 한국어 주석
이 문제는 4방향 BFS 또는 DFS를 이용하여 목초지의 풀 더어리를 탐색하는 문제이다.

BFS와 DFS를 사용할 수도 있지만, 각 풀 덩어리는 최대 2개의 '#'로만 구성되므로, 입력을 받는 동시에 BFS와 유사하게 4방향 탐색을 하여 중복을 제거하며 간단하게 셀 수 있다.

추가로 목초지는 메모리를 최적화를 위해 bool 2차원 벡터를 사용하여 저장할 수 있다.
*/

/* English Problem Summary
- Question
A pasture is represented by R rows and C columns, where 1 <= R <= 100 and 1 <= C <= 100.
Each patch of grass is depicted by one or two # characters connected horizontally or vertically (excluding diagonal connections).
Two patches are not adjacent to each other. Write a program to count the number of grass patches on the given pasture map.

For example, given the pasture map with R = 5 and C = 6:
.#....
..#...
..#..#
...##.
.#....
There are a total of 5 patches:
One patch in the first row, one across the 2nd and 3rd rows in column 2, a single patch in the 3rd row, one patch across the 4th and 5th columns in the 4th row, and another in the 5th row.

- Input
The first line contains two space-separated integers R and C.
The next R lines each contain a string of C characters representing a row of the pasture map. Each character is either '#' or '.'.

- Output
Output a single integer representing the number of grass patches.

- Example
Input :
5 6
.#....
..#...
..#..#
...##.
.#....
Output :
5
*/

/* English Comment

*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int R;
	int C;
	cin >> R >> C;

	vector<vector<bool>> pasture(R, vector<bool>(C, false));

	const int DIRECTIONSIZE = 4;

	const int dirX[DIRECTIONSIZE] = { 1, 0, -1, 0 };
	const int dirY[DIRECTIONSIZE] = { 0, 1, 0, -1 };

	int result = 0;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			char c;
			cin >> c;
			if (c == '#') {
				pasture[i][j] = true;
				result++;
				for (int dir = 0; dir < DIRECTIONSIZE; ++dir) {
					int newX = i + dirX[dir];
					int newY = j + dirY[dir];
					if (0 <= newX && newX < R && 0 <= newY && newY < C && pasture[newX][newY] == true)
						result--;
				}
			}
		}
	}

	cout << result;
}

//Finish