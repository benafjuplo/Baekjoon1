/*
- Title : 34306 - M-Climb Road
- Start Time : 25-12-23, 00:00
- End Time : 25-12-23, 00:03
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

	int w, n;
	cin >> w >> n;

	cout << w * 5280 / n;

	return 0;
}

// Finish
