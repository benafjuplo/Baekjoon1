/*
- Title : 20233 - Bicycle
- Start Time : 25-06-11, 23:34
- End Time : 25-06-11, 23:36
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석]
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, x, b, y, t;

	cin >> a >> x >> b >> y >> t;

	cout << a + max(t - 30, 0) * 21 * x << " " << b + max(t - 45, 0) * 21 * y << " ";

	return 0;
}

// Finish