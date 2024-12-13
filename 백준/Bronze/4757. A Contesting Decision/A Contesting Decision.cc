/*
- Title : 4757 - A Contesting Decision
- Start Time : 24-12-13, 15:37
- End Time : 24-12-13, 15:48
- Try : 1
- Category : sorting, maximum
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
프로그래밍 대회가 있다. 이 대회에서는 총 4문제가 출제되며, N개의 팀이 참여한다.
각 팀은 각 문제에 자유롭게 시간을 할애할 수 있으며, 소모한 분단위의 시간만큼 패널티 점수를 받게 된다.
문제를 여러 번 시도할 수 있으며, 두 번째 시도부터는 시도당 20분의 추가 패널티 점수가 부과된다.
문제를 풀지 못한 경우에는 해당 문제의 패널티 점수는 계산하지 않는다.
대회에서는 가장 많은 문제를 푼 팀이 승리하며, 푼 문제의 개수가 같다면 패널티 점수가 적은 팀이 승리한다.
승리한 팀을 알아내는 프로그램을 작성하라.

- 입력
입력은 아래와 같은 형식으로 주어진다. 패널티 점수까지 계산하였을 때 동점인 팀이 없는 것이 보장된다.
첫 번째 줄 : <n 팀>
두 번째 줄 ~ n+1번째 줄 : <이름> <문제1시도> <문제1시간> <문제2시도> <문제2시간> ... <문제4시간>
팀 이름은 공백을 포함하지 않는다. 팀이 문제를 풀지 못한 경우 그 문제의 소모 시간은 0이다. 문제를 푼 경우의 최소 시도 횟수는 1이다.

- 출력
승리한 팀의 이름, 해당 팀이 푼 문제의 개수, 패널티 점수를 나열하여 한 줄로 출력한다.

- 예제
입력 :
4
Stars 2 20 5 0 4 190 3 220
Rockets 5 180 1 0 2 0 3 100
Penguins 1 15 3 120 1 300 4 0
Marsupials 9 0 3 100 2 220 3 80
출력 : 
Penguins 3 475
*/

/* 한국어 주석
이 문제는 주어진 규칙에 따라 승리 팀을 찾는 문제이다.
우선 첫 번째 팀을 승리 팀으로 가정한 뒤, 나머지 팀들과 규칙에 따라 비교 연산을 수행하여 승리 팀을 결정한다.
이 과정은 총 N-1번의 비교로 이루어지며, 시간 복잡도는 O(N)이다.
문제 자체가 간단하므로 추가적인 설명은 생략한다.
*/

/* English Problem Summary
- Problem
A programming competition is being held. In this competition, 4 problems are given, and N teams are participating.
Each team can spend any amount of time on each problem and will receive penalty points equal to the number of minutes spent.
Teams can attempt each problem multiple times, and starting from the second attempt, 20 additional penalty points are added per attempt.
If a team fails to solve a problem, that problem's penalty points are not calculated.
The winning team is the one that solves the most problems. If two or more teams solve the same number of problems, the team with the lower penalty score wins.
Write a program to determine the winning team.

- Input
The input is given in the following format. It is guaranteed that there are no ties in penalty points when calculated.
First line: `<number_of_teams>`
Lines 2 to n+1: `<team_name> <problem1_attempts> <problem1_time> <problem2_attempts> <problem2_time> ... <problem4_time>`
Team names do not contain spaces. If a team does not solve a problem, the time for that problem is 0. The minimum number of attempts for solved problems is 1.

- Output
Print the winning team's name, the number of problems solved, and their penalty points in a single line.

- Example
Input :
4
Stars 2 20 5 0 4 190 3 220
Rockets 5 180 1 0 2 0 3 100
Penguins 1 15 3 120 1 300 4 0
Marsupials 9 0 3 100 2 220 3 80
Output :
Penguins 3 475
*/

/* English Comment
This problem involves determining the winning team based on the given rules.
Initially, the first team is assumed to be the winning team. The remaining teams are compared with the current winning team according to the rules.
This process requires a total of N-1 comparisons, resulting in a time complexity of O(N).
As the problem is straightforward, no additional explanation is provided.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string winner = "";
	int solved = 0;
	int penalty = 0;

	const int CONTESTNUMBER = 4;

	while (n--) {
		string teamName;
		cin >> teamName;
		vector<int> sub(CONTESTNUMBER);
		vector<int> time(CONTESTNUMBER);
		int tempSolved = 0;
		int tempPenalty = 0;
		for (int i = 0; i < CONTESTNUMBER; ++i) {
			cin >> sub[i] >> time[i];
			if (time[i] != 0) {
				tempSolved++;
				tempPenalty += (sub[i] - 1) * 20 + time[i];
			}
		}

		if (solved < tempSolved || (solved == tempSolved && penalty > tempPenalty)) {
			winner = teamName;
			solved = tempSolved;
			penalty = tempPenalty;
		}
	}

	cout << winner << " " << solved << " " << penalty;
	return 0;
}

//Finish