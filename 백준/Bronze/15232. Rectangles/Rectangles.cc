/*
- Title : 15232 - Rectangles
- Start Time : 24-11-30, 01:30
- End Time : 24-11-30, 01:32
- Try : 1
- Category : simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
표준 입력에서 두 개의 정수 R과 C를 읽은 다음, 각각 C개의 별표(*)가 있는 R개 줄을 출력한다.

- 입력
첫 번째 줄에는 정수 R이 포함한다. 출력할 줄의 개수입니다.
두 번째 줄에는 정수 C가 입력된다. 각 줄에 출력할 별표의 개수이다.
R, C는 최대 20이다.

- 출력
R개의 줄과 C개의 열로 구성된 직사각형을 출력한다.

- 예제
입력 : 
3
5
출력 : 
*****
*****
*****
*/

/* 한국어 주석
간단히 R행 C열의 이중 반복문으로 구현할 수 있다.
*/

/* English Problem Summary
- Problem
Read two integer numbers R and C from the standard input and then print R lines with C asterisks (*) each.

- Input
The first line will contain an interger R. The number of lines to print.
The second line will contain an integer C. The number of asterisks to print in each line.
R, C will be at most 20.

- Output
Print a rectangle of R lines and C columns.

- Example
Input :
3
5
Output :
*****
*****
*****
*/

/* English Comment
It can be implemented simply using a nested loop for R rows and C columns.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int R, C;
	cin >> R >> C;

	for (int i = 0; i < R; ++i) {
		for (int j = 0; j < C; ++j)
			cout << "*";
		cout << "\n";
	}

	return 0;
}

//Finish
