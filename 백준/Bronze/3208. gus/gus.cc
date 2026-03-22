/*
- Title : 3208 - gus
- Start Time : 26-03-22, 14:34
- End Time : 26-03-22, 14:35
- Try : 1
- Category : mathematics, implementation
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

	int m, n;
	cin >> m >> n;

	cout << min((m - 1) * 2, n * 2 - 1);

	return 0;
}
