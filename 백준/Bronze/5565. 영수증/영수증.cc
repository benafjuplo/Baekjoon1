/*
- Title : 5565 - Receipt
- Start Time : 25-05-28, 21:26
- End Time : 25-05-28, 21:28
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

	int total;
	cin >> total;
	int sumOfPrice = 0;

	for (int i = 0; i < 9; ++i) {
		int x;
		cin >> x;
		sumOfPrice += x;
	}

	cout << total - sumOfPrice;

	return 0;
}

// Finish
