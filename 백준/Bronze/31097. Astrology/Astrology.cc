/*
- Title : 31097 - Astrology
- Start Time : 26-03-26, 00:32
- End Time : 26-03-26, 00:37
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

	int y, m, d;
	char dummy;

	cin >> y >> dummy >> m >> dummy >> d;

	if (m == 3 && d >= 21 || m == 4 && d <= 19) {
		cout << "Aries";
	}
	else if (m == 4 && d >= 20 || m == 5 && d <= 20) {
		cout << "Taurus";
	}
	else if (m == 5 && d >= 21 || m == 6 && d <= 20) {
		cout << "Gemini";
	}
	else if (m == 6 && d >= 21 || m == 7 && d <= 22) {
		cout << "Cancer";
	}
	else if (m == 7 && d >= 23 || m == 8 && d <= 22) {
		cout << "Leo";
	}
	else if (m == 8 && d >= 23 || m == 9 && d <= 22) {
		cout << "Virgo";
	}
	else if (m == 9 && d >= 23 || m == 10 && d <= 22) {
		cout << "Libra";
	}
	else if (m == 10 && d >= 23 || m == 11 && d <= 22) {
		cout << "Scorpio";
	}
	else if (m == 11 && d >= 23 || m == 12 && d <= 21) {
		cout << "Sagittarius";
	}
	else if (m == 12 && d >= 22 || m == 1 && d <= 19) {
		cout << "Capricorn";
	}
	else if (m == 1 && d >= 20 || m == 2 && d <= 18) {
		cout << "Aquarius";
	}
	else if (m == 2 && d >= 19 || m == 3 && d <= 20) {
		cout << "Pisces";
	}

	return 0;
}
