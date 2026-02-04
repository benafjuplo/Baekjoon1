/*
- Title : 27918 - Table Tennis
- Start Time : 26-02-05, 01:18
- End Time : 26-02-05, 01:22
- Try : 1
- Category : implementation, simulation
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

	int n;
	cin >> n;

	int x = 0, y = 0;

	for (int i = 0 ; i < n; ++i) {
		char c;
		cin >> c;
		if(c=='D')
			++x;
		else
			++y;
		if (x >= y + 2 || y >= x + 2)
			break;			
	}

	cout << x << ":" << y << "\n";

	return 0;
}
