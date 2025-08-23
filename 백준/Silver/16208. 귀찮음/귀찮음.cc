/*
- Title : 16208 - Hassle
- Start Time : 25-08-23, 19:38
- End Time : 25-08-23, 20:34
- Try : 2(1 : int overflow)
- Category : mathematics, greedy algorithm
- Language : C++20
*/

/* 한국어 주석
어느 순서로 쇠막대를 잘라도 상관없다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	long long prevSum = 0;
	long long ans = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		ans += prevSum * x;
		prevSum += x;
	}

	cout << ans << '\n';

	return 0;
}

// Finish