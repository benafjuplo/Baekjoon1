/*
- Title : 33042 - Strange Mahjong 1
- Start Time : 25-07-21, 11:54
- End Time : 25-07-21, 11:57
- Try : 1
- Category : unordered_map
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	unordered_map <string, int> m;

	for (int i = 1; i <= n; ++i) {
		string str;
		cin >> str;

		m[str]++;
		if (m[str] > 4) {
			cout << i;
			return 0;
		}
	}

	cout << 0;
	return 0;
}

// Finish