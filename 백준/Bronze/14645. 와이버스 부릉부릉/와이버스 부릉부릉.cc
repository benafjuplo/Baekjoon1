/*
- Title : 14645 - Wybus Vroom Vroom
- Start Time : 24-11-03, 21:12
- End Time : 24-11-03, 21:13
- Try : 1
- Category : simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
버스 운전수 비와이가 운전하는 버스는 N개의 정거장을 거친 후 종착역에 도착한다.
각 정거장은 내릴 인원수와 올라탈 인원수가 정해져 있다. 종착역에 도착하면 버스에 타고 있던 모든 사람이 내린다.

종착역에 도착했을 때, 버스 운전수의 이름을 출력하라.

- 입력
첫 줄에 출발역과 종착역을 제외한 정거장의 수 N(1 ≤ N ≤ 100,000)과 출발역에서 탑승하는 사람의 수 K(1 ≤ K ≤ 10,000)가 주어진다.
둘째 줄부터 N개의 줄에 걸쳐 각 줄마다 i번째 정거장에서 탑승하는 인원 A와 하차하는 인원 B가 주어진다. (0 ≤ A, B ≤ 10,000)

- 출력
종착역에 도착했을 때, 버스 운전수의 이름을 출력해라.

- 예제
입력 :
3 2
10 3
21 8
0 15
출력 :
비와이
*/

/* 한국어 주석
이 문제는 입력을 받은 후 처리 없이 고정된 답을 출력하는 문제이다.

우선 N과 K를 입력을 받고 N번 만큼 A, B를 받는다.
이 후 입력은 처리하지 않고 한글로 된 문장 "비와이"를 출력한다.
*/

/* English Problem Summary
- Question
The bus driven by driver BewhY stops at N stations before arriving at the final stop.
At each station, a certain number of people get off, and a certain number of people get on. When the bus arrives at the final stop, everyone on board gets off.

Print the name of the bus driver when the bus arrives at the final stop.

- Input
The first line gives the number of stations N (excluding the starting and final stops) and the number of passengers boarding at the starting stop K, with 1≤N≤100,000 and 1≤K≤10,000.
For each of the next N lines, two integers A and B are provided, where A represents the number of passengers boarding and B represents the number of passengers alighting at the i-th station.
(0 ≤ A, B ≤ 10,000)

- Output
Print the name of the bus driver upon arrival at the final stop.

- Example
Input :
3 2
10 3
21 8
0 15
Output :
비와이
*/

/* English Comment
This problem requires outputting a fixed answer after receiving the input.

First, read N and K as inputs, then read A and B for N times.
After processing the input, output the sentence "비와이" without any further calculations.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	while (N--) {
		int A, B;
		cin >> A >> B;
	}

	cout << "비와이";

	return 0;
}

//Finish