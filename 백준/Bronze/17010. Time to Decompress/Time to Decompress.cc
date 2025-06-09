/*
- Title : 17010 - Time to Decompress
- Start Time : 25-06-08, 00:23
- End Time : 25-06-08, 00:24
- Try : 1
- Category : implementation
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

	while (n--) {
		int x;
		cin >> x;
		char c;
		cin >> c;

		while (x--)
			cout << c;

		cout << "\n";		
	}

	return 0;
}

// Finish