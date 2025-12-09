/*
- Title : 6246 - The Flower Garden
- Start Time : 25-12-09, 16:15
- End Time : 25-12-09, 16:20
- Try : 1
- Category : implementation, simulation
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

	int n;
	cin >> n;

	vector<bool> flower(n + 1, false);

	int q;
	cin >> q;

	while (q--) {
		int a, b;
		cin >> a >> b;

		for (int i = a; i <= n ; i+=b){
			flower[i] = true;
		}
	}

	int ans = 0;

	for (int i = 1; i <= n; i++) {
		if (!flower[i]) ans++;
	}

	cout << ans << "\n";

	return 0;
}

// Finish