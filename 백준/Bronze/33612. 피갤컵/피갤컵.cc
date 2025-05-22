/*
- Title : 33612 - P-Gal Cup
- Start Time : 25-05-21, 21:33
- End Time : 25-05-21, 21:51
- Try : 2(special case : 12 month)
- Category : mathematics, elementary arithmetic, modular arithmetic
- Language : C++20
*/

/* 한국어 주석
12월에 주의한다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int year = 2024;
	int month = 8;

	int n;
	cin >> n;	// 1<=n<5
	n--;

	if ((month + 7 * n) % 12 == 0)
		cout << year + (8 + 7 * n) / 12 - 1 << " " << 12;
	else
		cout << year + (8 + 7 * n) / 12 << " " << (month + 7 * n) % 12;
	

	return 0;
}

// Finish