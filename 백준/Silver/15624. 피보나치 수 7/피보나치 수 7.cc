/*
- Title : 15624 - Fibonacci Number 7
- Start Time : 24-10-11, 20:44
- End Time : 24-10-11, 20:49
- Try : 1
- Category : mathematics
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
피보나치 수를 식으로 써보면 다음과 같다.
F0 = 0, F1 = 1
Fn = Fn-1 + Fn-2 (n ≥ 2)
n이 주어졌을 때, n번째 피보나치 수를 구하는 프로그램을 작성하시오.

- 입력
첫째 줄에 n이 주어진다. n은 1,000,000보다 작거나 같은 자연수 또는 0이다.

- 출력
첫째 줄에 n번째 피보나치 수를 1,000,000,007으로 나눈 나머지를 출력한다.

- 힌트
n=17일때 까지 피보나치 수는 다음과 같다.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

- 예제
입력 : 
10
출력 :
55
입력 : 
1000
출력 : 
517691607
*/

/* 한국어 주석
이 문제는 피보나치 수를 구하는 문제이다.

문제에서 요구하는 범위가 매우 크므로 1,000,000,007으로 나눈 나머지를 출력해야 하는데 모듈러 연산은 덧셈에 대해 분배법칙이 성립한다.
따라서 반복문으로 간단하게 구현할 수 있다.

모든 숫자는 int 자료형 범위 내에서 가능하다.
*/

/* English Problem Summary
- Question
The Fibonacci sequence is defined as follows:
F0 = 0, F1 = 1
Fn = Fn-1 + Fn-2 (for n ≥ 2)
Given an integer n, write a program to compute the n-th Fibonacci number.

- Input
The first line contains n, which is a natural number or 0, and n ≤ 1,000,000.

- Output
Print the remainder when the n-th Fibonacci number is divided by 1,000,000,007.

- Hint
The Fibonacci sequence up to n=17 is as follows:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

- Example
Input :
10
Output :
55
Input :
1000
Output :
517691607
*/

/* English Comment
This problem involves calculating a Fibonacci number.

Given the large range required by the problem, the remainder of the Fibonacci number divided by 1,000,000,007 must be printed.
Since modular arithmetic is distributive over addition, this can be implemented simply using a loop.

All numbers can be handled within the int data type range.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	// Handle the base case
	if (n == 0) {
		cout << 0;
		return 0;
	}

	if (n == 1) {
		cout << 1;
		return 0;
	}

	// Variables to store previous two Fibonacci numbers
	int prev1, prev2;
	prev1 = 0;
	prev2 = 1;

	int result = 1;

	const int MOD = 1'000'000'007;
	
	for (int i = 0; i < n-1; i++) {
		result = (prev1 + prev2) % MOD;
		prev1 = prev2;
		prev2 = result;
	}
	
	cout << result;
}

//Finish