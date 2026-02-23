/*
- Title : 22279 - Quality-Adjusted Life-Year
- Start Time : 26-02-24, 02:57
- End Time : 26-02-24, 03:00
- Try : 1
- Category : mathematics, elementary arithmetic
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

	double result = 0;

	for (int i = 0; i < n; i++) {
		double a, b;
		cin >> a >> b;
		result += a * b;
	}

	cout << fixed << setprecision(4) << result << "\n";

	return 0;
}