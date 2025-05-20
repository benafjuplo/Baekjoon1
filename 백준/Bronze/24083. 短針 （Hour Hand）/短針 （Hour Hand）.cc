/*
- Title : 24083 - Hour Hand
- Start Time : 25-05-19, 00:17
- End Time : 25-05-19, 00:20
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic, modular arithmetic
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

	int a, b;
	cin >> a >> b;

	if ((a + b) % 12 == 0)
		cout << 12;
	else
		cout << (a + b) % 12;

	return 0;
}

// Finish