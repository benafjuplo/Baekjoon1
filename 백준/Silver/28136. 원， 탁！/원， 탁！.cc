/*
- Title : 28136 - Round, Table!
- Start Time : 25-12-16, 12:20
- End Time : 25-12-16, 12:29
- Try : 2(1 : Ambiguous problem definition)
- Category : greedy algorithm, implementation
- Language : C++20
*/

/* 한국어 주석
문제의 오름차순이란 "Strictly Increasing, 엄격히 증가하는 순서"를 의미한다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int first;
	int prev, curr;

	int ans = 0;

	for (int i = 1; i <= n; ++i) {
		cin >> curr;

		if (i == 1)
			first = curr;

		else {
			if (prev >= curr)
				ans++;
		}

		prev = curr;	
	}

	if (prev >= first)
		ans++;

	cout << ans << "\n";

	return 0;
}

// Finish