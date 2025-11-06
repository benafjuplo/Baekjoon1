/*
- Title : 33191 - Yalda
- Start Time : 25-11-06, 16:00
- End Time : 25-11-06, 16:05
- Try : 2(1 : typo)
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

	int b;
	cin >> b;

	int watermelon, pomegranates, nuts;
	cin >> watermelon >> pomegranates >> nuts;

	if (b >= watermelon) {
		cout << "Watermelon\n";

	}
	else if (b >= pomegranates) {
		cout << "Pomegranates\n";
	}
	else if (b >= nuts) {
		cout << "Nuts\n";
	}
	else {
		cout << "Nothing\n";
	}

	return 0;
}

// Finish