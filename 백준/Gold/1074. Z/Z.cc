/*
- Title : 1074 - Z
- Start Time : 25-07-15, 15:44
- End Time : 25-07-15, 16:35
- Try : 1
- Category : mathematics, divide and conquer, recursion
- Language : C++20
*/

/* 한국어 주석
2^n을 계산할 때 비트 시프트 연산자를 사용하는 것이 좋다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, r, c;
	cin >> n >> r >> c;

	long long result = 0;
	int length = 1 << n;	// == 2^n	 

	while(n-->0) {
		length >>= 1;

		int block = 0;

		if (r >= length) {
			block += 2;
			r -= length;
		}
		if (c >= length) {
			block += 1;
			c -= length;
		}

		result += block * length * length;
	}

	cout << result;

	return 0;
}

// Finish