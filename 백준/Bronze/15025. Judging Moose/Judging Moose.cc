/*
- Title : Judging Moose
- Start Time : 25-05-29, 21:06
- End Time : 25-05-29, 21:11
- Try : 1
- Category : mathematics, elementary arithmetic
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

	int l, r;
	cin >> l >> r;

	if (l == r) {	
		if (l != 0) {
			cout << "Even " << l + r;
		}
		else {
			cout << "Not a moose";
		}
	}
	else 
		cout << "Odd " <<max(l, r) * 2;

	return 0;
}

// Finish