/*
- Title : 18129 - Strange cipher code
- Start Time : 25-09-19, 13:20
- End Time : 25-09-19, 13:57
- Try : 1
- Category : string, implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string s;
	int k;
	cin >> s >> k;

	// uppoer case to lower case
	for (char& c : s) {
		if (c >= 'A' && c <= 'Z') {
			c = c - 'A' + 'a';
		}
	}

	vector<bool> isUsed(26, false);

	int cnt = 0;
	char prev = s[0];
	for (char c : s) {
		if(c == prev) {
			cnt++;
		}
		else {
			if (!isUsed[prev - 'a']) {
				if (cnt >= k) {
					cout << "1";
				}
				else {
					cout << "0";
				}
				isUsed[prev - 'a'] = true;
			}
			prev = c;
			cnt = 1;
		}
	}
	if (!isUsed[prev - 'a']) {
		if (cnt >= k) {
			cout << "1";
		}
		else {
			cout << "0";
		}
		isUsed[prev - 'a'] = true;
	}

	return 0;
}

// Finish