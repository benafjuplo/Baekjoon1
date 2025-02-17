/*
- Title : 13136 - Do Not Touch Anything
- Start Time : 25-02-17, 20:30
- End Time : 25-02-17, 20:34
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

	long long R, C, N;
	cin >> R >> C >> N;

	cout << (R / N + (bool)(R % N)) * (C / N + (bool)(C % N));

	return 0;
}

//Finish