/*
- Title : 29683 - Christmas Lottery
- Start Time : 25-06-10, 00:59
- End Time : 25-06-10, 01:03
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

	int n, A;
	cin >> n >> A;

	int result = 0;

	for (int i = 0; i < n; ++i) {
		int a_i;
		cin >> a_i;

		result += a_i / A;
	}

	cout << result;

	return 0;
}

// Finish