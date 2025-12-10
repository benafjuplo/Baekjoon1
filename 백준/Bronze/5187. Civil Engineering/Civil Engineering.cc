/*
- Title : 5187 - Civil Engineering
- Start Time : 25-12-10, 13:55
- End Time : 25-12-10, 14:02
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int k;
	cin >> k;

	for (int testCase = 1; testCase <= k; testCase++) {
		int m, n;
		cin >> m >> n;

		vector<int> density(m);
		for (int i = 0; i < m; i++) {
			cin >> density[i];
		}

		int totalCost = 0;

		for (int j = 0; j < n; j++) {
			int h, w, d, i;
			cin >> h >> w >> d >> i;

			totalCost += (h * w * d) * density[i - 1];
		}

		cout << "Data Set " << testCase << ":\n";
		cout << totalCost << "\n";
	}

	return 0;
}

// Finish