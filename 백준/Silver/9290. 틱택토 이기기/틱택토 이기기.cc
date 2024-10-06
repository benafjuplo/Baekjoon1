/*
- Title : 9290 - Tic Tac Toe For the Win
- Start Time : 24-10-05, 20:??
- End Time : 24-10-05, 20:34
- Try : 1
- Category : simulation, brute force
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
승리로부터 한 단계 전의 틱택토 게임판이 주어졌을 때, 승리를 위해 말을 어디에 놓아야 하는지 구하시오.

- 입력
첫 번째 줄에는 테스트 케이스의 개수가 주어진다.

각 테스트 케이스는 현재 틱택토 게임판의 상태를 3줄에 걸쳐 나타내며, 그 다음 줄에는 승리 직전인 플레이어의 말(x 또는 o)이 무엇인지 주어진다.
게임판의 상태는 'x', 'o', '-'(빈칸)으로 이루어진다. 반드시 다음 한 번의 행동으로 게임을 이길 수 있는 상태만 주어진다.

- 출력
각 테스트 케이스마다 "Case x:"와 공백을 출력한 후, 아래의 3줄에 걸쳐 다음 한 수로 이긴 후 게임판의 상태를 출력한다.
x는 테스트 케이스의 번호이며, 1부터 시작한다.

- 예제
입력 :
3
o--
-o-
xx-
x
o-x
--o
x--
x
xx-
o-o
---
o
출력 :
Case 1:
o--
-o-
xxx
Case 2:
o-x
-xo
x--
Case 3:
xx-
ooo
---
*/

/* 한국어 주석
이 문제는 3*3 크기의 틱택톡 보드에 대한 문제이므로 비교적 간단하게 구현할 수 있다.

우선 3*3 크기의 char 자료형 vector로 틱택톡 보드를 입력받는다.
그 후, 승리 직전의 플레이어의 말을 winnerPlayer라고 정의하고 입력받는다.

이후 반복문을 사용하여 보드를 검사하며 만약 빈칸인 경우 빈칸을 winnerPlayer로 변경하고 승리 여부를 확인한다.
만약 승리한 경우 보드를 출력하고 반복문을 종료한다. 그렇지 않은 경우 변경했던 보드를 다시 빈칸으로 복구하고 반복문을 진행한다.

틱택톡에서 승리 여부는 수직, 수평, 대각선 방향으로 같은 말이 연속하여 있는 경우이다.
승리 여부를 판단하는 로직은 사용자 정의 함수로 구현하는 것이 좋다.
*/

/* English Problem Summary
- Question
Given a tic-tac-toe board one move away from victory, determine where to place a marker to win.

- Input
The first line contains the number of test cases.

Each test case consists of three lines representing the current state of the tic-tac-toe board,
followed by a line indicating the marker of the player about to win (either 'x' or 'o').
The board is represented using 'x', 'o', and '-' (for empty spaces). The board is guaranteed to be in a state where the game can be won with the next move.

- Output
For each test case, print "Case x:" followed by a space, then print the game board in the following three lines showing the state after the winning move.
Here, x represents the test case number, starting from 1.

- Example
Input :
3
o--
-o-
xx-
x
o-x
--o
x--
x
xx-
o-o
---
o
Output :
Case 1:
o--
-o-
xxx
Case 2:
o-x
-xo
x--
Case 3:
xx-
ooo
---
*/

/* English Comment
This problem involves a 3x3 tic-tac-toe board, so it can be implemented relatively easily.

First, take input for the tic-tac-toe board using a 3x3 vector of type char.
Then, define and input the marker of the player who is about to win as winnerPlayer.

Next, use a loop to check the board. If an empty space is found, replace it with winnerPlayer and check if it results in a win.
If a win is detected, print the updated board and exit the loop. If not, restore the empty space and continue the loop.

In tic-tac-toe, a win occurs when the same marker is aligned vertically, horizontally, or diagonally.
It is recommended to implement the logic for determining the win condition in a user-defined function.
*/

#include<iostream>
#include<vector>

using namespace std;

const int SIZE = 3;

bool isWin(vector <vector<char>>& gameBoard, const char & winnerPlayer) {
	for (int i = 0; i < SIZE; i++) {
		// Vertical
		if (gameBoard[0][i] == winnerPlayer && gameBoard[1][i] == winnerPlayer && gameBoard[2][i] == winnerPlayer)
			return true;
		// Horizontal
		if (gameBoard[i][0] == winnerPlayer && gameBoard[i][1] == winnerPlayer && gameBoard[i][2] == winnerPlayer)
			return true;
	}
	// Diagonal
	// Main diagonal
	if(gameBoard[0][0] == winnerPlayer && gameBoard[1][1] == winnerPlayer && gameBoard[2][2] == winnerPlayer)
		return true;
	// Anti diagonal
	if (gameBoard[0][2] == winnerPlayer && gameBoard[1][1] == winnerPlayer && gameBoard[2][0] == winnerPlayer)
		return true;

	return false;
}

void drawBoard(vector <vector<char>>& gameBoard) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			cout << gameBoard[i][j];
		}
		cout << "\n";
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int x = 1; x <= T;x++) {

		vector <vector<char>> gameBoard(SIZE, vector<char>(SIZE));
		char winnerPlayer;

		// Read the board
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				cin >> gameBoard[i][j];
			}
		}
		// Read winner's mark
		cin >> winnerPlayer;

		// Compute 
		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				if (gameBoard[i][j] == '-') {
					gameBoard[i][j] = winnerPlayer;
					// if win, print the board and break the loop
					if (isWin(gameBoard, winnerPlayer)) {
						i = SIZE;
						cout << "Case " << x << ":\n";
						drawBoard(gameBoard);
						break;
					}
					// recover
					gameBoard[i][j] = '-';
				}
			}
		}
	}
}

//Finish