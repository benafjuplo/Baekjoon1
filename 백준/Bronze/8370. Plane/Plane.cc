/*
- Title : 8370 - Plane
- Start Time : 25-02-05, 21:14
- End Time : 25-02-05, 21:17
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
	
	int n1, k1, n2, k2;
	cin >> n1 >> k1 >> n2 >> k2;

	cout << n1 * k1 + n2 * k2;

	return 0;
}

//Finish