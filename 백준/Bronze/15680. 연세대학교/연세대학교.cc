/*
- Title : 15680 - Yonsei University
- Start Time : 24-10-02, 22:47
- End Time : 24-10-02, 22:56
- Try : 1
- Category : simple, basic, I/O
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
입력이 0이면 "YONSEI"를 1이면 "Leading the Way to the Future"를 출력하는 프로그램을 작성하라.

- 입력
첫째 줄에 N이 주어진다. (N = 0 또는 1)

- 출력
N = 0일 경우: "YONSEI"를 출력한다.
N = 1일 경우: "Leading the Way to the Future"를 출력한다.

- 예제
입력:
0
출력:
YONSEI
*/

/* 한국어 주석
입력을 받고, 입력 값에 따라 간단히 출력하는 문제이다.
*/

/* English Problem Summary
- Question
Write a program that prints "YONSEI" if the input is 0, and prints "Leading the Way to the Future" if the input is 1.

- Input
The first line contains an integer N. (N = 0 or 1)

- Output
If N = 0, print "YONSEI".
If N = 1, print "Leading the Way to the Future".

- Example
Input:
0
Output:
YONSEI
*/

/* English Comment
This is a simple problem where input is received, and output is generated based on the input value.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	if (N == 0)
		cout << "YONSEI";
	else
		cout << "Leading the Way to the Future";
}

//Finish
