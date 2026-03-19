/*
- Title : 32604 - Jumbled Scoreboards
- Start Time : 26-03-19, 22:36
- End Time : 26-03-19, 22:50
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

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < n - 1; ++i) {
		int newA, newB;
		cin >> newA >> newB;
		if (a > newA || b > newB) {
			cout << "no\n";
			return 0;
		}
		a = newA;
		b = newB;
	}

	cout << "yes\n";

	return 0;
}
