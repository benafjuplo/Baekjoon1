/*
- Title : 4299 - AFC Wimbledon
- Start Time : 25-02-08, 20:10
- End Time : 25-02-08, 23:04
- Try : 3(2 : server error, 1 : condition)
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
방정식을 이용하여 간단히 구할 수 있다.
조건에 주의한다.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int x, y;
	cin >> x >> y;

	if ((x + y) % 2 != 0 || (x - y) % 2 != 0 || x < y) cout << -1;
	else cout << (x + y) / 2 << " " << (x - y) / 2;

	return 0;
}

//Finish