/*
- Title : 29791 - Erda Nova and Origin Skill
- Start Time : 24-11-22, 22:16
- End Time : 24-11-22, 22:42
- Try : 1
- Category : sorting, counting sort, bitset
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
두 가지 스킬이 있다. 이 두 스킬은 각각 100초와 360초의 재사용 대기 시간을 가진다.
첫 번째 스킬은 몬스터에게 행동 불가를 적용하며, 두 번째 스킬은 몬스터에게 절대 행동 불가를 적용한다.
각 스킬에 대해여 몬스터는 각 스킬을 맞은 후 90초 동안 해당 스킬에 대하여 면역을 갖는다.
예를 들어, 첫 번째 스킬이 0초 시점에서 사용되었다면 몬스터는 90초 시점까지 첫 번째 스킬에 면역이고, 100초 시점부터 첫 번째 스킬을 재사용 할 수 있다.
재사용 대기 시간에 있지 않는 두 스킬을 같이 발동한 경우, 각각 몬스터에게 적용된다.
단축키를 눌렀더라도 누른 시점에 재사용 대기 시간이 지나지 않았거나, 몬스터가 면역 상태인 경우라면 해당 스킬이 적용되지 않는다.

첫 번째 스킬과 두 번째 스킬에 대해 각 스킬의 사용 횟수와 단축키를 누른 시점들이 주어질 때, 몬스터가 행동 불가와 절대 행동 불가 상태가 된 횟수를 구하는 프로그램을 작성하라.
단축키를 누른 시점들은 순사가 섞여 있다.

- 입력
첫 번째 줄에는 첫 번째 스킬의 사용 횟수를 나타내는 정수 N과 두 번째 스킬의 사용 횟수를 나타내는 정수 M이 공백으로 구분되어 주어진다. (1 <= N <= 1,000,000; 1 <= M <= 1,000,000)
두 번째 줄에는 첫 번째 스킬의 단축키를 누른 시점을 나타내는 수 A1, A2, ..., AN이 공백으로 구분되어 주어진다. (1 <= Ai <= 1,000,000)
세 번째 줄에는 두 번째 스킬의 단축키를 누른 시점을 나타내는 수 B1, B2, ..., BM이 공백으로 구분되어 주어진다. (1 <= Bi <= 1,000,000)
두 번째 줄과 세 번째 줄 값은 몬스터를 잡기 시작한 시점으로부터 경과한 시간을 초 단위로 나타내는 정수다.

- 출력
몬스터가 행동 불가와 절대 행동 불가 상태가 된 횟수를 공백으로 구분하여 출력한다.

- 예제
입력 1:
1 1
10
10
출력 1:
1 1
입력 2:
2 1
20 10
10
출력 2:
1 1
입력 3:
2 1
10 10
10
출력 3:
1 1
*/

/* 한국어 주석
이 문제는 게임의 두 스킬에 대하여 재사용 대시 시간, 면역 상태, 그리고 두 스킬의 사용 시점들을 고려하여 몬스터가 각 스킬에 적용된 횟수를 구하는 문제이다.

우선 문제의 난이도에 비해서 원본 문제의 설명이 굉장히 복잡하므로, 위 요약을 보고 문제를 정확히 이해해야 한다.

특히, 두 스킬 모두 재사용 대기 시간보다 면역 지속 시간이 짧기 때문에, 어떠한 경우에도 스킬을 사용하였지만 "행동 불가" 혹은 "절대 행동 불가" 상태가 발생하지 않는 경우는 없다.
따라서 이 문제에서는 면역 조건은 고려하지 않아도 된다. 만약 여러 캐릭터 스킬을 사용한다면 면역 조건은 고려해야 할 것이다.

그리고 단축키를 누른 시점들이 시간순이 아니므로 오름차순으로 정렬해야 한다.
이 후에는 시간 순서대로 마지막으로 스킬을 사용한 시점과 재사용 대기 시간의 합보다 큰 시점에 대해서만 스킬이 사용된 걸로 본다.

입력 데이터는 양적으로 많지만, 모든 값이 int 자료형으로 처리 가능한 범위 내에 있다.

위의 방식으로 구현해도 충분히 통과할 수 있지만, 성능을 개선하고자 한다면 계수 정렬(Counting Sort)을 사용할 수 있다.
입력을 받으면서 자동으로 정렬이 되고, 입력의 범위와 입력 크기의 최댓값이 동일하므로 계수 정렬이 효율적이다.
이 문제는 같은 시간을 한 번만 고려하면 되므로 bool 자료형의 vector 혹은 bitset을 시간의 최댓값+1 크기로 초기화하여 구현할 수 있다.
bitset을 사용하면 bool 자료형의 vector보다 메모리 소모에서 아주 약간의 성능 향상을 얻을 수 있다. 하지만 bitset 방식은 스택을 매우 많이 사용하게 되므로 주의한다.

아래의 구현에서는 bitset을 사용하는 코드를 메인으로 작성하였고, 나머지 방법들은 주석으로 덧붙였다.
*/

