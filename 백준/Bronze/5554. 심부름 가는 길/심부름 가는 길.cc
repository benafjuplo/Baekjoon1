/*
- Title : 5554 - On My Way to Run an Errand
- Start Time : 24-09-26, 20:22
- End Time : 24-09-26, 20:23
- Try : 1
- Category : mathematics, basic, simple
*/

/* 한국어 문제 요약
- 문제
4번의 이동 시간이 초 단위로 주어진다.
총 이동 시간을 분과 초로 출력하라.

- 입력
입력은 총 4줄이며, 한 줄에 하나씩 양의 정수로 주어지며 초 단위이다.
총 이동시간은 항상 1분 0초 이상, 59분 59초 이하이다.

- 출력
총 이동시간 x 분 y 초를 출력한다. 첫 번째 줄에 x를, 두 번째 줄에 y를 출력한다.

- 예제
입력 1 : 
31
34
7
151
- 출력 1 : 
3
43
입력 2 :
316
430
643
1253
- 출력 2 :
44
2
- 입력 3 : 
5
10
15
30
- 출력 3 : 
1
0
*/

/* 한국어 주석
간단하게 4번 반복하여 입력을 받고 동시에 총 시간(초 단위)을 계산한다. 나누기와 모듈러 연산으로 분과 초를 나누어 출력한다.
*/

/* English Problem Summary
- Question
The times for 4 movements are given in seconds.
Print the total time in minutes and seconds.

- Input
The input consists of 4 lines, with each line containing a positive integer representing time in seconds.
The total time will always be between 1 minute 0 seconds and 59 minutes 59 seconds.

- Output
Print the total time as x minutes and y seconds. Print x on the first line and y on the second line.

- Example
Input 1 :
31
34
7
151
- Output 1 :
3
43
Input 2 :
316
430
643
1253
- Output 2 :
44
2
- Input 3 :
5
10
15
30
- Output 3 :
1
0
*/

/* English Comment
Simply repeat the input process 4 times while simultaneously calculating the total time in seconds.
Use division and modulus operations to separate the minutes and seconds, then print the result.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int total = 0;

	for (int i = 0; i < 4; i++) {
		int sec;
		cin >> sec;
		total += sec;
	}

	cout << total / 60 << "\n" << total % 60;	
}

//Finish