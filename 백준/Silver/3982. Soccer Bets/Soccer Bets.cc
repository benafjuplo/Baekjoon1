/*
- Title : 3982 - Soccer Bets
- Start Time : 25-09-23, 20:56
- End Time : 25-09-23, 21:10
- Try : 1
- Category : string, unordered_map
- Language : C++20
*/

/* 한국어 주석
unordered_map으로 이긴 팀은 +1, 진 팀은 -1 방식의 점수를 기록한 후, 점수가 4인(16강에서 4번 이긴) 팀이 우승팀이다.
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		unordered_map<string, int> score;

		for (int i = 0; i < 16; ++i) {
			string t1, t2;
			int g1, g2;
			cin >> t1 >> t2 >> g1 >> g2;
			if (score.count(t1) == 0) score[t1] = 0;
			if (score.count(t2) == 0) score[t2] = 0;
			if (g1 > g2) {
				score[t1]++;
				score[t2]--;
			}
			else{
				score[t1]--;
				score[t2]++;
			}
		}

		string wineer;
		int targetScore = 4;
		for (auto &x : score) {
			if (x.second == targetScore) {
				wineer = x.first;
				break;
			}
		}
		cout << wineer << '\n';
	}
}

// Finish