/*
- Title : 13752 - Histogram
- Start Time : 25-01-12, 22:??
- End Time : 25-01-12, 22:12
- Try : 1
- Category : simple, basic
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

	int n;
	cin >> n;

	while (n--) {
		int k;
		cin >> k;
		while (k--) cout << "=";
		cout << "\n";
	}

	return 0;
}

//Finish