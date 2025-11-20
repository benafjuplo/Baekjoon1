/*
- Title : 28097 - Model Student PONIX
- Start Time : 25-11-21, 03:05
- End Time : 25-11-21, 03:07
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

	int n;
	cin >> n;

	int time = 0;

	cin >> time;

	const int restTime = 8;

	for (int i = 0; i < n-1; ++i) {
		int x;
		cin >> x;

		time += x + restTime;		
	}

	cout << time / 24 << ' ' << time % 24 << '\n';

	return 0;
}

// Finish