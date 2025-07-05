/*
- Title : 32306 - Basketball Score
- Start Time : 25-07-06, 00:06
- End Time : 25-07-06, 00:13
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

	int a = 0;
	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;

	int b = 0;
	int b1, b2, b3;
	cin >> b1 >> b2 >> b3;

	a = a1 + a2 * 2 + a3 * 3;
	b = b1 + b2 * 2 + b3 * 3;

	if (a > b)
		cout << 1;
	else if (a < b)
		cout << 2;
	else
		cout << 0;

	return 0;
}

// Finish