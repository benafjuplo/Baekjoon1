/*
- Title : 26561 - Population
- Start Time : 25-06-24, 01:08
- End Time : 25-06-24, 01:10
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

	int n;
	cin >> n;

	while (n--) {
		int p, t;
		cin >> p >> t;

		cout << p + t / 4 - t / 7 << "\n";
	}

	return 0;
}

// Finish