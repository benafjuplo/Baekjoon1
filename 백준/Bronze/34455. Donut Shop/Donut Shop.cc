/*
- Title : 34455 - Donut Shop
- Start Time : 25-10-14, 04:29
- End Time : 25-10-14, 04:31
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

	int d;
	cin >> d;

	int t;
	cin >> t;

	while (t--) {
		char c;
		cin >> c;
		int n;
		cin >> n;

		if (c == '+')
			d += n;
		else
			d -= n;
	}

	cout << d << '\n';

	return 0;
}

// Finish