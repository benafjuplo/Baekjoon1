/*
- Title : 27959 - Chocolate Bar
- Start Time : 24-12-10, 19:14
- End Time : 24-12-10, 19:18
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
100원 동전을 N개로 가격이 M원인 초코바를 구매할 수 있는지 판단하는 프로그램을 작성하라.

- 입력
첫 번째 줄에 두 정수 N과 M이 공백을 사이에 두고 주어진다. (1 <= N <= 100, 1 <= M <= 10,000)

- 출력
초코바를 구매할 수 있으면 Yes를, 없으면 No를 출력한다.

- 예제
입력 1 :
30 300
출력 1 :
Yes
입력 2 : 
5 10000
출력 2 :
No
입력 3 :
7 785
출력 3 :
No
*/

/* 한국어 주석
이 문제는 100 * N >= M으로 해결 가능하다.
*/

/* English Problem Summary
- Problem
Write a program to determine if a chocolate bar with a price of M won can be purchased using N coins of 100 won each.

- Input
The first line provides two integers N and M separated by a space. (1 <= N <= 100, 1 <= M <= 10,000)

- Output
Print "Yes" if the chocolate bar can be purchased, otherwise print "No."

- Example
Input 1 :
30 300
Output 1 :
Yes
Input 2 :
5 10000
Output 2 :
No
Input 3 :
7 785
Output 3 :
No
*/

/* English Comment
This problem can be solved by checking the condition 100 * N >= M.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	if (N * 100 >= M)
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
//Finish