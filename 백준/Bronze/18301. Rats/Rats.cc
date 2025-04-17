/*
- Title : 18301 - Rats
- Start Time : 25-03-28, 17:11
- End Time : 25-03-28, 17:14
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
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n1, n2, n12;

	cin >> n1 >> n2 >> n12;

	cout << (n1 + 1) * (n2 + 1) / (n12 + 1) - 1;

	return 0;
}

// Finish