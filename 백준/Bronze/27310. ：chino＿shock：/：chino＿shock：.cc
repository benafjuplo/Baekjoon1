/*
- Title : 27310 - :chino_shock:
- Start Time : 26-01-21, 20:39
- End Time : 26-01-21, 20:42
- Try : 1
- Category : implementation, string
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

	string str;
	cin >> str;
	
	int ans = 2+str.size();

	for (int i = 1; i < str.size()-1; ++i) {
		if (str[i] == '_')
			ans += 5;
	}

	cout << ans;

	return 0;
}