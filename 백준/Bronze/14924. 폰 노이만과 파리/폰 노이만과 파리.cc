/*
- Title : 14924 - Von Neumann and the Fly
- Start Time : 26-03-18, 23:11
- End Time : 26-03-18, 23:12
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

	int s, t, d;
	cin >> s >> t >> d;

	cout << t * d / 2 / s << "\n";

	return 0;
}
