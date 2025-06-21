/*
- Title : 24751 - Betting
- Start Time : 25-06-20, 23:51
- End Time : 25-06-20, 23:54
- Try : 1
- Category : mathematics, elementary arithmetic, setprecision, fixed
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	double a;
	cin >> a;

	cout << fixed << setprecision(10);
	cout << 100 / a << "\n" << 100 / (100 - a);

	return 0;
}

// Finish