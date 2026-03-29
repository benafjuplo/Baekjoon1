/*
- Title : 27110 - Special Meal Distribution
- Start Time : 26-03-30, 05:17
- End Time : 26-03-30, 05:19
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int a, b, c;
	cin >> a >> b >> c;

	cout << min(n, a) + min(n, b) + min(n, c) << "\n";

	return 0;
}
