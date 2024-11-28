/*
- Title : 15963 - CASIO
- Start Time : 24-11-29, 02:07
- End Time : 24-11-29, 02:10
- Try : 2(1 : int size limit)
- Category : simple, basic, long long
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
두 정수가 같은지 확인하는 프로그램을 작성하라.

- 입력
두 정수가 주어진다. 정수는 최대 10자리까지 주어진다.

- 출력
같으면 1을 다르면 0을 출력한다.
		
- 예제
입력 1 :
1 1
출력 1 :
1
입력 2 :
1 0
출력 2 :
*/

/* 한국어 주석
이 문제는 두 수를 입력받고 비교한 뒤 같으면 1을 다르면 0을 출력하면 된다.

입력 범위가 크므로 long long 자료형이 필요하다.
*/

/* English Problem Summary
- Problem
Write a program to check if two integers are equal.

- Input
Two integers are given. Each integer can have up to 10 digits.

- Output
Print 1 if they are equal, otherwise print 0.

- Example
Input 1 :
1 1
Output 1 :
1
Input 2 :
1 0
Output 2 :
*/

/* English Comment
This problem requires reading two numbers, comparing them, and then printing 1 if they are equal or 0 if they are not.

Due to the large input range, the `long long` data type is necessary.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long N, M;
	cin >> N >> M;

	cout << (N == M);

	return 0;
}

//Finish