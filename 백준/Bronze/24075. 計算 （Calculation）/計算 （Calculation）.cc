/*
- Title : 24075 - Calculation
- Start Time : 25-05-09, 19:40
- End Time : 25-05-09, 19:42
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	cout << max(a + b, a - b) << "\n" << min(a + b, a - b);

	return 0;
}

// Finish