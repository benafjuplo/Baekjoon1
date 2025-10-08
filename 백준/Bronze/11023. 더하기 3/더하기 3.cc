/*
- Title : 11023 - Addition 3
- Start Time : 25-10-08, 23:03
- End Time : 25-10-08, 23:05
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

	int result = 0;
	int x;
	while (cin >> x) {
		result += x;
	}

	cout << result << "\n";

	return 0;
}

// Finish