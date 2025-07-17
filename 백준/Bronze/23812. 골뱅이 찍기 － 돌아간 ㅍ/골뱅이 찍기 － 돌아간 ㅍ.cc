/*
- Title : 23812 - Printing @ - Rotated ㅍ
- Start Time : 25-07-16, 09:??
- End Time : 25-07-16, 09:21
- Try : 1
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

inline void print1(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << "@";
		for (int j = 0; j < n; ++j)
			cout << "   ";
		for (int j = 0; j < n; ++j)
			cout << "@";
		cout << "\n";
	}
}

inline void print2(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cout << "@@@@@";
		cout << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	print1(n);
	print2(n);
	print1(n);
	print2(n);
	print1(n);

	return 0;
}

// Finish