/*
- Title : 17874 - Piece of Cake!
- Start Time : 25-06-30, 21:52
- End Time : 25-06-30, 21:59
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

	int n, h, v;
	cin >> n >> h >> v;

	cout << max(n - h, h) * max(n - v, v) * 4;
			 
	return 0;
}

// Finish