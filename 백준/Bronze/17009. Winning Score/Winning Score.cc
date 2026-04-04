/*
- Title : 17009 - Winning Score
- Start Time : 26-04-05, 04:54
- End Time : 26-04-05, 04:57
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a = 0, b = 0;

	int score3, score2, score1;
	cin >> score3 >> score2 >> score1;

	a = score3 * 3 + score2 * 2 + score1;

	cin >> score3 >> score2 >> score1;

	b = score3 * 3 + score2 * 2 + score1;

	if (a > b) {
		cout << "A\n";
	}
	else if (a < b) {
		cout << "B\n";
	}
	else {
		cout << "T\n";
	}

	return 0;
}
