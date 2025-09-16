/*
- Title : 21354 - Apples and pears
- Start Time : 25-09-16, 23:49
- End Time : 25-09-16, 23:51
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

	int a, p;
	cin >> a >> p;

	a *= 7;
	p *= 13;

	if (a > p) cout << "Axel";
	else if (a < p) cout << "Petra";
	else cout << "lika";

	return 0;
}

// Finish