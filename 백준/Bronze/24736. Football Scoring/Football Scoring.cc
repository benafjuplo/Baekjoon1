/*
- Title : 24736 - Football Scoring
- Start Time : 25-01-18, 20:04
- End Time : 25-01-18, 20:06
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic
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

	for (int i = 0; i < 2; ++i) {
		int T, F, S, P, C;
		cin >> T >> F >> S >> P >> C;
		cout << T * 6 + F * 3 + S * 2 + P * 1 + C * 2 << " ";
	}

	return 0;
}

//Finish