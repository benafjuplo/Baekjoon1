/*
- Title : 6810 - ISBN
- Start Time : 25-01-16, 21:??
- End Time : 25-01-16, 21:11
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int constant = 9 * 1 + 7 * 3 + 8 * 1 + 0 * 3 + 9 * 1 + 2 * 3 + 1 * 1 + 4 * 3 + 1 * 1 + 8 * 3;
	int a, b, c;
	cin >> a >> b >> c;

	cout << "The 1-3-sum is " << constant + a * 1 + b * 3 + c * 1;

	return 0;
}

//Finish