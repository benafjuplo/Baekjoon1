/*
- Title : 34921 - Otaku
- Start Time : 26-02-22, 05:08
- End Time : 26-02-22, 05:09
- Try : 1
- Category : mathematics, elementary arithmetic
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

	int a, t;
	cin >> a >> t;

	int p = 10 + 2 * (25 - a + t);

	if(p<0)
		p = 0;

	cout << p << "\n";

	return 0;
}
