/*
- Title : 31668 - Exceptional Eggplant
- Start Time : 25-07-08, 00:27
- End Time : 25-07-08, 00:30
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

	int n, m, k;
	cin >> n >> m >> k;

	int parmesan = m / n;
	cout << parmesan * k;

	return 0;
}

// Finish