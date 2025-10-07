/*
- Title : 5928 - Contest Timing
- Start Time : 25-10-08, 05:11
- End Time : 25-10-08, 05:22
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

	int d, h, m;
	cin >> d >> h >> m;

	int minutes = (d - 11) * 1440 + (h - 11) * 60 + (m - 11);

	if (minutes < 0) cout << -1;
	else cout << minutes;	

	return 0;
}

// Finish
