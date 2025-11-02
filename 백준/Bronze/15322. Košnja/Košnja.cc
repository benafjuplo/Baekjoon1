/*
- Title : 15322 - Mowing
- Start Time : 25-11-01, 21:55
- End Time : 25-11-01, 21:56
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int k;
	cin >> k;

	while (k--) {
		int n, m;
		cin >> n >> m;
		
		int ans = (min(n, m) - 1) * 2;
		cout << ans << '\n';		
	}

	return 0;
}

// Finish