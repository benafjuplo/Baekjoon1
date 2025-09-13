/*
- Title : 17356 - Uk Je
- Start Time : 25-09-13, 22:05
- End Time : 25-09-13, 22:07
- Try : 1
- Category : mathematics, elementary arithmetic, cmath
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	cout << 1 / (1 + pow(10, (b - a) / 400.0));

	return 0;
}

// Finish