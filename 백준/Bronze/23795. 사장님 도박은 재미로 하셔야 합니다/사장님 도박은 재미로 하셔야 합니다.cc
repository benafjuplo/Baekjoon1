/*
- Title : 23795 - Boss, gambling should only be for fun.
- Start Time : 25-01-05, 12:43
- End Time : 25-01-05, 12:45
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long total = 0;

	int x;
	cin >> x;
	while (x != -1) {
		total += x;
		cin >> x;
	}

	cout << total;

	return 0;
}

//Finish