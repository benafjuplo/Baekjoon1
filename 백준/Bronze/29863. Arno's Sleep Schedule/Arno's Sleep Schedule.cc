/*
- Title : 29863 - Arno's Sleep Schedule
- Start Time : 24-11-20, 22:43
- End Time : 24-11-20, 22:46
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
아침에 울리도록 알람 시계가 설정되있다. 수면 시간을 계산하는 프로그램을 작성하라.

- 입력
각각 하나의 숫자를 포함하는 두 줄이 주어진다.
첫 번째 줄에는 20에서 23 또는 0에서 3 범위의 잠드는 시간을 나타내는 정수가 주어진다.
두 번째 줄에는 5에서 10 범위의 알람이 울리도로 설정한 시간을 나타내는 정수가 주어진다.
모든 시간은 정수로 표시되며 24시간 형식으로 표시된다.

- 출력
잠든 시간부터 깨어난 시간까지의 시간을 단일 정수로 출력한다.
잠든 시간부터 알람 시간까지 깨어나지 않고 잠을 잔다고 가정하며, 24시간 이상 연속으로 잠을 자지 않는다고 가정한다.

- 예제
입력 : 
23
7
출력 :
8
*/

/* 한국어 주석
이 문제는 잠든 시간과 알람 시간이 주어졌을 때 수면 시간을 계산하는 문제이다.

잠든 시간이 20~23인 경우와 0~3인 경우 두 가지로 나누어 처리하면 간단하게 구현할 수 있다.
*/

/* English Problem Summary
- Problem
Write a program to calculate the sleep duration based on a set alarm clock.

- Input
Two lines, each containing a single integer.
The first line represents the bedtime, which is an integer in the range 20 to 23 or 0 to 3.
The second line represents the alarm time, which is an integer in the range 5 to 10.
All times are given as integers in a 24-hour format.

- Output
Output a single integer representing the duration of sleep from bedtime to wake-up time.
Assume continuous sleep from bedtime to the alarm time, and no sleep duration exceeds 24 hours.

- Example
Input :
23
7
Output :
8
*/

/* English Comment
This problem involves calculating sleep duration based on the given bedtime and alarm time.

To solve the problem, the bedtime can be split into two ranges: 20-23 and 0-3. By handling these two cases separately, the implementation can be kept straightforward.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int startT, endT;
	cin >> startT >> endT;

	if (startT >= 20)
		cout << 24 - startT + endT;
	else
		cout << endT - startT;

	return 0;
}

// Finish