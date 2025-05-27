/*
- Title : 10!
- Start Time : 25-05-27, 21:34
- End Time : 25-05-27, 21:36
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

	long long result = 6;

	for (int i = 11; i <= n; ++i) {
		result *= i;
	}

	cout << result;

	return 0;
}

// Finish