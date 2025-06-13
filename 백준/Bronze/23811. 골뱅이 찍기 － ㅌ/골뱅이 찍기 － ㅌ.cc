/*
- Title : 23811 - Printing @ - ㅌ Shape
- Start Time : 25-06-13, 04:55
- End Time : 25-06-13, 05:00
- Try : 1
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
설명생략.
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
		for (int j = 0; j < n; ++j)	cout << "@@@@@";
		cout << "\n";
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)	cout << "@";
		cout << "\n";
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)	cout << "@@@@@";
		cout << "\n";
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)	cout << "@";
		cout << "\n";
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)	cout << "@@@@@";
		cout << "\n";
	}

	return 0;
}

// Finish