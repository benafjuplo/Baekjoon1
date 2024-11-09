/*
- Title : 1449 - Repairman Hangsung
- Start Time : 24-11-08, 23:15
- End Time : 24-11-08, 23:40
- Try : 2(1 : test case mistake)
- Category : greedy algorithm, sorting
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
파이프에서 물이 새고 있으며, 이를 수리해야 한다.

물이 새는 위치는 파이프의 가장 왼쪽 끝에서 정수만큼 떨어진 거리로 주어진다.
길이가 L인 테이프를 무한개 가지고 있고, 이 테이프를 사용해 물을 막으려고 한다.
항상 물을 막을 때, 적어도 그 위치의 좌우 0.5만큼 간격을 줘야 물이 다시는 안 샌다.

물이 새는 곳의 위치들과, 가지고 있는 테이프의 길이 L이 주어졌을 때, 필요한 테이프의 최소 개수를 구하는 프로그램을 작성하시오.
테이프는 자를 수 없지만 겹쳐서 붙이는 것은 가능하다.

- 입력
첫째 줄에 물이 새는 곳의 개수 N과 테이프의 길이 L이 주어진다. 둘째 줄에는 물이 새는 곳의 위치가 주어진다.
N과 L은 1,000보다 작거나 같은 자연수이고, 물이 새는 곳의 위치는 1,000보다 작거나 같은 자연수이다.

- 출력
첫째 줄에 필요한 테이프의 개수를 출력한다.

- 예제
입력 1 : 
4 2
1 2 100 101
출력 1 : 
2
입력 2 : 
4 3
1 2 3 4
출력 2 : 
2
입력 3 : 
3 1
3 2 1
출력 3 : 
3
*/

/* 한국어 주석
이 문제는 물을 막기 위해 필요한 최소 테이프 개수를 구하는 문제이다.

누수 위치들을 입력받아 오름차순으로 정렬한 뒤, 가장 왼쪽부터 차례로 테이프를 최대한 오른쪽으로 붙여 나가며 필요한 테이프 개수를 계산한다.
이때 각 위치를 덮을 때 좌우로 0.5 간격을 고려하므로, 실제로는 다음 위치까지 1의 간격을 유지하도록 구현하면 된다.
*/

/* English Problem Summary
- Question
A pipe is leaking, and it needs to be repaired.

The positions of leaks are given as distances from the leftmost end of the pipe, measured in integer units.
There is an unlimited supply of tape, each with a length of L, which will be used to cover the leaks.
To ensure the leak is fully covered, the tape should extend at least 0.5 units on either side of the leak.

Given the positions of leaks and the length L of the tape, write a program to determine the minimum number of tapes needed to cover all the leaks.
The tape cannot be cut but can overlap if necessary.

- Input
The first line contains the number of leaks, N, and the length of each tape, L. The second line contains the positions of the leaks.
N and L are natural numbers less than or equal to 1,000, and the positions of the leaks are integers less than or equal to 1,000.

- Output
Print the minimum number of tapes required.

- Example
Input 1 :
4 2
1 2 100 101
Output 1 :
2
Input 2 :
4 3
1 2 3 4
Output 2 :
2
Input 3 :
3 1
3 2 1
Output 3 :
3
*/

/* English Comment
This problem is about finding the minimum number of tapes required to cover leaks in a pipe.

First, the leak positions are sorted in ascending order.
Then, starting from the leftmost leak, each tape is placed as far to the right as possible to cover subsequent leaks, while counting the tapes needed.
Since each tape must cover 0.5 units on both sides of a leak, the implementation will ensure a 1-unit gap between covered positions.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, L;
	cin >> N >> L;

	int cnt = 0;

	vector<int> points(N);

	// Read the input and store it in a vector
	for(auto &pt : points) {
		cin >> pt;
	}

	sort(points.begin(), points.end());

	int prevPoint = -10000;

	// greedy approach, from left to right
	for (auto& pt : points) {
		// If it is not covered with tape, use tape.
		if (pt > prevPoint + L - 1) {	// The value -1 comes from subtracting 0.5 from each side
			cnt++;
			prevPoint = pt;
		}
	}

	cout << cnt;

	return 0;
}

//Finish