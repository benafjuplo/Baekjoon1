/*
- Title : 24087 - Ice Cream
- Start Time : 25-05-16, 22:03
- End Time : 25-05-16, 22:10
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
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

	int s, a, b;
	cin >> s >> a >> b;

	if (s <= a)
		cout << 250;
	else
		cout << 250 + 100 * ((s - a) / b + (bool)((s - a) % b));

	return 0;
}

// Finish