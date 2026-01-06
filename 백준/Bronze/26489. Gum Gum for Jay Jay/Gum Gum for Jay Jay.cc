/*
- Title : 26489 - Gum Gum for Jay Jay
- Start Time : 26-01-07, 03:25
- End Time : 26-01-07, 03:27
- Try : 1
- Category : implementation, string, getline
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
	int ans = 0;
	while (getline(cin, str)) {
		ans++;
	}

	cout << ans;

	return 0;
}