/* English Problem Summary
- Problem
There are two skills, each with a cooldown period of 100 seconds and 360 seconds, respectively.
The first skill applies incapacitation to a monster, and the second skill applies absolute incapacitation.
After being hit by each skill, the monster gains immunity to that skill for 90 seconds.
For example, if the first skill is used at time 0, the monster is immune to the first skill until time 90, and the first skill can be reused starting from time 100.
When the two skills, which are not on cooldown, are activated together, both are applied to the monster.
Even if a hotkey is pressed, the skill is not applied if it is still on cooldown or the monster is immune at that time.

Given the number of uses and timestamps when the hotkeys for the first and second skills were pressed,
write a program to calculate how many times the monster was incapacitated and absolutely incapacitated.
The timestamps for pressing the hotkeys are unordered.

- Input
The first line contains two integers, N and M, representing the number of uses of the first and second skills, respectively. (1 ≤ N ≤ 1,000,000; 1 ≤ M ≤ 1,000,000)
The second line contains N integers, A1, A2, ..., AN, representing the timestamps when the hotkey for the first skill was pressed. (1 ≤ Ai ≤ 1,000,000)
The third line contains M integers, B1, B2, ..., BM, representing the timestamps when the hotkey for the second skill was pressed. (1 ≤ Bi ≤ 1,000,000)
The values in the second and third lines are integers indicating the elapsed time in seconds since the monster hunt began.

- Output
Output the number of times the monster was incapacitated and absolutely incapacitated, separated by a space.

- Example
Input 1:
1 1
10
10
Output 1:
1 1
Input 2:
2 1
20 10
10
Output 2:
1 1
Input 3:
2 1
10 10
10
Output 3:
1 1
*/

