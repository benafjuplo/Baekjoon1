/*
- Title : 30404 - The Duck and Clapping Chun-bae
- Start Time : 25-09-21, 20:29
- End Time : 25-09-21, 20:32
- Try : 1
- Category : greedy algorithm
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

	int n, k;
	cin >> n >> k;

	int targetRange = 0;
	int cnt = 0;

	while (n--) {
		int x;
		cin >> x;
		if (x <= targetRange) continue;
		targetRange = x + k;
		cnt++;
	}

	cout << cnt << '\n';

	return 0;
}

// Finish