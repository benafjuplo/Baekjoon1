/*
- Title : 33162 - Walking
- Start Time : 25-06-19, 21:27
- End Time : 25-06-19, 21:35
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

	int x;
	cin >> x;

	if (x % 2 == 0)
		cout << x / 2;
	else
		cout << x / 2 + 3;

	return 0;
}

// Finish
