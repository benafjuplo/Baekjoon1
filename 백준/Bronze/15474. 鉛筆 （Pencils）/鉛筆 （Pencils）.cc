/*
- Title : 15474 - Pencils
- Start Time : 25-05-07, 01:25
- End Time : 25-05-07, 01:34
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
세트 둘 중 하나만 선택 가능하다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;

	cout << min(
		((n / a) + (n % a != 0)) * b,
		((n / c) + (n % c != 0)) * d
	);

	return 0;
}

// Finish