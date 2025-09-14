/*
- Title : 1718 - Password
- Start Time : 25-09-14, 21:53
- End Time : 25-09-14, 22:19
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string s;
	getline(cin, s);
	string key;
	cin >> key;

	int key_len = key.length();
	
	for(int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] = (s[i] - 'a' - (key[i % key_len] - 'a' + 1) + 26) % 26 + 'a';
		}
		cout << s[i];
	}

	return 0;
}

// Finish