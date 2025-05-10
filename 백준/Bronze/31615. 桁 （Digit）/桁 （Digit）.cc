/*
- Title : 31615 - Digit
- Start Time : 25-05-10, 16:07
- End Time : 25-05-10, 16:09
- Try : 1
- Category : simple, basic, string, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	string str;
	str = to_string(a + b);

	cout << str.size();

	return 0;
}

// Finish