/*
- Title : 20833 - Kuber
- Start Time : 25-06-29, 22:49
- End Time : 25-06-29, 22:50
- Try : 1
- Category : mathematics, elementary arithmetic
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

	int n;
	cin >> n;

	int result = 0;

	for (int i = 1; i <= n; ++i)
		result += i * i * i;

	cout << result;

	return 0;
}

// Finish