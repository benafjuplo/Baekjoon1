/*
- Title : 17550 - Inquiry I
- Start Time : 24-10-05, 00:19
- End Time : 24-10-05, 00:28
- Try : 1
- Category : prefix sum, brute force
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
n개의 양의 정수 a1, a2, ..., an에 대하여 다음 식의 최댓값을 구하시오.
(a1^2 + ... + ak^2) * (ak+1 + ... + an)

- 입력
첫 번째 줄에 정수 2 <= n <= 10^6이 주어진다.
다음 n개의 줄에는 각각 1 <= ai <= 100인 정수가 주어진다.

- 출력
주어진 식의 최댓값을 출력하시오.

- 예제
입력 1:
5
2
1
4
3
5
출력 1:
168
입력 2:
2
1
1
출력 2:
1
입력 3:
10
8
5
10
9
1
4
12
6
3
13
출력 3:
10530
*/

/* 한국어 주석
이 문제는 매우 많은 개수의 값에 대해 누적합을 구하는 문제이다.
구현은 매우 간단하기에 속도와 메모리 개선을 주요 목표로 설명한다.

주어진 식에서 왼쪽 부분은 제곱의 누적합으로 left라고 정의하고 오른쪽 부분은 누적합으로 right라고 정의한다.
구해야 할 최댓값은 maximalResult라고 정의하자.

먼저 n개의 수열을 입력받아야 한다.
이때, 입력을 받으면서 right에 대하여 미리 계산을 해주면 실행 시간을 감소시킬 수 있다.

이 후 left와 right를 하나씩 변화 시키며 진행한다.
이 때 left*right의 최댓값을 maximalResult에 저장한다.
마지막으로 maximalResult를 출력한다.

각각의 수는 작지만 개수가 매우 많고, 계산식도 숫자를 매우 크게 만드므로 long long 자료형이 필요하다.
*/

/* English Problem Summary
- Question
Given n positive integers a1, a2, ..., an, find the maximum value of the following expression:
(a1^2 + a2^2 + ... + ak^2) * (ak+1 + ak+2 + ... + an)

- Input
The first line contains an integer n (2 ≤ n ≤ 10^6).
Each of the next n lines contains an integer ai (1 ≤ ai ≤ 100).

- Output
Print the maximum value of the given expression.

- Example
Input 1:
5
2
1
4
3
5
Output 1:
168
Input 2:
2
1
1
Output 2:
1
Input 3:
10
8
5
10
9
1
4
12
6
3
13
Output 3:
10530
*/

/* English Comment
This problem involves calculating the cumulative sums over a large number of values.
The implementation is quite simple, so the focus here will be on improving speed and memory efficiency.

In the given expression, the left part (a1^2 + a2^2 + ... + ak^2) is defined as left, and the right part (ak+1 + ak+2 + ... + an) is defined as right.
The maximum value to be found will be referred to as maximalResult.

First, the sequence of n numbers must be input.
While reading the input, it is possible to pre-calculate the value of right to reduce execution time.

Next, iterate through the sequence, updating both left and right at each step.
At each step, store the maximum value of left * right in maximalResult.
Finally, output maximalResult.

Although the individual values are small, the large number of values and the size of the calculations can result in very large numbers, so the long long data type is required.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	//n = 1000000;	// test : maxmimum input 

	vector<short> v(n);
	//vector<int> v(n, 100);	// test : maxmimum input 

	long long left = 0, right = 0;

	// Read input and compute total sum (right)
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		right += v[i];
	}

	// Initialize left and adjust right
	left = v[0] * v[0];
	right -= v[0];

	// Compute initial maximalResult
	long long maximalResult = left * right;

	// Iterate from i = 1 to n - 2 (since k ranges from 1 to n - 1)
	for (int i = 1; i < n-1; i++) {
		left += v[i] * v[i];
		right -= v[i];
		maximalResult = max(maximalResult, left * right);
	}

	cout << maximalResult;
}

//Finish