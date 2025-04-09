/*
- Title : 32498 - Call for Problems
- Start Time : 25-04-09, 13:20
- End Time : 25-04-09, 13:22
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic, modular arithmetic
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
	
	int n;
	cin >> n;

	int cnt = 0;

	while (n--) {
		int x;
		cin >> x;
		if (x % 2 == 1) cnt++;
	}

	cout << cnt;	

	return 0;
}

// Finish