/* English Comment
This problem involves calculating the number of times a monster was incapacitated or absolutely incapacitated based on the cooldowns, immunity states, and usage timestamps of two skills.

Initially, the complexity of the original problem description can make it difficult to parse the requirements,
so it's essential to carefully analyze the summarized explanation to fully understand the problem.

Notably, since the immunity duration for both skills is shorter than their cooldowns,
there are no cases where a skill was used but no "incapacitation" or "absolute incapacitation" occurred due to immunity.
Hence, immunity conditions do not need to be considered for this problem. If multiple character skills were used, immunity conditions might need to be addressed.

The timestamps of the hotkey presses are not provided in chronological order, so they must be sorted in ascending order first.
Subsequently, the skill is considered used only when the current timestamp exceeds the sum of the last used time and the cooldown period.

The input data is large but manageable within the range of the int data type.

While the described approach is sufficient to solve the problem, performance can be further optimized using counting sort.
This method allows automatic sorting during input processing and is efficient because the maximum input range and the number of elements are the same.
In this case, a bool-type vector or a bitset can be initialized with a size of the maximum timestamp value +1 to store whether each time has been processed.
Using bitset provides slightly better memory efficiency compared to a bool vector. However, caution is required as the bitset approach may use a significant amount of stack space.

The implementation below uses bitset as the main approach, with alternative methods commented for reference.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;	// number of first skiil event
	int M;	// number of second skiil event

	cin >> N >> M;

	const int maxTime = 1'000'000;

	bitset<maxTime+1> event1 = 0;
	bitset<maxTime+1> event2 = 0;

	for (int i = 0; i < N; ++i) {
		int t;
		cin >> t;
		event1[t] = 1;
	}

	for (int i = 0; i < M; ++i) {
		int t;
		cin >> t;
		event2[t] = 1;
	}

	int count1 = 0;
	int count2 = 0;

	const int cooldown1 = 100;
	const int cooldown2 = 360;

	int lastEvent1 = -cooldown1;
	int lastEvent2 = -cooldown2;

	// Process in chronological order with one loop

	for (int currentTime = 1; currentTime <= maxTime; ++currentTime) {
		if (event1[currentTime] && lastEvent1 + cooldown1 <= currentTime) {
			lastEvent1 = currentTime;
			count1++;
		}
		if (event2[currentTime] && lastEvent2 + cooldown2 <= currentTime) {
			lastEvent2 = currentTime;
			count2++;
		}
	}

	cout << count1 << " " << count2;

	return 0;
}

//Finish

// Solution : Counting Sort, bool vector

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	cin.tie(0);
//	//cout.tie(0);
//	ios_base::sync_with_stdio(false);
//
//	int N;	// number of first skiil event
//	int M;	// number of second skiil event
//
//	cin >> N >> M;
//
//	const int maxTime = 1'000'000;
//
//	vector<bool> event1(maxTime + 1, false);
//	vector<bool> event2(maxTime + 1, false);
//
//	for (int i = 0; i < N; ++i) {
//		int t;
//		cin >> t;
//		event1[t] = true;
//	}
//
//	for (int i = 0; i < M; ++i) {
//		int t;
//		cin >> t;
//		event2[t] = true;
//	}
//
//	int count1 = 0;
//	int count2 = 0;
//
//	const int cooldown1 = 100;
//	const int cooldown2 = 360;
//
//	int lastEvent1 = -cooldown1;
//	int lastEvent2 = -cooldown2;
//
//	// Process in chronological order with one loop
//
//	for (int currentTime = 1; currentTime <= maxTime; ++currentTime) {
//		if (event1[currentTime] && lastEvent1 + cooldown1 <= currentTime) {
//			lastEvent1 = currentTime;
//			count1++;
//		}
//		if (event2[currentTime] && lastEvent2 + cooldown2 <= currentTime) {
//			lastEvent2 = currentTime;
//			count2++;
//		}
//	}
//
//	cout << count1 << " " << count2;
//
//	return 0;
//}

// Solution : Vector

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main() {
//	cin.tie(0);
//	//cout.tie(0);
//	ios_base::sync_with_stdio(false);
//
//	int N;	// number of first skiil event
//	int M;	// number of second skiil event
//
//	cin >> N >> M;
//
//	vector<int> event1(N);
//	vector<int> event2(M);
//
//	for (auto &x : event1)
//		cin >> x;
//
//	for (auto& x : event2)
//		cin >> x;
//
//	// Sorting for processing in chronological order.
//	sort(event1.begin(), event1.end());
//	sort(event2.begin(), event2.end());
//
//	int count1 = 0;
//	int count2 = 0;
//
//	const int cooldown1 = 100;
//	const int cooldown2 = 360;
//
//	int lastEvent1 = -cooldown1;
//	int lastEvent2 = -cooldown2;
//
//	// Process in chronological order with one loop
//	int smallLoop = min(N, M);
//
//	int i = 0;
//	for (; i < smallLoop; ++i) {
//		if (lastEvent1 + cooldown1 <= event1[i]) {
//			lastEvent1 = event1[i];
//			count1++;
//		}
//		if (lastEvent2 + cooldown2 <= event2[i]) {
//			lastEvent2 = event2[i];
//			count2++;
//		}
//	}
//
//	if (N >= M) {
//		for (; i < N; ++i) {
//			if (lastEvent1 + cooldown1 <= event1[i]) {
//				lastEvent1 = event1[i];
//				count1++;
//			}
//		}
//	}
//
//	else {
//		for (; i < M; ++i) {
//			if (lastEvent2 + cooldown2 <= event2[i]) {
//				lastEvent2 = event2[i];
//				count2++;
//			}
//		}
//	}
//
//
//
//	cout << count1 << " " << count2;
//
//	return 0;
//}