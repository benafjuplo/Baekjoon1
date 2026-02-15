/*
- Title : 27219 - Robinson Crusoe
- Start Time : 26-02-16, 03:11
- End Time : 26-02-16, 03:13
- Try : 1
- Category : implementation, mathematics, elementary arithmetic
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

	for (int i = 0 ; i < n/5 ;++i)
		cout << "V";
	for (int i = 0 ; i < n%5 ;++i)
		cout << "I";

	return 0;
}
