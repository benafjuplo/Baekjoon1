/*
- Title : 30979 - Taking Care of Kindergarten Pading
- Start Time : 25-01-30, 18:33
- End Time : 25-01-30, 18:36
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
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int n;
	cin >> n;
	int sumCandys = 0;

	for (int i = 0; i < n; ++i) {
		int f;
		cin >> f;
		sumCandys += f;
	}

	if (t <= sumCandys) cout << "Padaeng_i Happy";
	else cout << "Padaeng_i Cry";

	return 0;
}

//Finish