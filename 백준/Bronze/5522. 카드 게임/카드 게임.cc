/*
- Title : 5522 - Card Game
- Start Time : 24-09-16, 02:59
- End Time : 24-09-16, 03:00
- Try : 1
- Category : elementary arithmetic, simple, basic
*/

/* 한국어 문제 요약
- 문제
카드 게임을 5회 진행한다.
각 게임의 득점을 나타내는 정수가 주어질 때, 총점을 구하는 프로그램을 작성하라.

- 입력
표준 입력에서 다음과 같은 데이터를 읽어온다.
i 번째 줄(1 ≤ i ≤ 5)에는 i번째 게임에서의 득점을 나타내는 정수 Ai가 적혀있다.

- 출력
표준 출력에 총점을 한 줄로 출력하라.

- 제한
0 <= Ai <= 100.

- 예제
입력 1 :
1
2
3
4
5
출력 1 :
15

입력 2 : 
0
100
0
10
100
출력 2 : 
210
*/

/* 한국어 주석
이 문제는 간단한 사칙연산을 구현하는 문제이다. 문제에서 주어진 숫자의 범위가 매우 작아 int 자료형으로 구현 가능하다.
*/

/* English Problem Summary
- Question
A card game is played 5 times.
Given the scores for each game as integers, write a program to calculate the total score.

- Input
The program reads the following data from standard input:
On the i-th line (1 ≤ i ≤ 5), an integer Ai is given, representing the score for the i-th game.

- Output
Print the total score on a single line to standard output.

- Constraint
0 <= Ai <= 100.

- Example
Input 1 :
1
2
3
4
5
Output 1 :
15

Input 2 :
0
100
0
10
100
Output 2 :
210
*/

/* English Comment
This problem involves implementing simple arithmetic operations. Since the range of numbers given in the problem is very small, it can be implemented using the int data type.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	const int ROUND = 5;

	int total = 0;

	for (int i = 0; i < ROUND; i++) {
		int score;
		cin >> score;

		total += score;
	}

	cout << total;
}

//Finish