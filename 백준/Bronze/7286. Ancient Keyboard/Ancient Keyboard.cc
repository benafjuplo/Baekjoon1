/*
- Title : 7286 - Ancient Keyboard
- Start Time : 25-04-26, 01:18
- End Time : 25-04-26, 01:22
- Try : 1
- Category : string, ASCII
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

	int t;
	cin >> t;

	const int MAX_INPUT = 1000;

	while (t--) {
		int n;
		cin >> n;

		vector<int> v(MAX_INPUT, 0);

		while (n--) {
			char c;
			cin >> c;
			int a, b;
			cin >> a >> b;

			for (int i = a; i < b; ++i) {
				v[i]++;
			}
		}

		for (int i = 0; i < MAX_INPUT; ++i) {
			if (v[i])
				cout << (char)('A' - 1 + v[i]);
		}
		cout << "\n";

	}

	return 0;
}

// Finish