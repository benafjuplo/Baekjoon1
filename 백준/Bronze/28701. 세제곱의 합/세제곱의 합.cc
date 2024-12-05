/*
- Title : 28701 - Sum of Cubes
- Start Time : 24-12-04, 02:53
- End Time : 24-12-04, 03:17
- Try : 1
- Category : mathematics
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
1부터 N까지 수의 합, 그 수를 제곱한 수, 또 1부터 N까지 수의 세제곱의 합을 차례대로 출력하라.

- 입력
첫 줄에 문제의 정수 N이 주어진다. (5 <= N <= 100)

- 출력
세 줄을 출력한다.
첫 줄에는 1부터 N까지 수의 합 1+2+...+N을 출력한다.
둘째 줄에는 1부터 N까지 수의 합을 제곱한 수 1+2+...+N^2을 출력한다.
셋째 줄에는 1부터 N까지 수의 세제곱의 합 1^3+2^3+...+N^3을 출력한다.

- 예제
입력 1 : 
5
출력 1 : 
15
225
225
입력 2 : 
100
출력 2 : 
5050
25502500
25502500
*/

/* 한국어 주석
이 문제는 수학적인 공식을 사용하는 문제이다.

입력의 크기가 작기에 반복문으로 구현 가능하다.
하지만 수학적으로 접근하면 입력 크기에 상관없이 O(1)의 구현이 가능하다.

1+2+...+N은 등차가 1이고 첫 항이 1이고, 마지막 항이 N인 등차수열이다. 공식으로 S = N(1 + N) / 2 이다. 이를 정리하면 (N + N * N) / 2 이다.
두 번째 줄은 간단히 S^2이다. 세 번째 줄은 1^3 + 2^3 + ... + N^3이다. 이것은 왼쪽 직각삼각형 형태로 시각적으로 증명하면 S^2와 같다는 것을 확인할 수 있다.
이를 직각삼각형 형태로 나타내면 다음과 같다:
1
22
333
...
NNNNNN
위와 같이 표현하면 직각삼각형의 크기와 같다는 것을 알 수 있다. 자세한 증명은 생략한다.
*/

/* English Problem Summary
- Problem
Output the sum of numbers from 1 to N, the square of that sum, and the sum of cubes of numbers from 1 to N in order.

- Input
The first line contains the integer N. (5 <= N <= 100)

- Output
Print three lines.
The first line contains the sum of numbers from 1 to N, 1+2+...+N.
The second line contains the square of that sum, (1+2+...+N)^2.
The third line contains the sum of cubes of numbers from 1 to N, 1^3+2^3+...+N^3.

- Example
Input 1 :
5
Output 1 :
15
225
225
Input 2 :
100
Output 2 :
5050
25502500
25502500
*/

/* English Comment
This problem involves using mathematical formulas.

The input size is small enough to solve using a loop. However, with a mathematical approach, it is possible to achieve an O(1) implementation regardless of the input size.

The sum of numbers from 1 to N is an arithmetic sequence with a common difference of 1, a first term of 1, and a last term of N. The formula is: S = N * (1 + N) / 2
Simplifying further, it becomes: S = (N + N * N) / 2
The second line is simply S^2. The third line calculates 1^3 + 2^3 + ... + N^3. This can be visualized as a left-justified right triangle, proving that the sum of cubes equals S^2.
For example:
1
22
333
...
NNNNNN
The shape demonstrates that the total size matches S^2. Detailed proof is omitted.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long N;
	cin >> N;

	long long sumOfN = (N + N*N) / 2; // By formula of sum of arithmetical sequence
	long long squareOFsumOFN = sumOfN * sumOfN;
	
	cout << sumOfN << "\n";
	cout << squareOFsumOFN << "\n";
	cout << squareOFsumOFN << "\n"; // Proven by right triangle approach

	return 0;
}

//Finish