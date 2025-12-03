/*
- Title : 26350 - Good Coin Denomination
- Start Time : 25-12-04, 05:02
- End Time : 25-12-04, 05:10
- Try : 3(2 : wrong output)
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
각 테스트 케이스 출력 사이에 빈 줄을 출력해야 한다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);
	
	int n;
	cin >> n;

	while (n--) {
		int d;
		cin >> d;


		int prev, curr;
		cin >> prev;

		cout << "Denominations: " << prev;

		bool isGood = true;

		for (int i = 0; i < d - 1; ++i) {
			cin >> curr;
			cout << " " << curr;
			if (prev * 2 > curr) {
				isGood = false;
			}
			prev = curr;
		}

		cout << "\n";

		if (isGood) {
			cout << "Good coin denominations!\n\n";
		}
		else {
			cout << "Bad coin denominations!\n\n";
		}
	}

	return 0;
}

// Finish