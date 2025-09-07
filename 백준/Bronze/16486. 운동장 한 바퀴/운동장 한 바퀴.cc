/*
- Title : 16486 - A lap around the track
- Start Time : 25-09-02, 04:52
- End Time : 25-09-02, 04:54
- Try : 1
- Category : mathematics, setprecision, fixed
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

	int d1, d2;
	cin >> d1 >> d2;

	const double pi = 3.141592;

	double result = d1 * 2 + 2 * d2 * pi;

	cout << fixed << setprecision(6) << result << "\n";

	return 0;
}

// Finish