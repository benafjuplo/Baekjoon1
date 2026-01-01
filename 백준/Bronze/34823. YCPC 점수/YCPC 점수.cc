/*
- Title : 34823 - YCPC Score
- Start Time : 25-01-02, 02:48
- End Time : 25-01-02, 02:50
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

	int y, c, p;
	cin >> y >> c >> p;

	cout << min(y, min(c / 2, p));

	return 0;
}
