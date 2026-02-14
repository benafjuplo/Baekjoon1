/*
- Title : 28691 - Introduction to the School of Cybersecurity Clubs
- Start Time : 26-02-15, 05:40
- End Time : 26-02-15, 05:42
- Try : 1
- Category : implementation, string
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

	if (c == 'M')
		cout << "MatKor";
	else if (c == 'W')
		cout << "WiCys";
	else if (c == 'C')
		cout << "CyKor";
	else if (c == 'A')
		cout << "AlKor";
	else if(c == '$')
		cout << "$clear";

	return 0;
}
