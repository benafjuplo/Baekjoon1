/*
- Title : 1590 - Youngsik Going to Camp
- Start Time : 24-11-21, 22:15
- End Time : 24-11-21, 22:41
- Try : 1
- Category : mathematics, brute force
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
터미널에는 목적지까지 운행하는 N가지의 버스가 있다. 각각의 버스는 시작 시각, 간격, 대수의 정보를 가지고 있다.
예를 들어, 어떤 버스의 시작 시각이 특점 시점을 기준으로 10분 후이고, 간격은 10분이고, 대수가 5대이면, 이 버스는 10분, 20분, 30분, 40분, 50분에 한 대씩 출발한다.
버스터미널에 T분에 도착했을 때, 버스를 타기 위해 기다려야 하는 최소 시간을 구하는 프로그램을 작성하라.

- 입력
첫째 줄에 버스의 개수 N과 버스터미널에 도착하는 시간 T가 주어진다. 둘째 줄부터 총 N개의 줄에 각 버스의 시작 시각 Si, 간격 Ii, 대수 Ci가 공백을 사이에 두고 주어진다.

- 출력
첫째 줄에 버스를 기다려야 하는 시간을 출력한다. 도착하는 동시에 버스가 출발하면 정답은 0이다. 만약 버스가 없어서 목적지에 갈 수 없으면 -1을 출력한다. 정답은 2^31보다 작다.

- 제한
1 ≤ N ≤ 50
1 ≤ T ≤ 1,000,000
1 ≤ Si ≤ 1,000,000
1 ≤ Ii ≤ 10,000
1 ≤ Ci ≤ 100

- 예제
입력 1:
1 285
150 50 10
출력 1:
15
입력 2:
1 123456
123456 10000 1
출력 2:
0
입력 3:
3 1
270758 196 67
904526 8930 66
121164 3160 56
출력 3:
121163
입력 4:
3 1000000
718571 2557 74
480573 9706 54
16511 6660 90
출력 4:
-1
입력 5:
5 395439
407917 8774 24
331425 4386 58
502205 9420 32
591461 1548 79
504695 8047 53
출력 5:
1776

- 힌트
예제 1의 경우 150분, 200분, 250분, ..., 600분에 한 대씩 버스가 출발한다. 따라서 300분에 버스를 타면 된다.
*/

/* 한국어 주석
이 문제는 현재 시간을 기준으로 가장 빠르게 탈 수 있는 버스에 대해서 기다려야 하는 시간을 계산하는 문제이다.

입력이 순차적으로 주어지므로 메모리를 사용하지 않고 입력을 받으며 각각의 버스에 대해서 계산하여 최소 시간을 구하면 된다.

각 버스에 대하여 대수 별로 버스 시간을 계산 후 현재 시간과 비교하여 현재 시간보다 크거나 같으면 계산을 종료하고 기다리는 시간과 비교하여 더 작으면 값을 변경한다.
만약 기다리는 시간이 0이면 계산을 추가로 하지 않고 결과를 출력하고 모든 버스를 계산하였지만 기다리는 시간이 초기값이면 탈 수 있는 버스가 없음을 의미이므로 -1을 출력한다.
*/

/* English Problem Summary
- Problem
There are N buses at the terminal heading to a destination. Each bus has information about its starting time, interval, and the number of buses available.
For instance, if a bus starts at 10 minutes, has an interval of 10 minutes, and runs 5 buses, then it departs at 10 minutes, 20 minutes, 30 minutes, 40 minutes, and 50 minutes.
Given a time T when arriving at the bus terminal, write a program to calculate the minimum waiting time for the next bus.

- Input
The first line contains the number of buses N and the arrival time T at the terminal.
The following N lines each contain three integers: starting time S_i, interval I_i, and count C_i of the buses.

- Output
Print the minimum waiting time for a bus on the first line. If a bus departs at the exact arrival time, the answer is 0.
If no buses are available to reach the destination, print -1. The answer is guaranteed to be less than 2^31.

- Constraint
1 ≤ N ≤ 50
1 ≤ T ≤ 1,000,000
1 ≤ Si ≤ 1,000,000
1 ≤ Ii ≤ 10,000
1 ≤ Ci ≤ 100

- Example
Input 1:
1 285
150 50 10
Output 1:
15
Input 2:
1 123456
123456 10000 1
Output 2:
0
Input 3:
3 1
270758 196 67
904526 8930 66
121164 3160 56
Output 3:
121163
Input 4:
3 1000000
718571 2557 74
480573 9706 54
16511 6660 90
Output 4:
-1
Input 5:
5 395439
407917 8774 24
331425 4386 58
502205 9420 32
591461 1548 79
504695 8047 53
Output 5:
1776

- Hint
For example 1, buses depart at 150 minutes, 200 minutes, 250 minutes, ..., and 600 minutes. Hence, a bus can be taken at 300 minutes.
*/

/* English Comment
This problem calculates the waiting time for the earliest bus that can be taken based on the current time.

Since the input is provided sequentially, memory is not used to store it. Each bus's data is processed as it is received, and the minimum waiting time is calculated.

For each bus, calculate the departure times based on the number of buses, starting time, and interval.
Compare these times with the current time, and if a departure time is greater than or equal to the current time, update the waiting time if the newly calculated time is smaller than the current value.
If the waiting time becomes 0, the result is output immediately without further calculations.
If all buses have been processed and the waiting time remains unchanged, it indicates that no bus is available, so -1 is output.
*/

#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, arrivalTime;
	cin >> N >> arrivalTime;

	// Initialize to INT_MAX to use min
	int waitTime = INT_MAX;

	// if waitTime is already 0, stop the loop
	while (N-- && waitTime!=0) {
		int startTime, interval, count;
		cin >> startTime >> interval >> count;

		int currentTime = startTime;

		for (int i = 0 ;i<count && arrivalTime > currentTime;++i) {
			currentTime = startTime + interval * i;
		}

		if (currentTime >= arrivalTime)
			waitTime = min(waitTime, currentTime - arrivalTime);
	}

	// if there is no bus to get.
	if (waitTime == INT_MAX)
		cout << -1;
	else
		cout << waitTime;

	return 0;
}

//Finish