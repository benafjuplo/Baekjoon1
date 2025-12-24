/*
- Title : 15121 - Star Arrangements
- Start Time : 25-12-25, 01:34
- End Time : 25-12-25, 01:49
- Try : 1
- Category : mathematics, elementary arithmetic, brute force
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

	int s;
	cin >> s;

	cout << s << ":\n";

	for (int i = 2; i < s; ++i) {
		if (s % (i + i - 1) == 0 || s % (i + i - 1) == i) 
			cout << i << ',' << i - 1 << '\n';
		if (s % i == 0) 
			cout << i << ',' << i << '\n';
	}	

	return 0;
}

// Finish