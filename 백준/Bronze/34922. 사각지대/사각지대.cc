/*
- Title : 34922 - Blind Spot
- Start Time : 26-03-14, 17:34
- End Time : 26-03-14, 17:37
- Try : 1
- Category : mathematics, geometry
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	double w, h;
	double r;
	cin >> w >> h >> r;

	cout << fixed << setprecision(6) << (w * h) - r * r * M_PI / 4 << "\n";

	return 0;
}

// Finish