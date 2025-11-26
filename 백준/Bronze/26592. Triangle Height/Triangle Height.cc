/*
- Title : 26592 - Triangle Height
- Start Time : 25-11-27, 05:16
- End Time : 25-11-27, 05:19
- Try : 1
- Category : mathematics, elementary arithmetic, geometry, setprecision, fixed
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int t;
	cin >> t;

	while (t--) {
		double area, base;
		cin >> area >> base;

		double height = (2 * area) / base;

		cout << "The height of the triangle is "
			<< fixed << setprecision(2) << height
			<< " units" << '\n';
	}

	return 0;
}

// Finish