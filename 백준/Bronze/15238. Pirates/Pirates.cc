/*
- Title : 15238 - Pirates
- Start Time : 25-09-24, 20:00
- End Time : 25-09-24, 20:03
- Try :	1
- Category : string, implementation
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

	int n;
	cin >> n;

	vector<int> cnt(26, 0);

	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		cnt[c - 'a']++;
	}

	int maxCnt = 0;
	char maxChar = 'a';

	for (int i = 0; i < 26; i++) {
		if (cnt[i] > maxCnt) {
			maxCnt = cnt[i];
			maxChar = 'a' + i;
		}		
	}

	cout << maxChar << ' ' << maxCnt << '\n';

	return 0;
}

// Finish