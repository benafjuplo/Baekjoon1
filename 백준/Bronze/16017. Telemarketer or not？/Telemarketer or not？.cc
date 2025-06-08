/*
- Title : 16017 - Telemarketer or not?
- Start Time : 25-06-08, 14:14
- End Time : 25-06-08, 14:20
- Try : 2(1 : internal conditional)
- Category : implementation
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

	if (a == 8 || a == 9) {
		if (d == 8 || d == 9) {
			if (b == c) {
				cout << "ignore";
				return 0;
			}
		}
	}

	cout << "answer";

	return 0;
}

// Finish