/*
- Title : 27267 - Room comparison
- Start Time : 25-07-06, 20:??
- End Time : 25-07-06, 20:08
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

	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int M = a * b;
	int P = c * d;

	if (M > P)
		cout << "M";
	else if (M < P)
		cout << "P";
	else
		cout << "E";

	return 0;
}

// Finish