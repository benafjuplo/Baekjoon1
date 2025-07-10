/*
- Title : 29986 - Amusement Park Adventure
- Start Time : 25-07-10, 23:07
- End Time : 25-07-10, 23:10
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

	int n, h;
	cin >> n >> h;

	int result = 0;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;

		if (h >= x)
			result++;
	}

	cout << result;

	return 0;
}

// Finish