/*
- Title : 9848 - Gift
- Start Time : 25-06-14, 20:29
- End Time : 25-06-14, 20:32
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

	int n, k;
	cin >> n >> k;

	int a, b;
	cin >> a >> b;

	int result = 0;

	if (a - b >= k) result++;


	for (int i = 0; i < n - 2; ++i) {
		a = b;
		cin >> b;
		if (a - b >= k) result++;
	}

	cout << result;

	return 0;
}

// Finish