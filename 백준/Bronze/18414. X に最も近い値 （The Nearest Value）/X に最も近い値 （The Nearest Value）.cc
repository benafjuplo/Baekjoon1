/*
- Title : 18414 - The Nearest Value
- Start Time : 25-05-05, 23:25
- End Time : 25-05-05, 23:27
- Try : 1
- Category : simple, basic, mathematics
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int x, l, r;
	cin >> x >> l >> r;

	if (x < l)
		cout << l;

	else if (r < x)
		cout << r;

	else
		cout << x;

	return 0;
}

// Finish