/*
- Title : 17952 - The assignments never end!
- Start Time : 24-09-20, 23:33
- End Time : 24-09-20, 23:41
- Try : 2(1 : stack empty checking)
- Category : stack, pair
*/

/* 한국어 문제 요약
- 문제
분단위로 과제가 추가 된다. 모든 과제의 제출 기한은 이번 학기가 끝낼 때까지이다.
다음과 같은 규칙으로 과제를 하면서 학기를 보낸다.

1. 과제는 가장 최근에 나온 순서대로 한다. 또한 과제를 받으면 바로 시작한다.
2. 과제를 하던 도중 새로운 과제가 나온다면, 하던 과제를 중단하고 새로운 과제를 진행한다.
3. 새로운 과제가 끝났다면, 이전에 하던 과제를 이전에 하던 부분부터 이어서 한다. (아무리 긴 시간이 지나도 본인이 하던 부분을 기억할 수 있다.)

과제는 받자마자 이 과제가 몇 분이 걸릴지 정확하게 알 수 있고, 제출한 과제는 무조건 만점을 받는다.

위와 같은 규칙으로 과제를 수행할 때, 받을 총 과제 점수를 구하는 프로그램을 작성하라.

- 입력
첫째 줄에 이번 학기가 몇 분인지를 나타내는 정수 N이 주어진다. (1 ≤ N ≤ 1,000,000)
두 번째 줄부터 N줄 동안은 학기가 시작하고 N분째에 주어진 과제의 정보가 아래의 두 경우 중 하나로 주어진다.
1 A T: 과제의 만점은 A점이고, 이 과제를 해결하는데 T분이 걸린다. A와 T는 모두 정수이다. (1 ≤ A ≤ 100, 1 ≤ T ≤ 1,000,000)
0: 해당 시점에는 과제가 주어지지 않았다.

- 출력
받을 총 과제 점수를 출력한다.

- 예제
입력 1: 
3
1 100 3
0
0
출력 1: 
100
입력 2:
5
1 10 3
0
1 100 2
1 20 1
0
출력 2:
120
*/

/* 한국어 주석
이 문제의 규칙은 정확히 스택 자료구조를 의미한다.
이때, 스택에 점수와 남은 시간 두 가지를 정보를 동시에 저장해야 하므로, 사용자 정의 구조체 또는 pair<short, int>를 사용할 수 있다.
반복문은 N번 반복되고 주어진 입력에 따라 스택에 과제를 추가하거나 아무런 작업을 하지 않는다.
이 다음 현재 과제가 있다면(스택이 비어있지 않다면) 과제의 남은 시간을 1만큼 감소시킨다. 남은 시간이 0인된 경우 총 점수에 완료한 과제의 점수를 추가하고 과제를 삭제한다.(스택의 pop)
스택과 관련한 작업을 할 때, 항상 스택이 비었는지 확인할 필요가 있다.
*/

/* English Problem Summary
- Question
Assignments are added minute by minute. All assignment deadlines are before the end of this semester.
The semester progresses with assignments following these rules:

1. Assignments are done in the order they were most recently received. As soon as a new assignment is received, it is started immediately.
2. If a new assignment arrives while working on another, the current assignment is paused, and the new assignment is started.
3. Once the new assignment is finished, the previously paused assignment is resumed from where it was left off (no matter how much time has passed, the student remembers exactly where they left off).

Each assignment comes with an exact time needed to complete it, and completed assignments always receive full marks.

Write a program to calculate the total score the student will receive for the assignments, following the rules above.

- Input
The first line contains an integer N, representing the number of minutes in this semester. (1 ≤ N ≤ 1,000,000)
The next N lines contain information about the assignment given in the N-th minute, which can be one of two types:
1 A T: The assignment has a full score of A points, and it takes T minutes to complete. A and T are both integers. (1 ≤ A ≤ 100, 1 ≤ T ≤ 1,000,000)
0: No assignment was given at that minute.

- Output
Print the total score the student will receive for completing assignments.

- Example
Input 1:
3
1 100 3
0
0
Output 1:
100
Input 2:
5
1 10 3
0
1 100 2
1 20 1
0
Output 2:
120
*/

/* English Comment
The rules of this problem precisely describe the stack data structure.
In this case, since both the score and the remaining time for each assignment need to be stored in the stack, a user-defined structure or pair<short, int> can be used.
The loop iterates N times, and based on the input, either adds an assignment to the stack or performs no action.
After that, if there is an ongoing assignment (i.e., if the stack is not empty), the remaining time of the assignment is decreased by 1.
If the remaining time reaches 0, the score of the completed assignment is added to the total score, and the assignment is removed from the stack (pop).
Whenever working with the stack, it is important to always check if the stack is empty.
*/

#include<iostream>
#include<stack>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int score = 0;	// Total score

	int N;	// number of minutes in the semester
	cin >> N;

	// Using short instead of int does not significantly reduce memory usage.
	stack<pair<short, int>> st;	// Stack to hold assignments (A, T)
	
	 // Loop through each minute
	while(N--) {
		char oper;	// Using char instead of int does not significantly reduce memory usage.
		cin >> oper;
		// A new task is assigned: 1 A T
		if (oper == '1') {
			int A, T;
			cin >> A >> T;
			st.push({ A, T });
		}
		// If there is a task
		if (!st.empty()) {
			// Decrease the time of the topmost task (most recent task).
			if (--(st.top().second) == 0) {
				//If the topmost task is completed(T == 0), add its score to totalScore
				score += st.top().first;	// Add score to total
				st.pop();					// Remove the completed task from the stack
			}
		}
	}

	// Output the total score
	cout << score;
}

//Finish