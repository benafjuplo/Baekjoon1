/*
- Title : 31261 - I thought of a number
- Start Time : 25-06-25, 23:06
- End Time : 25-06-25, 23:09
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
((x/a) - a)/a - a = b
((x/a) - a)/a = b + a
(x/a) - a = ab + aa
x/a = ab + aa + a
x = aab + aaa + aa
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	cout << a * a * b + a * a * a + a * a;

	return 0;
}

// Finish