/*
- Title : 9085 - Addition
- Start Time : 26-03-25, 02:19
- End Time : 26-03-25, 02:20
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

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		int sum = 0;
		for (int i = 0; i < n; i++) {
			int num;
			cin >> num;
			sum += num;
		}
		cout << sum << "\n";
	}

	return 0;
}
