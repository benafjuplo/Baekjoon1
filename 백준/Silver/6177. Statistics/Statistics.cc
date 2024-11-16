/*
- Title : 6177 - Statistics
- Start Time : 24-11-16, 23:51
- End Time : 24-11-16, 23:59
- Try : 1
- Category : sort, mathematics, setprecision, fixed
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
N (1 <= N <= 500)개의 숫자 집합 X_i (-5,000 <= X_i <= 5000)가 주어졌을 때, 아래 두 가지 통계량을 계산하라.
1. 평균: N으로 나눈 숫자의 합
2. 중앙값: N이 홀수이면 N개의 숫자를 정렬했을 때 가운데 있는 숫자, N이 짝수이면 N개의 숫자를 정렬했을 때 가운데 있는 두 숫자의 평균

제출한 정답이 공식 답변과 0.002 이내이면 정답으로 간주된다.

- 입력
첫 번째 줄: 단일 정수: N
두 번째 줄부터 N+1번째 줄 : i+1번째 줄에는 단일 정수 X_i가 포함된다.

- 출력
첫 번째 줄 : 입력 집합의 평균
두 번째 줄 : 입력 집합의 중앙값

- 예제
입력 : 
5
12
4
6
8
2
출력 : 
6.400000
6.000000
*/

/* 한국어 주석
이 문제는 주어진 입력에 대해 중앙값과 평균을 구하는 문제이다.

int 자료형의 vector와 <algorithm> 라이브러리의 sort() 함수를 사용하면 간단하게 구현 가능하다.
문제에서 요구하는 오차 범위는 <iomanip> 라이브러리의 fixed와 setprecision을 사용해 처리하면 된다.
*/

/* English Problem Summary
- Question
Given a set of N (1 <= N <= 500) numbers X_i (-5,000 <= X_i <= 5,000), compute the following two statistics:
1. Mean: The sum of the numbers divided by N.
2. Median: If N is odd, it is the middle number when the numbers are sorted. If N is even, it is the average of the two middle numbers when the numbers are sorted.

A submitted answer is considered correct if it is within 0.002 of the official answer.

- Input
The first line contains a single integer N.
The next N lines contain a single integer X_i each.

- Output
The first line should print the mean of the input set.
The second line should print the median of the input set.

- Example
Input :
5
12
4
6
8
2
Output :
6.400000
6.000000
*/

/* English Comment
This problem involves calculating the mean and median of a given input set.

Using an `int` type vector along with the `sort()` function from the `<algorithm>` library allows for straightforward implementation.
The required precision range for the output can be handled using `fixed` and `setprecision` from the `<iomanip>` library.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> v(N);

	int sumOfX = 0;
	
	for (int i = 0; i < N; i++) {
		cin >> v[i];
		sumOfX += v[i];
	}

	sort(v.begin(), v.end());

	cout << fixed << setprecision(6);

	if (N % 2 == 1)
		cout << (double)sumOfX / N << " " << v[N / 2];
	else
		cout << (double)sumOfX / N << " " << (double)(v[N / 2] + v[N / 2 - 1]) / 2;

	return 0;
}
//Finish