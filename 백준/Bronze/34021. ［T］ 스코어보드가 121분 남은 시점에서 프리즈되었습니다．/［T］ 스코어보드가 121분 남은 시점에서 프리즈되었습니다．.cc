/*
- Title : 34021 - [T] The scoreboard has been frozen with 121 minutes remaining.
- Start Time : 25-08-06, 22:34
- End Time : 25-08-06, 22:34
- Try : 2(1 : Typo)
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int n, m, l;
		cin >> n >> m >> l;

		const int TIMEMAX = 2000;
		int fastTime = TIMEMAX;

		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;

			if (x != -1) {
				fastTime = min(fastTime, x);
			}
		}

		int result = max(m - fastTime, l);

		if(result!=1)
			cout << "The scoreboard has been frozen with "<< result <<" minutes remaining.";
		else
			cout << "The scoreboard has been frozen with " << 1 << " minute remaining.";

		cout << "\n";		
	}

	return 0;
}

// Finish