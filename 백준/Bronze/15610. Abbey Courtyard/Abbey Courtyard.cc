/*
- Title : 15610 - Abbey Courtyard
- Start Time : 25-09-15, 22:57
- End Time : 25-09-15, 23:00
- Try : 1
- Category : mathematics, geometry, fixed, setprecision, cmath
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	long long a;
	cin >> a;

	cout << fixed << setprecision(8) << sqrt(a) * 4 << '\n';

	return 0;
}

// Finish