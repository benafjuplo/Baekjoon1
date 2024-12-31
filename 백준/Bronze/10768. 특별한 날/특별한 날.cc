/*
- Title : 10768 - Special Day
- Start Time : 24-12-31, 21:46
- End Time : 24-12-31, 21:50
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

	int m, d;
	cin >> m >> d;
	if (m < 2 || (m == 2 && d < 18)) cout << "Before";
	else if(m == 2 && d == 18) cout << "Special";
	else cout << "After";

	return 0;
}

//Finish