/*
- Title : 26082 - WARBOY
- Start Time : 25-10-16, 04:54
- End Time : 25-10-16, 04:55
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

	int ans = 3 * b * c / a;

	cout << ans << "\n";

	return 0;
}

// Finish