/*
- Title : 33179 - Hezardastan’s Annual Report
- Start Time : 25-06-30, 22:12
- End Time : 25-06-30, 22:14
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

	int n;
	cin >> n;

	int result = 0;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;

		result += x / 2 + x % 2;
	}

	cout << result;

	return 0;
}

 // Finish