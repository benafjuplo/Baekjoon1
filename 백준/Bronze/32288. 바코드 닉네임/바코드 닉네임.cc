/*
- Title : 32288 - Barcode Nickname
- Start Time : 26-04-01, 04:28
- End Time : 26-04-01, 04:29
- Try : 1
- Category : string
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

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		char c;
		cin >> c;

		if (c == 'I')
			cout << 'i';
		else
			cout << 'L';
	}

	return 0;
}
