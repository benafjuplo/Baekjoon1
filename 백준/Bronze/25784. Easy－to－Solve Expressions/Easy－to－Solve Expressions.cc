/*
- Title : 25784 - Easy-to-Solve Expressions
- Start Time : 25-06-29, 02:41
- End Time : 25-06-29, 02:43
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
	if (a + b == c || a + c == b || b + c == a)
		cout << 1;
	else if (a * b == c || a * c == b || b * c == a)
		cout << 2;
	else
		cout << 3;

	return 0;
}

// Finish