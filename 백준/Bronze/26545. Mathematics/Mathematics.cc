/*
- Title : 26545 - Mathematics
- Start Time : 24-12-08, 04:32
- End Time : 24-12-08, 04:34
- Try : 1
- Category : mathematics, elementary arithmetic, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
n개의 정수에 대해서 합계를 구하라.

- 입력
첫 번째 줄에는 더할 정수의 개수를 나타내는 단일 정수 n이 주어진다.
다음 n개의 줄에는 각각 하나의 정수가 주어진다.

- 출력
결과값을 한 줄에 출력한다.

- 예제
입력 : 
3
1
2
3
출력 : 
6
*/

/* 한국어 주석
이 문제는 n개의 정수를 더하는 단순한 문제이다.
*/

/* English Problem Summary
- Problem
Calculate the sum of n integers.

- Input
The first line contains a single integer n, which represents the number of integers to be summed.
The next n lines each contain one integer.

- Output
Print the result on a single line.

- Example
Input :
3
1
2
3
Output :
6
*/

/* English Comment
This problem is a straightforward task of summing n integers.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int sumOfN = 0;

	while (n--) {
		int x;
		cin >> x;
		sumOfN += x;
	}

	cout << sumOfN;

	return 0;
}

//Finish