/*
- Title : 34454 - Roller Coaster Ride
- Start Time : 26-02-21, 05:07
- End Time : 26-02-21, 05:08
- Try : 1
- Category : mathematics, elmentary arithmetic
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

	int n, c, p;
	cin >> n >> c >> p;

	if (n <= c * p)
		cout << "yes";
	else
		cout << "no";

	return 0;
}
