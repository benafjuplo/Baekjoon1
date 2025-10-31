/*
- Title : 29751 - Triangle
- Start Time : 25-10-31, 16:07
- End Time : 25-10-31, 16:10
- Try : 1
- Category : mathematics, elementary artihmetic, geometry, setprecision, fixed
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

	int w, h;
	cin >> w >> h;

	cout << fixed << setprecision(1) << (double)(w * h) / 2 << '\n';

	return 0;
}

// Finish