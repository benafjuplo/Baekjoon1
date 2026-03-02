/*
- Title : 35277 - Yurim and Haram's Dubai Chewy Cookie Operation
- Start Time : 26-03-03, 04:58
- End Time : 26-03-03, 04:59
- Try : 1
- Category : mathematics, elementary arithmetic
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

	long long n;
	cin >> n;

	long long price = 900 + 60 + 600 + 170 + 160 + 110;

	cout << n / price << "\n";

	return 0;
}
