/*
- Title : 30156 - Malvika is peculiar about color of balloons
- Start Time : 26-02-27, 05:25
- End Time : 26-02-27, 05:31
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		int cntA = 0, cntB = 0;

		for (char c : s) {
			if (c == 'a') cntA++;
			else cntB++;
		}

		cout << min(cntA, cntB) << "\n";
	}

	return 0;
}