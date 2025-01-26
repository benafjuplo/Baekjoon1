/*
- Title : 5717 - Sangkeun's Friends
- Start Time : 25-01-26, 21:56
- End Time : 25-01-26, 22:00
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
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int x, y;
	cin >> x >> y;
	while (x != 0 || y != 0) {
		cout << x + y << "\n";
		cin >> x >> y;
	}

	return 0;
}

//Finish