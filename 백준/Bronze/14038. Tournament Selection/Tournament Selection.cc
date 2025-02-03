/*
- Title : 14038 - Tournament Selection
- Start Time : 25-02-03, 20:53
- End Time : 25-02-03, 20:58
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	const int NUMBEROFTOURNAMENT = 6;
	
	int numberOfWins = 0;

	for (int i = 0; i < NUMBEROFTOURNAMENT; ++i) {
		char c;
		cin >> c;
		if (c == 'W') numberOfWins++;
	}

	if (numberOfWins == 5 || numberOfWins == 6) cout << 1;
	else if (numberOfWins == 3 || numberOfWins == 4) cout << 2;
	else if (numberOfWins == 1 || numberOfWins == 2) cout << 3;
	else cout << -1;

	return 0;
}

//Finish