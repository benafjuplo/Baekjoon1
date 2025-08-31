/*
- Title : 17388 - Noisy but noble
- Start Time : 25-09-01, 02:59
- End Time : 25-09-01, 03:01
- Try : 1
- Category :
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int s, k, h;
	cin >> s >> k >> h;

	if(s + k + h >= 100) cout << "OK\n";
	else {
		if (s <= k && s <= h) cout << "Soongsil\n";
		else if (k <= s && k <= h) cout << "Korea\n";
		else cout << "Hanyang\n";
	}

	return 0;
}

// Finish