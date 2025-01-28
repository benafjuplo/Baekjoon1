/*
- Title : 10480 - Oddities
- Start Time : 25-01-28, 22:14 
- End Time : 25-01-28, 22:18
- Try : 1
- Category : simple, basic, mathematics
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

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (x % 2 == 0) cout << x << " is even\n";
		else cout << x << " is odd\n";
	}

	return 0;
}

//Finish
