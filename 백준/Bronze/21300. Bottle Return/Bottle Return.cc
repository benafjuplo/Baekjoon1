/*
- Title : 21300 - Bottle Return
- Start Time : 25-03-28, 17:??
- End Time : 25-03-28, 17:47
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

	int result = 0;

	for (int i = 0; i < 6;++i) {
		int x;
		cin >> x;
		result += x;
	}

	result *= 5;
	cout << result;

	return 0;
}

// Finish