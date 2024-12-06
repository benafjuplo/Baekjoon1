/*
- Title : 20492 - Tax
- Start Time : 24-12-07, 03:21
- End Time : 24-12-07, 03:24
- Try : 1
- Category : mathematics, elementary arithmetic, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
대회 상금의 금액이 주어질 때, 다음 두 경우 각각에 대해 실제로 수령하는 금액을 구하라.

1. 전체 상금의 22%를 제세공과금으로 납부하는 경우
2. 상금의 80%를 필요 경비로 인정받고, 나머지 금액 중 22%만을 제세공과금으로 납부하는 경우

- 입력
상금의 금액을 나타내는 하나의 정수 N이 주어진다.

- 출력
1번 경우에 대한 답과 2번 경우에 대한 답을 사이에 공백을 두고 출력한다.

- 제한
1,000 <= N <= 10,000,000
N은 1,000의 배수

- 예제
입력 1 :
10000000
출력 1 :
7800000 9560000
입력 2 : 
1000
출력 2 : 
780 956
*/

/* 한국어 주석
이 문제는 N에 대하여 두 가지 종류로 퍼센트 계산을 수행하고 각각의 결과를 출력하는 문제이다.
*/

/* English Problem Summary
- Problem
Calculate the actual amount of prize money received in the following two cases:

1. Paying 22% of the total prize money as tax.
2. Deducting 80% of the prize money as expenses, then paying 22% tax on the remaining amount.

- Input
A single integer \( N \) representing the amount of prize money is given.

- Output
Print the result for case 1 and case 2 separated by a space.

- Constraints
1,000 <= N <= 10,000,000
N is a multiple of 1,000

- Example
Input 1 :
10000000
Output 1 :
7800000 9560000
Input 2 :
1000
Output 2 :
780 956
*/

/* English Comment
This problem involves performing percentage calculations for N in two different cases and outputting the results for each case.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	cout << N * 78 / 100 << " " << N * 80 / 100 + N * 20 / 100 * 78 / 100;

	return 0;
}

//Finish