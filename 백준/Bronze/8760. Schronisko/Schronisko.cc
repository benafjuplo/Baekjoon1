/*
- Title : 8760 - Shelter
- Start Time : 25-01-09, 22:04
- End Time : 25-01-09, 22:09
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int Z;
	cin >> Z;

	while (Z--) {
		int W, K;
		cin >> W >> K;
		cout << W * K / 2 << "\n";
	}

	return 0;
}

//Finish