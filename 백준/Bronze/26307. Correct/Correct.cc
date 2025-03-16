/*
- Title : 26307 - Correct
- Start Time : 25-03-10, 15:19
- End Time : 25-03-10, 15:19
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
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int H, M;
	cin >> H >> M;

	cout << (H - 9) * 60 + M - 0;

	return 0;
}

//Finish