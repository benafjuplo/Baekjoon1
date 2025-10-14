/*
- Title : 34552 - Stepping Stone Scholarship
- Start Time : 25-10-15, 04:43
- End Time : 25-10-15, 04:47
- Try : 1
- Category : mathematics, elementary arithemetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	vector<int> m(11);

	for (int i = 0; i < 11; i++) {
		cin >> m[i];
	}

	int n;
	cin >> n;

	int ans = 0;

	for (int i = 0; i < n; ++i) {
		int b;
		double l;
		int s;
		cin >> b >> l >> s;

		if (l >= 2.0 && s >= 17)
			ans += m[b];
	}

	cout << ans << '\n';

	return 0;
}

// Finish