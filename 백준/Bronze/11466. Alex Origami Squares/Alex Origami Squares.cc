/*
- Title : 11466 - Alex Origami Squares
- Start Time : 25-12-28, 03:57
- End Time : 25-12-28, 04:02
- Try : 1
- Category : mathematics, elementary arithmetic, geometry
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	double height, width;
	cin >> height >> width;

	double ans = max(max(min(height / 3, width), min(height, width / 3)), min(height / 2, width / 2));

	cout << fixed << setprecision(5) << ans;

	return 0;
}