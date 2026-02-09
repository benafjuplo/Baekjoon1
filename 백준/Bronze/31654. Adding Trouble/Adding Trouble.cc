/*
- Title : 31654 - Adding Trouble
- Start Time : 26-02-10, 04:37
- End Time  26-02-10, 04:39
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

	long long a, b, c;
	cin >> a >> b >> c;

	if (a + b == c) cout << "correct!\n";
	else cout << "wrong!\n";

	return 0;
}
