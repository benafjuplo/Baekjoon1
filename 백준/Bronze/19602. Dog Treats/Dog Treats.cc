/*
- Title : 19602 - Dog Treats
- Start Time : 25-05-01, 16:24
- End Time : 25-05-01, 16:26
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

	int s, m, l;
	cin >> s >> m >> l;

	if (s + 2 * m + 3 * l >= 10)
		cout << "happy";
	else
		cout << "sad";

	return 0;
}

// Finish