/*
- Title : 9657 - Stone Game 3
- Start Time : 25-03-17, 12:31
- End Time : 25-03-17, 13:01
- Try : 2 (1 : wrong init of second case)
- Category : dynamic programming, game theory
- Language : C++20
*/

/* 한국어 주석
다이나믹 프로그래밍 방법으로 문제를 해결 가능하다.
n개의 돌로 시작 시 이기는 경우는 n-1과 n-3, n-4으로 시작 시 패배하는 경우가 있을 때 그만큼의 돌을 가지고 가는 것이다.
사실 주석된 부분을 해제해보면 규칙적으로 승리자가 결정된다는 것을 알 수 있다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<bool> winners(N + 1, false);	// true is win, false is lose

	winners[1] = true;
	winners[2] = false;
	winners[3] = true;
	winners[4] = true;

	for (int i = 5;i <= N;++i) {
		if (!winners[i - 1] || !winners[i - 3] || !winners[i - 4]) {
			winners[i] = true;
		}
	}

	//Debug
	//for (int i = 1;i <= N;++i) {
	//	cout << i << " : ";
	//	if (winners[i])
	//		cout << "SK" << "\n";
	//	else
	//		cout << "CY" << "\n";
	//}

	if(winners[N])
		cout << "SK";
	else
		cout << "CY";

	return 0;
}

//Finish
//Submit