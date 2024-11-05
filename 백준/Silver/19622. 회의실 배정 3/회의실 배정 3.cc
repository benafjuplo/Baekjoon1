/*
- Title : 19622 - Meeting Room Assignment 3
- Start Time : 24-11-03, 18:32
- End Time : 24-11-03, 19:07
- Try : 2(1 : Wrong approach)
- Category : dynamic programming, greedy algorithm
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
N개의 회의와 하나의 회의실이 있다. 각 회의는 시작 시간, 끝나는 시간, 회의 인원이 주어지고 한 회의실에서 동시에 두 개 이상의 회의가 진행될 수 없다.
단, 회의는 한번 시작되면 중간에 중단될 수 없으며 한 회의가 끝나는 것과 동시에 다음 회의가 시작될 수 있다. 회의의 시작 시간은 끝나는 시간보다 항상 작다.
N개의 회의를 회의실에 효율적으로 배정할 경우 회의를 진행할 수 있는 최대 인원을 구하는 프로그램을 작성하라.

- 입력
첫째 줄에 회의의 수 N이 주어진다. 둘째 줄부터 N + 1 줄까지 공백을 사이에 두고 회의의 시작시간, 끝나는 시간, 회의 인원이 주어진다.

- 출력
첫째 줄에 회의실에서 회의를 진행할 수 있는 최대 인원을 출력한다.

- 제한
1 ≤ N ≤ 100,000
임의의 회의 K(1≤ K ≤ N)는 회의 K - 1과 회의 K + 1과는 회의 시간이 겹치고 다른 회의들과는 회의 시간이 겹치지 않는다.
모든 회의의 시작 시간과 끝나는 시간은 2^31 - 1보다 작거나 같은 자연수 또는 0이다.
모든 회의의 시작 시간과 끝나는 시간은 서로 다르다. 회의 인원은 1,000보다 작거나 같은 자연수 이다.

- 예제
입력 : 
6
10 40 80
30 60 60
50 80 70
70 100 100
90 120 40
110 140 50
출력 : 
230

- 힌트
예제는 1번, 4번, 6번 회의를 진행하는 게 최적이다.
*/

/* 한국어 주석
이 문제는 회의실 배정을 적절히 정하여 회의에 최대로 참여 가능한 인원을 구하는 문제이다.

보통은 회의실 문제는 복잡하게 구현해야 하지만, 문제의 조건에서 "임의의 회의 K(1≤ K ≤ N)는 회의 K - 1과 회의 K + 1과는 회의 시간이 겹치고 다른 회의들과는 회의 시간이 겹치지 않는다."라는 조건 덕분에
굉장히 쉽게 구현 가능하다.

구현 방법은 시간 순으로 탐색하며 현재 회의 까지의 최대 참여자를 구하는 것이다.
현재 회의 까지의 최대 참여자는 두 회의 전까지의 최대 참여자와 이번 회의의 참여자를 더한 값과 이전 회의 까지의 최대 참여자 중 큰 값을 선택하는 것이다.

이 문제의 범위는 int 자료형 범위 내이므로 int 자료형을 사용하면 된다.
*/

/* English Problem Summary
- Question
There are N meetings and one meeting room. Each meeting has a start time, end time, and a number of participants. Only one meeting can be held at a time in the room.
Once a meeting starts, it cannot be interrupted, and a new meeting can start immediately after the previous one ends. The start time of a meeting is always less than the end time.
Write a program to determine the maximum number of participants that can attend meetings if the meetings are scheduled efficiently in the meeting room.

- Input
The first line contains the number of meetings, N.
From the second line to the N+1-th line, each line contains the start time, end time, and the number of participants of each meeting, separated by spaces.

- Output
Output the maximum number of participants that can attend meetings in the meeting room.

- Constraint
1 ≤ N ≤ 100,000
Any meeting K (1≤ K ≤ N) overlaps in time with meeting K-1 and meeting K+1 but does not overlap with other meetings.
All start and end times are natural numbers or 0, and are less than or equal to 2^31 - 1.
All start and end times are distinct, and each meeting has up to 1,000 participants.

- Example
Input :
6
10 40 80
30 60 60
50 80 70
70 100 100
90 120 40
110 140 50
Output :
230

- Hint
In the example, it is optimal to hold the 1st, 4th, and 6th meetings.
*/

/* English Comment
This problem is about finding the maximum number of participants that can attend meetings by scheduling the meetings optimally in a single meeting room.

Typically, meeting room allocation problems require complex implementation, but in this case, the problem is simplified by the condition:
"Any meeting K (1 ≤ K ≤ N) overlaps with meeting K-1 and meeting K+1, but does not overlap with other meetings." This condition allows a straightforward approach.

The solution involves iterating through the meetings in chronological order and calculating the maximum number of participants up to the current meeting.
For each meeting, the maximum participants count can be derived by taking the maximum of either:
1. The sum of the participants in the current meeting and the maximum participants count up to two meetings prior.
2. The maximum participants count up to the previous meeting.

Since the problem's range fits within the limits of the int data type, using int is sufficient for this implementation.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int pastPastParticipants = 0;
	int pastParticipants = 0;

	int currentParticipants = 0;

	while (N--) {
		int startTime, endTime, participants;
		cin >> startTime >> endTime >> participants;

		currentParticipants = max(pastPastParticipants + participants, pastParticipants);

		pastPastParticipants = pastParticipants;
		pastParticipants = currentParticipants;
	}

	cout << currentParticipants;

	return 0;
}

//Finish