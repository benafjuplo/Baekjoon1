/*
- Title : 26535 - Chicken Pen
- Start Time : 25-12-05, 13:58
- End Time : 25-12-05, 14:05
- Try : 1
- Category : implementation
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

	int chickenSize = 1;

	for (;; ++chickenSize) {
		if (n <= chickenSize * chickenSize)
			break;
	}

	int penSize = chickenSize + 2;

	for (int i = 0; i < penSize; ++i) {
		for (int j = 0; j < penSize; ++j) {
			if(i == 0 || i==penSize-1 || j==0 || j==penSize-1)
				cout << "x";
			else
				cout << ".";
		}
		cout << "\n";
	}

	return 0;
}

// Finish