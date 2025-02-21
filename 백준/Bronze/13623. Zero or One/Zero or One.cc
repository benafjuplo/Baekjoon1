/*
- Title : 13623 - Zero or One
- Start Time : 25-02-22, 00:55
- End Time : 25-02-22, 00:59
- Try : 1
- Category : simple, basic
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

	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c) cout << "*";
	else if (a == b) cout << "C";
	else if (a == c) cout << "B";
	else cout << "A";

	return 0;
}

//Finish