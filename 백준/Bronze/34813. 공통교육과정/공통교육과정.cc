/*
- Title : 34813 - Common Curriculum
- Start Time : 26-01-25, 01:33
- End Time : 26-01-25, 01:36
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

	char c;
	cin >> c;

	if (c == 'F')
		cout << "Foundation";
	else if (c == 'C')
		cout << "Claves";
	else if (c == 'V')
		cout << "Veritas";
	else
		cout << "Exploration";

	return 0;
}
