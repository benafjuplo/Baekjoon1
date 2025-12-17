/*
- Title : 32314 - Christmas Tree Adapter
- Start Time : 25-12-17, 21:51
- End Time : 25-12-17, 21:55
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

	int a, w, v;
	cin >> a >> w >> v;

	// a <= w / v ====> a * v <= w
	if (a * v <= w) cout << "1\n";
	else cout << "0\n";

	return 0;
}

// Finish