/*
- Title : 16727 - ICPC
- Start Time : 24-09-04, 22:13
- End Time : 24-09-04, 22:39
- Try : 2(1 : Typo)
- Category : soccer, basic
*/

/* 한국어 문제 요약
- 문제
Persepolis와 Esteghlal의 축구 경기가 있다.
두 경기를 진행하고 첫 번째 경기는 Persepolis의 연고지, 두 번째 경기는 Esteghlal의 연고지이다. 다음의 규칙을 따라서 승패 결과를 출력하라.
1. 총 경기의 점수가 큰 팀이 승리한다.
2. 총 경기의 점수가 같은 경우 원정 다득점 원칙(away goals rule)을 따른다. 원정 다득점 원칙은 원정 게임 점수가 높은 팀이 승리한다.
3. 위의 규칙으로 승패가 결정되지 않으면 승부차기(Penalty shootout)가 필요하다.

- 입력
Persepolis의 점수를 pi, Esteghlal의 점수를 si라고 하자.
첫 번째 줄에는 p1, s1, 두 번째 줄에는 s2, p2가 주어진다.

- 출력
문제의 규칙에 따라서 승자의 팀명을 출력한다.
승자가 결정되지 않은 경우 Penalty를 출력한다.

- 예제
입력 1 :
3 0
2 1
출력 1 :
Persepolis

입력 2 :
3 1
2 0
출력 2 :
Esteghlal

입력 3 :
2 0
2 0
출력 3 :
Penalty
*/

/* 한국어 주석
이 문제는 축구 경기 룰을 모르는 경우 축구 경기 룰을 이해해야 하는 이상한 문제이다.
먼저 모든 게임이 그렇듯이 총 점수가 높은 팀이 승리한다.
만약 총점이 같은 경우 원정 다득점 원칙(away goals rule)이라는 규칙을 따른다.
원정 다득점 원칙에서는 원정 게임 점수가 더 높은 팀이 승리한다
만약 위의 규칙에서 승패를 가를 수 없는 경우 승부차기(Penalty shootout)가 필요하다.

위의 규칙을 조건문을 이용하여 간단히 구현할 수 있다.
입력 순서가 양 경기 다르므로 주의해야한다.
*/

/* English Problem Summary
- Question
There is a football match between Persepolis and Esteghlal. Two matches will be held, with the first match at Persepolis's home ground and the second at Esteghlal's home ground.
Output the match result according to the following rules:

1. The team with the higher total score across both matches wins.
2. If the total score is tied, the away goals rule applies. The team with more goals scored in the away game wins.
3. If the winner cannot be determined by the above rules, a penalty shootout is required.

- Input
Let Persepolis's score be denoted as pi and Esteghlal's score as si. The first line contains p1, s1, and second line contains s2, p2.

- Output
Print the name of the winning team according to the rules. If no winner is determined, print "Penalty."

- Exapmle
Input 1 :
3 0
2 1
Output 1 :
Persepolis

Input 2 :
3 1
2 0
Output 2 :
Esteghlal

Input 3 :
2 0
2 0
Output 3 :
Penalty
*/

/* English Comment
This problem is a strange one in that you need to understand the rules of a football match if you're not familiar with them.
Like in any game, the team with the higher total score wins. If the total score is tied, the away goals rule applies.
According to the away goals rule, the team with the higher score in the away game wins.
If the winner still cannot be determined by these rules, a penalty shootout is required.

The above rules can be implemented easily using conditional statements.
Be careful, as the input order differs for both matches.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int scoreP = 0;		// Score of Persepolis
	int scoreS = 0;		// Score of Esteghlal

	//First Match - Persepolis is home team
	int p1, s1;
	cin >> p1 >> s1;
	scoreP += p1;
	scoreS += s1;
	
	//Second Match - Esteghlal is home team
	int p2, s2;
	cin >> s2 >> p2;
	scoreP += p2;
	scoreS += s2;

	// First Rule : Aggregate score
	if (scoreP > scoreS)
		cout << "Persepolis";
	else if (scoreP < scoreS)
		cout << "Esteghlal";
	else {
		// Second Rule : Away goals rule
		if(s1>p2)
			cout << "Esteghlal";
		else if(s1 < p2)
			cout << "Persepolis";
		// Penalty
		else
			cout << "Penalty";
	}
}

//Finish