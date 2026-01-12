/*
- Title : 33169 - Money On Me
- Start Time : 26-01-13, 03:58
- End Time : 26-01-13, 03:59
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

	int a, b;
	cin >> a >> b;
	cout << a * 1000 + b * 10000;

	return 0;
}
