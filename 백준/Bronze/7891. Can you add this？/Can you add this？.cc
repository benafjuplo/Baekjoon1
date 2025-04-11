/*
- Title : 7891 - Can you add this?
- Start Time : 25-03-28, 16:46
- End Time : 25-03-28, 16:46
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

	int t;
	cin >> t;

	while (t--) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}

// Finish