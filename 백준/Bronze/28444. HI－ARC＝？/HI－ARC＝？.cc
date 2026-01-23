/*
- Title : 28444 - HI-ARC=?
- Start Time : 26-01-23, 13:48
- End Time : 26-01-23, 13:49
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

	int h, i, a, r, c;
	cin >> h >> i >> a >> r >> c;
	cout << h * i - a * r * c;

	return 0;
}
