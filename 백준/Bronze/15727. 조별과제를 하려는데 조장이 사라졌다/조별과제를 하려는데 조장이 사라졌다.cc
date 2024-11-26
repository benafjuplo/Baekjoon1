/*
- Title : 15727 - The team leader disappeared
- Start Time : 24-11-26, 22:12
- End Time : 24-11-26, 22:14
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
분당 1~5의 거리만큼 울직일 수 있을 때, 거리 L을 이동하는데 걸리는 최소 시간 t를 분 단위로 출력하는 프로그램을 작성하라.

- 입력
첫째 줄에 거리 L(1 <= L <= 1000000)이 주어진다.

- 출력
거리 L을 이동하는 데 걸리는 최소 시간 t를 분 단위로 출력한다.

- 예제
입력 :
12
출력 :
3
*/

/* 한국어 주석
이 문제는 거리 L에 대해 1~5의 속도로 움직일 때 걸리는 최소 시간을 계산하는 간단한 문제이다.
나눗셈과 나머지를 이용하여 다음과 같이 해결할 수 있다:
t = L / 5; 로 기본 분을 계산한 뒤, L % 5 != 0인 경우 추가로 1분을 더해준다.
또한 나눗셈만으로도 소수점 올림 함수를 사용하여 단번에 계산 가능하다.
소수점 올림을 사용하는 경우, 정수형 연산으로 변경하기 위해 (L+4) / 5로 구현할 수도 있다.
*/

/* English Problem Summary
- Problem
Write a program that calculates the minimum time t in minutes required to travel a distance L, where movement per minute can range from 1 to 5 units.

- Input
The first line contains the distance L (1 ≤ L ≤ 1,000,000).

- Output
Output the minimum time t in minutes required to travel distance L.

- Example
Input :
12
Output :
3
*/

/* English Comment
This problem involves calculating the minimum time required to travel distance L when the speed ranges from 1 to 5 units per minute.
The solution can be implemented as follows:
Use division and modulo operations:
t = L/5; calculate the base minutes.
If L % 5 != 0, add an additional minute.
Alternatively, this can be achieved using ceiling division:
Use (L+4)/5 to calculate the result in a single step while ensuring integer arithmetic.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int L;
	cin >> L;

	// int t = (L+4) / 5;
	int t = L / 5;
	if (L % 5 != 0)
		t++;
	cout << t;

	return 0;
}

//Finish