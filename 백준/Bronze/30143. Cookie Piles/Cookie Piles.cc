/*
- Title : 30143 - Cookie Piles
- Start Time : 25-07-10, 01:56
- End Time : 25-07-10, 01:59
- Try : 1
- Category : mathematics, sum of arithmetic sequence
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

		int n, a, d;
		cin >> n >> a >> d;

		cout << n * (a + a + (n - 1) * d) / 2 << "\n";
	}
	return 0;
}

// Finish