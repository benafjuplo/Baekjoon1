/*
- Title : 10569 - Polyhedra
- Start Time : 25-07-14, 01:06
- End Time : 25-07-14, 01:08
- Try : 1
- Category : mathematics, elementary arithmetic, Euler characteristic
- Language : C++20
*/

/* 한국어 주석
참고 : https://en.wikipedia.org/wiki/Euler_characteristic
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
		int v, e;
		cin >> v >> e;

		cout << 2 - v + e << "\n";
	}

	return 0;
}

// Finish