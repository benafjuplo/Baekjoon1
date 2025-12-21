/*
- Title : 17912 - License to Launch
- Start Time : 25-12-22, 04:11
- End Time : 25-12-22, 04:14
- Try : 1
- Category : implementation
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

	int lowest = 2'000'000'000;
	int ans = 0;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (x < lowest) {
			lowest = x;
			ans = i;
		}
	}

	cout << ans;

	return 0;
}

// Finish