/*
- Title : 24586 - Cupcake Party
- Start Time : 24-12-01, 09:34
- End Time : 24-12-01, 09:38
- Try : 1
- Category : mathematics, elementary arithmetic, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
일반 컵케이크 상자에는 컵케이크 8개가 들어간다. 작은 상자에는 컵케이크 3개가 들어간다. 한 학급에 학생이 28명 있고, 컵케이크는 최소 28개 있다.
각 학생이 컵케이크를 하나씩 받으면 얼마나 컵케이크가 남을지 구하는 프로그램을 작성하라.

- 입력
첫 번째 줄에는 정규 상자의 개수를 나타내는 정수 R ≥ 0이 주어진다.
두 번째 줄에는 작은 상자의 개수를 나타내는 정수 S ≥ 0이 주어진다.

- 출력
남은 컵케이크의 수를 출력한다.

- 예제
입력 1 : 
2
5
출력 1 : 
3
입력 2 : 
2
4
출력 2 :
0
*/

/* 한국어 주석
이 문제는 일반 상자와 작은 상자의 개수를 기반으로 컵케이크의 총 개수를 계산한 후, 학생 수와의 차이를 구하는 문제이다.
일반 상자의 개수 R과 작은 상자의 개수 S를 입력받아, 총 컵케이크 수를 R * 8 + S * 3으로 계산한 뒤, 학생 수 28을 뺀 값을 출력한다.

문제의 조건에 따라 복잡한 예외 처리는 필요하지 않다.
다만, 문제에서 R과 S의 최대 범위가 명시되지 않았으므로 long long 자료형을 사용하는 것이 적절하다.
*/

/* English Problem Summary
- Problem
A regular box contains 8 cupcakes, while a small box contains 3 cupcakes. There are 28 students in a class, and at least 28 cupcakes are available.
Write a program to calculate how many cupcakes will remain after each student receives one cupcake.

- Input
The first line contains a non-negative integer R ≥ 0 representing the number of regular boxes.
The second line contains a non-negative integer S ≥ 0 representing the number of small boxes.

- Output
Print the number of leftover cupcakes.

- Example
Input 1 :
2
5
Output 1 :
3
Input 2 :
2
4
Output 2 :
0
*/

/* English Comment
This problem calculates the total number of cupcakes based on the given counts of regular and small boxes and
determines how many cupcakes remain after distributing one cupcake per student.

First, take the number of regular boxes R and small boxes S as input.
Calculate the total number of cupcakes as R * 8 + S * 3. Then, subtract the number of students, 28, to find the remaining cupcakes.

Complex exception handling is not required according to the problem's conditions.
Since the problem does not specify the maximum range of R and S, using the long long data type is recommended to handle potential overflow scenarios.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long R, S;
	cin >> R >> S;

	const int REGULARSIZE = 8;
	const int SMALLSIZE = 3;
	const int STUDENTS = 28;

	long long cupcakes = R * REGULARSIZE + S * SMALLSIZE;

	cout << cupcakes - STUDENTS;

	return 0;
}

//Finish