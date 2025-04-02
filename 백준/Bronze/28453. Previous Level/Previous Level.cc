/*
- Title : 28453 - Previous Level
- Start Time : 25-04-02, 10:35
- End Time : 25-04-02, 10:39
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
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

	int limit1 = 300;
	int limit2 = 275;
	int limit3 = 250;

	int n;
	cin >> n;

	while (n--) {
		int m;
		cin >> m;

		if (m < limit3) cout << 4 << " ";
		else if (limit3 <= m && m < limit2) cout << 3 << " ";
		else if (limit2 <= m && m < limit1) cout << 2 << " ";
		else if (limit1 == m) cout << 1 << " ";
	}

	return 0;
}

// Finish