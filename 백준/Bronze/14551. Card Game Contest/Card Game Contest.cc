/*
- Title : 14551 - Card Game Contest
- Start Time : 25-05-01, 21:58
- End Time : 25-05-01, 22:06
- Try : 2(1 : special case - n==0 && m==1)
- Category : mathematics, modular arithmetic, elementary arithmetic, combinatorics
- Language : C++20
*/

/* 한국어 주석
n == 0 인 경우가 존재하고 m == 1일 때 0이고 나머지는 1임에 유의한다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, m;
	cin >> n >> m;

	if (n == 0) {
		if (m == 1)
			cout << 0;

		else
			cout << 1;
	}

	else {
		int result = 1;

		while (n--) {
			int x;
			cin >> x;
			if (x == 0) x = 1;
			result *= x;
			result %= m;
		}

		result %= m;

		cout << result;
	}

	return 0;
}

// Finish