/*
- Title : 12280 - Sorting (Small)
- Start Time : 25-11-30, 04:56
- End Time : 25-11-30, 05:06
- Try : 1
- Category : sorting, implementation
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

	int T;
	cin >> T;

	for (int t = 1; t <= T; ++t) {
		int n;
		cin >> n;

		vector<bool> isOdd(n, false);	 // odd == Alex, even == Bob
		vector<int> alex;
		vector<int> bob;
		alex.reserve(n);
		bob.reserve(n);

		for (int i = 0; i < n; ++i) {
			int num;
			cin >> num;
			if (num % 2 != 0) {
				isOdd[i] = true;
				alex.push_back(num);
			}
			else {
				bob.push_back(num);
			}
		}

		sort(alex.begin(), alex.end());
		sort(bob.begin(), bob.end(), greater<int>());

		int posA = 0;
		int posB = 0;

		cout << "Case #" << t << ": ";
		for(int i = 0; i < n; ++i) {
			if (isOdd[i]) {
				cout << alex[posA++] << ' ';
			}
			else {
				cout << bob[posB++] << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}

// Finish