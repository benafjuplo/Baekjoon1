/*
- Title : 27433 - Factorial 2
- Start Time : 24-10-06, 20:53
- End Time : 24-10-06, 20:56
- Try : 1
- Category : mathematics
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

- 입력
첫째 줄에 정수 N(0 ≤ N ≤ 20)이 주어진다.

- 출력
첫째 줄에 N!을 출력한다.

- 예제
입력 1:
10
출력 1:
3628800
입력 2:
0
출력 2:
1
*/

/* 한국어 주석
이 문제는 N!를 출력하는 문제이다.
반복문을 이용하여 간단히 팩토리얼을 구할 수 있다.
이때, 0! = 1인 점과 20! = 2,432,902,008,176,640,000이므로 long long 자료형을 사용해야 한다는 점에 주의해야 한다.
*/

/* English Problem Summary
- Question
Given a non-negative integer N, write a program that prints N!.

- Input
The first line contains an integer N (0 ≤ N ≤ 20).

- Output
Print N! on the first line.

- Example
Input 1:
10
Output 1:
3628800
Input 2:
0
Output 2:
1
*/

/* English Comment
This problem requires printing N!.
The factorial can be easily calculated using a loop.
Note that 0! = 1 and 20! = 2,432,902,008,176,640,000, so it's important to use the long long data type.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	long long factorial = 1;

	for (int i = 1; i <= N; i++) {
		factorial *= i;
	}

	cout << factorial;
}

//Finish