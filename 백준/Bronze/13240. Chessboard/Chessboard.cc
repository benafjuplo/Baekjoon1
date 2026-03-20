/*
- Title : 13240 - Chessboard
- Start Time : 26-03-20, 21:33
- End Time : 26-03-20, 21:38
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

	int n, m;
	cin >> n >> m;

	bool isAsterisk = true;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if(isAsterisk) {
				cout << "*";
			} else {
				cout << ".";
			}
			isAsterisk = !isAsterisk;
		}
		if (m % 2 == 0)
			isAsterisk = !isAsterisk;
		cout << "\n";
	}

	return 0;
}
