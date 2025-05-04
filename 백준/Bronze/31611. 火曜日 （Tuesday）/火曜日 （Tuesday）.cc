/*
- Title : 31611
- Start Time : 25-05-05, 00:00
- End Time : 25-05-05, 00:01
- Try : 1
- Category : simple, basic, mathematics
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

	int x;
	cin >> x;

	cout << (x % 7 == 2);

	return 0;
}

// Finish