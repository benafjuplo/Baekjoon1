/*
- Title : 27389 - Metronome
- Start Time : 25-08-28, 03:11
- End Time : 25-08-28, 03:14
- Try : 1
- Category : mathematics, elementary arithmetic, setprecision, fixed
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

	int n;
	cin >> n;

	cout << fixed << setprecision(2) << (double)n / 4.0 << "\n";

	return 0;
}

// Finish