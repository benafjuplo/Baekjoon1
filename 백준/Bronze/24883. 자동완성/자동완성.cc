/*
- Title : 24883 - Autocomplete
- Start Time : 25-08-27, 04:11
- End Time : 25-08-27, 04:13
- Try : 1
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	char c;
	cin >> c;

	if(c == 'N' || c == 'n') cout << "Naver D2";
	else cout << "Naver Whale";

	return 0;
}

// Finish