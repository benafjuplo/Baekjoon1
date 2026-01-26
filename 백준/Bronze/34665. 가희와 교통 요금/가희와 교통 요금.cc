/*
- Title : 34665 - Gaehee and Transportation Fare
- Start Time : 26-01-26, 22:13
- End Time : 26-01-26, 22:15
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string a, b;
	cin >> a >> b;

	if (a == b) cout << "0";
	else cout << "1550";

	return 0;
}