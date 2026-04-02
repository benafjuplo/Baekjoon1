/*
- Title : 28248 - Deliv-e-droid
- Start Time : 26-04-03, 05:19
- End Time : 26-04-03, 05:21
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

	int p, c;
	cin >> p >> c;

	int f = p * 50 - c * 10;
	if (p>c)
		f += 500;

	cout << f << "\n";

	return 0;
}
