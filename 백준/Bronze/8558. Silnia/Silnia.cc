/*
- Title : 8558 - Factorial
- Start Time : 25-02-19, 00:04
- End Time : 25-02-19, 00:08
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

	int n;
	cin >> n;

	int result = 1;

	if (n != 0) {
		for (int i = 1; i <= n; ++i) {
			result *= i;
			result %= 10;
			if (result == 0) break;
		}
	}

	cout << result;

	return 0;
}

//Finish