/*
- Title : 2766 - Candy Sharing Game
- Start Time : 24-12-14, 22:37
- End Time : 
- Try : 1
- Category : simulation
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
여러 학생이 중앙에 있는 선생님을 마주 보며 원형으로 앉아 있다. 각 학생은 처음에 짝수 개의 사탕을 가지고 있다. 교사가 호루라기를 불면, 모든 학생은 동시에 자신이 가진 사탕의 절반을 오른쪽에 있는 이웃에게 준다.
이 과정에서 사탕 개수가 홀수가 되는 학생은 교사에게 사탕을 하나 더 받는다. 모든 학생이 동일한 개수의 사탕을 가지게 되면 게임이 끝난다.

각 학생이 처음에 가지고 있는 사탕의 양에 따라 교사가 호루라기를 부는 횟수와, 학생 한 명당 마지막으로 가지는 사탕의 개수를 구하는 프로그램을 작성하라.

- 입력
입력은 하나 이상의 게임을 설명한다. 각 게임은 학생 수 N으로 시작하고, 그 뒤에는 원을 따라 시계 반대 방향 순서로 학생들의 N개의(짝수) 사탕 수가 주어진다.
입력은 학생 수가 0인 상태로 끝난다. 입력된 각 숫자는 한 줄에 하나씩 주어진다.

- 출력
각 게임별로, 게임의 라운드 수와 각 학생이 가지는 사탕 수를 한 줄에 출력한다.

- 힌트
게임은 다음과 같은 이유로 유한한 단계안에 종료된다.

1. 사탕의 최대 개수는 결코 늘어날 수 없다.
2. 최소 사탕 개수는 결코 줄어들 수 없다.
3. 최소 사탕 개수 이상을 가지고 있는 사람은 누구도 최소 사탕 개수로 줄어들지 않는다.
4. 최대 및 최소 사탕 수가 동일하지 않은 경우 최소 사탕 수를 가진 학생 중 적어도 한 명은 사탕 수를 늘려야 한다.

- 예제
입력 : 
6
36
2
2
2
2
2
11
22
20
18
16
14
12
10
8
6
4
2
4
2
4
6
8
0
출력 : 
15 14
17 22
4 8
*/

/* 한국어 주석
이 문제는 학생들의 사탕 개수가 주어졌을 때, 규칙을 따라 진행한 후 모든 학생의 사탕 개수가 같아지는 데 걸리는 라운드 수와 사탕의 개수를 구하는 문제이다.

수학적으로 해결하기에는 복잡한 구조이므로, 문제의 규칙을 그대로 시뮬레이션하는 것이 적합하다.
학생 수 N의 크기에 맞는 벡터를 사용하여 규칙을 적용하며, 각 단계에서 사탕의 이동과 홀수 보정을 구현하면 된다.
예제가 문제의 조건을 명확히 보여주므로, 구현 후 테스트하면 문제를 쉽게 해결할 수 있다.
*/

/* English Problem Summary
- Problem
Several students sit in a circle facing a teacher in the center. Initially, each student has an even number of candies.
When the teacher blows a whistle, all students simultaneously give half of their candies to the neighbor on their right.
If a student's number of candies becomes odd, they receive one more candy from the teacher.

The game ends when all students have the same number of candies.

Write a program to calculate the number of rounds required and the final number of candies each student will have.

- Input
The input describes one or more games. Each game starts with the number of students N, followed by N even integers representing the number of candies each student initially has.
The input ends with a line containing 0, indicating no more games. Each number is provided on a separate line.

- Output
For each game, output the number of rounds and the number of candies each student ends up with on one line.

- Hint
The game ends in a finite number of steps because:
1. The maximum number of candies never increases.
2. The minimum number of candies never decreases.
3. No student who has more candies than the minimum can drop to the minimum.
4. If the maximum and minimum candy counts are not equal, at least one student with the minimum must increase their candies.

- Example
Input :
6
36
2
2
2
2
2
11
22
20
18
16
14
12
10
8
6
4
2
4
2
4
6
8
0
Output :
15 14
17 22
4 8
*/

/* English Comment
This problem involves determining the number of rounds required and the final candy count per student after following a set of rules based on the initial candy counts provided for each student.

A mathematical approach may be overly complex, so directly simulating the rules as described is more appropriate. A vector of size N (number of students) can be used to represent the candy counts.
Apply the rules iteratively in each round to simulate candy distribution and adjustments for odd numbers.
Given the clarity of the example in the problem description, implementing the simulation and testing against the example should lead to a straightforward solution.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;	// number of students
	cin >> N; 

	while (N != 0) {

		vector<int> v(N);
		vector<int> newV(N);
		cin >> v[0];
		
		bool isFinish = true;

		for (int i = 1; i < N; ++i) { 
			cin >> v[i];
			if (isFinish && v[i - 1] != v[i]) isFinish = false;
		}

		if (isFinish && v[0] != v[N-1]) isFinish = false;

		newV = v;
				
		// Initial state completed
		if (isFinish) {
			cout << 0 << v[0];
			cin >> N;
			continue;
		}

		long long cnt = 0;	// count for game
		isFinish = true;
		
		while (isFinish) {
			cnt++;

			// calculate newV in index 0 before loop
			newV[0] += v[N - 1] / 2;
			newV[0] -= v[0] / 2;
			if (newV[0] % 2 == 1) newV[0]++;	// odd -> even

			for (int i = 1; i < N; ++i) {
				newV[i] += v[i - 1] / 2;
				newV[i] -= v[i] / 2;
				if (newV[i] % 2 == 1) newV[i]++;	// odd -> even
				if (isFinish && newV[i] != newV[i - 1]) isFinish = false;
			}

			// check the finish condition after loop
			if (isFinish && newV[0] != newV[N - 1]) isFinish = false;

			// debug
			// for (int i = 0; i < N; ++i) cout << v[i] << " ";
			// cout << "\n";

			// if condition is fulfilled, print the output and break the loop
			if (isFinish) {
				cout << cnt << " " << newV[0] << "\n";
				isFinish = false;
			}
			// else loop again
			else isFinish = true;
			v = newV;
		}

		// new game
		cin >> N;
	}

	return 0;
}

//Finish