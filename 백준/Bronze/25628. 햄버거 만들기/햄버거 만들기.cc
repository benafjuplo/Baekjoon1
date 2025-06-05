/*
- Title : 25628 - Making a Hamburger
- Start Time : 25-06-01, 22:07
- End Time : 25-06-01, 22:08
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	cout << min(a / 2, b);

	return 0;
}

// Finish