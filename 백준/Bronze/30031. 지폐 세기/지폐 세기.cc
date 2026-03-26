/*
- Title : 30031 - Counting Banknotes
- Start Time : 26-03-27, 05:52
- End Time : 26-03-27, 05:55
- Try : 1
- Category : mathematics, elementary arithmetic
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

	int width, height;
	int total = 0;

	for (int i = 0; i < n; i++) {
		cin >> width >> height;
		if (width == 136)
			total += 1000;
		else if (width == 142)
			total += 5000;
		else if (width == 148)
			total += 10000;
		else if (width == 154)
			total += 50000;
	}

	cout << total << "\n";

	return 0;
}
