/*
- Title : 21176 - Smoothie Stand
- Start Time : 25-12-29, 00:34
- End Time : 25-12-29, 00:42
- Try : 1
- Category : mathematics, elementary arithmetic, brute force
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int k, r;
	cin >> k >> r;

	vector<int> ingredient(k);

	for (int i = 0; i < k; ++i)
		cin >> ingredient[i];

	int ans = 0;

	for (int i = 0; i < r; ++i) {
		int possibleAmount = 1'000'000;
		for (int j = 0; j < k; ++j) {
			int x;
			cin >> x;

			if (x != 0)
				possibleAmount = min(ingredient[j] / x, possibleAmount);
			else
				possibleAmount = possibleAmount;
		}
		int price;
		cin >> price;

		ans = max(possibleAmount * price, ans);
	}

	cout << ans;

	return 0;
}

// Finish