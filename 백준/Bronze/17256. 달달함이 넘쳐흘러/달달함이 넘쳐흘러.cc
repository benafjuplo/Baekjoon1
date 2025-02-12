/*
- Title : 17256 - Overflowing with Sweetness
- Start Time : 25-02-13, 00:11
- End Time : 25-02-13, 00:16
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

	int ax, ay, az;
	int cx, cy, cz;
	cin >> ax >> ay >> az >> cx >> cy >> cz;
	cout << cx - az << " " << cy / ay << " " << cz - ax;

	return 0;
}

//Finish