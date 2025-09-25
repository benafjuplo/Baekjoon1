/*
- Title : 27294 - How many?
- Start Time : 25-09-25, 22:45
- End Time : 25-09-25, 22:48
- Try : 1
- Category : mathematics, elementary arithmetic, implementation
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

	int t, s;
	cin >> t >> s;

	if ((12 <= t && t <= 16) && s == 0)
		cout << 320;
	else
		cout << 280;

	return 0;
}

// Finish