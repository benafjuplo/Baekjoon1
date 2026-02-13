/*
- Title : 33170 - Blackjack
- Start Time : 26-02-14, 05:23
- End Time : 26-02-14, 05:25
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

	int a, b, c;
	cin >> a >> b >> c;

	if (a + b + c <= 21)
		cout << 1;
	else
		cout << 0;

	return 0;
}
