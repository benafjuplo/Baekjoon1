/*
- Title : 31614 - Minutes
- Start Time : 25-10-28, 21:42
- End Time : 25-10-28, 21:43
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

	int h, m;
	cin >> h >> m;

	cout << h * 60 + m << "\n";

	return 0;
}

// Finish