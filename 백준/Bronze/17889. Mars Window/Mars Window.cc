/*
- Title : 17889 - Mars Window
- Start Time : 25-12-25, 21:22
- End Time : 25-12-25, 21:36
- Try : 1
- Category : mathematics, elementary arithmetic, brute force
- Language : C++20
*/

/* 한국어 주석
무반복 풀이도 가능하다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int y;
	cin >> y;

	int year = 2018;
	int month = 4;

	if (year == y) {
		cout << "yes";
		return 0;
	}

	while (year <= y) {
		if (year == y) {
			cout << "yes";
			return 0;
		}

		month += 26;
		year += month / 12;
		if (month % 12 == 0) {
			year--;
			month = 12;
		}
		else
			month %= 12;
	}

	cout << "no";
	return 0;
}