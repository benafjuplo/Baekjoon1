/*
- Title : 20215 - Cutting Corners
- Start Time : 25-06-11, 23:58
- End Time : 25-06-12, 00:01
- Try : 1
- Category : mathematics, setprecision, fixed, geometry
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int w, h;
	cin >> w >> h;

	double diagonal = sqrt(w * w + h * h);

	cout << setprecision(9) << fixed;

	cout << w + h - diagonal;

	return 0;
}

// Finish