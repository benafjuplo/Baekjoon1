/*
- Title : 9806 - The King
- Start Time : 26-02-07, 03:14
- End Time : 26-02-07, 03:16
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, power;
	cin >> n >> power;

	int ans = 0;

	for (int i = 0; i < n; ++i) {
		int base;
		cin >> base;
		int val = pow(base, power);
		if (val > 0)
			ans += val;
	}

	cout << ans;

	return 0;
}