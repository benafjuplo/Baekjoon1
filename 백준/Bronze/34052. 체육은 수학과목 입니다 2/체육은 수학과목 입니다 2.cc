/*
- Title : 34052 - Physical Education is a Math Subject 2
- Start Time : 25-07-22, 14:20
- End Time : 25-07-22, 14:26
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

	const int LIMIT = 1800;

	int prevTimes = 0;

	int PREV_LAPS = 4;

	for (int i = 0; i < PREV_LAPS; ++i) {
		int t;
		cin >> t;
		prevTimes += t;
	}

	int LAST_LAP_TIME = 300;

	if (LAST_LAP_TIME + prevTimes > LIMIT)
		cout << "No";
	else
		cout << "Yes";

	return 0;
}

// Finish