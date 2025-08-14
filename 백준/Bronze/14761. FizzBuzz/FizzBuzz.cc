/*
- Title : 14761 - FizzBuzz
- Start Time : 25-08-14, 22:42
- End Time : 25-08-14, 23:09
- Try : 1
- Category : mathematics
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

	int x, y, n;
	cin >> x >> y >> n;

	for (int i = 1; i <= n; ++i) {
		bool xFlag = (i % x == 0);
		bool yFlag = (i % y == 0);
		if (xFlag && yFlag) {
			cout << "FizzBuzz" << "\n";
		}
		else if (xFlag) {
			cout << "Fizz" << "\n";
		}
		else if (yFlag) {
			cout << "Buzz" << "\n";
		}
		else {
			cout << i << "\n";
		}
	}

	return 0;
}

// Finish