/*
- Title : 34362 - Above
- Start Time : 26-02-16, 20:55
- End Time : 26-02-16, 20:58
- Try : 1
- Category : mathematics, elementary arithmetic, floating-point arithmetic
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

	double n;
	cin >> n;

	cout << fixed << setprecision(4) << n - 0.3 << "\n";

	return 0;
}
