/*
- Title : 8932 - Heptathlon
- Start Time : 25-09-10, 20:18
- End Time : 25-09-10, 20:31
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	vector<vector<double>> constant = {
		{ 9.23076, 26.7, 1.835 },
		{ 1.84523, 75, 1.348 },
		{ 56.0211, 1.5, 1.05 },
		{ 4.99087, 42.5, 1.81 },
		{ 0.188807, 210, 1.41 },
		{ 15.9803, 3.8, 1.04 },
		{ 0.11193, 254, 1.88 }
	};

	int t;
	cin >> t;
	while (t--) {
		int total = 0;
		for (int i = 0; i < 7; i++) {
			int p;
			cin >> p;
			if (i == 0 || i == 3 || i == 6)
				total += constant[i][0] * pow((constant[i][1] - p), constant[i][2]);
			else
				total += constant[i][0] * pow((p - constant[i][1]), constant[i][2]);
		}
		cout << total << '\n';
	}

	return 0;
}

// Finish