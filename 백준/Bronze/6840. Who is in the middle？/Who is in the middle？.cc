/*
- Title : 6840 - Who is in the middle?
- Start Time : 24-11-26, 00:41
- End Time : 24-11-26, 00:45
- Try : 1
- Category : algorithm, simple, basic, sort, min, max
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
세 개의 무게를 입력받아 중간 크기의 값을 출력하는 프로그램을 작성하라. 모든 무게는 양의 정수이며, 100보다 작다.

- 예제
입력 : 
10
5
8
출력 :
8
*/

/* 한국어 주석
세 양의 정수 중 중간값을 찾는 문제이다.
min과 max를 활용하거나, sort 함수를 사용하거나, 조건문을 반복해서 구현할 수 있다.
*/

/* English Problem Summary
- Problem
Write a program that takes three weights as input and outputs the middle value. All weights are positive integers and less than 100.

- Example
Input :
10
5
8
Output :
8
*/

/* English Comment
This is a problem of finding the middle value among three positive integers.
It can be solved by using `min` and `max` functions, utilizing the `sort` function, or implementing repeated conditional statements.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b, c;
	cin >> a >> b >> c;

	int maximum = max(a, max(b, c));
	int minimum = min(a, min(b, c));

	if (a != maximum && a != minimum)
		cout << a;
	else if (b != maximum && b != minimum)
		cout << b;
	else
		cout << c;

	return 0;
}

//Finish