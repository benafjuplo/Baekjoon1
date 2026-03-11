/*
- Title : 60676 - What Color Is This Star?
- Start Time : 26-03-11, 20:35
- End Time : 26-03-11, 20:39
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

	int l;
	cin >> l;

	if (380 <= l && l < 425)
		cout << "Violet";
	else if (425 <= l && l < 450)
		cout << "Indigo";
	else if (450 <= l && l < 495)
		cout << "Blue";
	else if (495 <= l && l < 570)
		cout << "Green";
	else if (570 <= l && l < 590)
		cout << "Yellow";
	else if (590 <= l && l < 620)
		cout << "Orange";
	else if (620 <= l && l <= 780)
		cout << "Red";

	return 0;
}
