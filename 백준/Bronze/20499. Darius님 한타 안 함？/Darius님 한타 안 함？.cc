/*
- Title : Darius, aren’t you joining the team fight?
- Start Time : 25-09-01, 21:00
- End Time : 25-09-01, 21:04
- Try : 1
- Category : mathematics, elmentary arithmetic
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

	int k, d, a;
	char dummy;
	cin >> k >> dummy >> d >> dummy >> a;

	if (k + a < d || d == 0) cout << "hasu\n";
	else cout << "gosu\n";

	return 0;
}

// Finish