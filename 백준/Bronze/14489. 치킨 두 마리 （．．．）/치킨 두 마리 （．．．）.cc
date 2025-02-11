/*
- Title : 14489 - Two Chickens (...)
- Start Time : 25-02-11, 23:00
- End Time : 25-02-11, 23:03
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int A, B, C;
	cin >> A >> B >> C;
	if (A + B >= 2 * C) cout << A + B - 2 * C;
	else cout << A + B;
	
	return 0;
}

//Finish