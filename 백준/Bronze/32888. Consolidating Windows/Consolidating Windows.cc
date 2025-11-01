/*
- Title : 32888 - Consolidating Windows
- Start Time : 25-11-01, 18:22
- End Time : 25-11-01, 18:23
- Try : 1
- Category : mathematics, elementary arithmetic, geometry, Pythagorean theorem
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	long long a, b;
	cin >> a >> b;
	
	double c = sqrt(a * a + b * b);

	cout << fixed << setprecision(10) << c;

	return 0;
}

// Finish