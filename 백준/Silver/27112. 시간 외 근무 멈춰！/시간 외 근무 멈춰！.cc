/*
- Title : 27112 - Stop Overtime Work!
- Start Time : 24-11-10, 20:00
- End Time : 24-11-10, 20:34
- Try : 1
- Category : sorting, greedy algorithm
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
개발 프로젝트는 총 N개의 작업으로 이루어져 있으며, 각 작업은 ti의 근무일이 필요하며 개발 프로젝트가 시작한 이후 di일이 지나기 전에 끝내야 한다.
그러나 평시 근무만으로는 모든 N개의 작업을 시간 내에 끝내지 못할 수 있기에 개인 정비시간을 포기하며 시간 외 근무를 하고자 한다.
개발 프로젝트는 월요일부터 시작하며, 평시 근무는 월요일부터 금요일까지만 진행한다.
시간 외 근무는 요일과 관계없이 매일 최대 한 번씩만 진행할 수 있으며, 시간 외 근무를 1회 진행하면 1일치 업무를 끝마칠 수 있다.

모든 작업을 마감 기한 전까지 끝내고자 할 때 해야 하는 최소 시간 외 근무 일수를 구하는 프로그램을 작성하라.

- 입력
첫 번째 줄에 작업의 개수 N이 주어진다. (1 <= N <= 100,000)
두 번째 줄부터 N+1번째 줄까지, 각 작업의 마감 기한을 나타내는 정수 di와 작업에 걸리는 시간을 나타내는 정수 ti가 공백으로 구분되어 주어진다. (1 <= di,ti <= 100,000)

- 출력
모든 작업을 마감 기한 전까지 끝낼 수 있도록 하는 최소 시간 외 근무 일수를 출력한다.
만약 어떻게 해도 마감 기한 전까지 모든 작업을 끝낼 수 없다면, -1을 출력한다.

- 예제
입력 1 : 
5
5 4
6 2
2 1
9 1
10 3
출력 1 : 
3
입력 2 : 
3
5 3
3 5
4 3
출력 2 :
-1
*/

/* 한국어 주석
이 문제는 적절히 작업을 배정하여 최소 시간 외 근무 일수 를 찾는 문제이다.

먼저 입력으로 프로젝트의 N개의 작업들을 pair<int, int>로 입력받아 저장한다. 이 후 마감일 기준으로 오름차순으로 정렬한다.
이 후 평시 근무 날짜와 시간 외 근무 날짜를 1로 초기화 후 평시 근무 날짜를 우선적으로 하여 작업들을 처리한다.
만약 평시 근무 날짜와 시간 외 근무 날짜 모두 작업의 마감일 보다 크다면 -1을 출력하고 그렇지 않다면 남은 작업들을 반복하여 처리한다.

이 때 평시 근무 날짜는 토요일과 일요일에 대해서 특수하게 처리해야 한다는 것에 주의하여 구현한다.
*/

/* English Problem Summary
- Question
A development project consists of a total of N tasks. Each task requires ti working days and must be completed within di days after the project starts.
However, it may be impossible to finish all N tasks on time with regular work hours alone, so overtime will be used, sacrificing personal maintenance time.
The project starts on a Monday, and regular working hours run from Monday through Friday only.
Overtime can be done daily, regardless of the day of the week, and only once per day. One day of overtime allows for the completion of one day's worth of work.

Write a program to determine the minimum number of overtime days needed to finish all tasks by their deadlines.

- Input
The first line contains the number of tasks N. (1 <= N <= 100,000)
The following N lines each contain two integers, di (the deadline in days from the start) and ti (the days needed to complete the task), separated by a space. (1 <= di, ti <= 100,000)

- Output
Output the minimum number of overtime days required to complete all tasks by their deadlines.
If it is impossible to complete all tasks by their deadlines, output -1.

- Example
Input 1 :
5
5 4
6 2
2 1
9 1
10 3
Output 1 :
3
Input 2 :
3
5 3
3 5
4 3
Output 2 :
-1
*/

/* English Comment
This problem involves assigning tasks appropriately to find the minimum number of overtime days required.

First, input the project’s N tasks and store them as pair<int, int>. Then, sort them in ascending order based on the deadline.
Next, initialize regular workdays and overtime days to 1, prioritizing regular workdays to process the tasks.
If both regular workdays and overtime days exceed the task deadline, print -1; otherwise, continue processing the remaining tasks in a loop.

Note that regular workdays should be specially handled for Saturdays and Sundays.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	vector<pair<int, int>> tasks(N);

	// Read input tasks (deadline, time required)
	for (int i = 0; i < N; ++i) {
		cin >> tasks[i].first >> tasks[i].second;
	}

	// Sort tasks by deadline
	sort(tasks.begin(), tasks.end());

	int currentOverwork = 1;	// Counter for overtime days
	int currentDay = 1;			// Counter for regular working days

	for (int i = 0; i < N; ++i) {
		// Regular work (Monday to Friday)
		while (tasks[i].second > 0 && currentDay <= tasks[i].first) {
			tasks[i].second--;	// Complete one day's work
			currentDay++;		// Move to next day

			// Skip weekends
			if (currentDay % 7 == 6)	// If Saturday
				currentDay += 2;		// Jump to Monday
		}

		// Overtime work (available every day)
		while (tasks[i].second > 0 && currentOverwork <= tasks[i].first) {
			tasks[i].second--;	// Complete one day's work during overtime
			currentOverwork++;	// Move to next overtime day
		}

		// Check if task is completed
		if (tasks[i].second != 0) {
			cout << -1;
			return 0;	// Impossible to meet deadline
		}
	}

	// Output the total overtime days used
	cout << currentOverwork - 1;

	return 0;
}

//Finish