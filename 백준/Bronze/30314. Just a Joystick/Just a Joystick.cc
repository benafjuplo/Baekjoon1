/*
- Title : 30314 - Just a Joystick
- Start Time : 26-02-19, 00:56
- End Time : 26-02-19, 01:08
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	string s1, s2;
	cin >> s1 >> s2;

	int ans = 0;

	const int ALPHABET = 26;

	for (int i = 0; i < n; ++i) {
		int diff = abs(s1[i] - s2[i]);
		ans += min(diff, ALPHABET - diff);
	}

	cout << ans << '\n';	

	return 0;
}
