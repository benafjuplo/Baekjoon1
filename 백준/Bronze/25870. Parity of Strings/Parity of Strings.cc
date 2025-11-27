/*
- Title : 25870 - Parity of Strings
- Start Time : 25-11-28, 05:36
- End Time : 25-11-28, 05:40
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

	vector<int> cnt(26, 0);

	string s;
	cin >> s;

	for (char c : s) {
		cnt[c - 'a']++;
	}

	bool isEven = true;
	bool isOdd = true;

	for (int i = 0; i < 26; i++) {
		if (cnt[i] == 0) continue;
		if(cnt[i] % 2 == 0) {
			isOdd = false;
		} else {
			isEven = false;
		}
	}

	if(isEven) {
		cout << "0\n";
	} else if(isOdd) {
		cout << "1\n";
	} else {
		cout << "2\n";
	}

	return 0;
}

// Finish