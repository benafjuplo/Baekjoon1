/*
- Title : 30017 - Making a Cheeseburger
- Start Time : 25-05-25, 20:24
- End Time : 25-05-25, 20:27
- Try : 1
- Category : mathematics, elementary arithemetic
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

	int a, b;
	cin >> a >> b;

	if (a > b)
		cout << b + b + 1;
	else
		cout << a + a - 1;

	return 0;
}

// Finish