/*
- Title : 27328 - Three-Way Comparison
- Start Time : 26-02-11, 02:58
- End Time : 26-02-11, 03:00
- Try : 1
- Category : mathematics, implementation
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

	if (a < b) cout << -1 << "\n";
	else if (a > b) cout << 1 << "\n";
	else cout << 0 << "\n";

	return 0;
}