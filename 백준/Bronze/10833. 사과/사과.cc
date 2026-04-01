/*
- Title : 10833 - Apple
- Start Time : 26-04-02, 01:42
- End Time : 26-04-02, 01:43
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

	int ans = 0;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		ans += (b % a);
	}

	cout << ans << "\n";

	return 0;
}
