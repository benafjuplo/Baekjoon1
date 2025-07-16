/*
- Title : 9713 - Sum of Odd Sequence
- Start Time : 25-07-16, 09:29
- End Time : 25-07-16, 09:32
- Try : 1
- Category : mathematics, sum of arithmetic sequence, elementary arithmetic
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

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		cout << (n / 2 + 1) * (1 + n) / 2 << "\n";
	}

	return 0;
}

// Finish