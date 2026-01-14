/*
- Title : 34945 - Chapel is Too Much
- Start Time : 26-01-15, 05:57
- End Time : 26-01-15, 05:58
- Try : 2(1 : simple mistake)
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

	int x;
	cin >> x;
	if (x + 2 >= 8)
		cout << "Success!";
	else
		cout << "Oh My God!";
		

	return 0;
}
