/*
- Title : 15059 - Hard choice
- Start Time : 25-02-07, 20:40
- End Time : 25-02-07, 20:44
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;
	cout << max(0, x- a) + max(0, y - b) + max(0, z - c);

	return 0;
}

//Finish