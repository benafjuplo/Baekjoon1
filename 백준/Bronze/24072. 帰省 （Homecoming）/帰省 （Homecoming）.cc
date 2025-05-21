/*
- Title : 24072 - Homecoming
- Start Time : 25-05-20, 23:18
- End Time : 25-05-20, 23:22
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

	int a, b, c;
	cin >> a >> b >> c;

	cout << (a <= c && c < b);	

	return 0;
}

// Finish