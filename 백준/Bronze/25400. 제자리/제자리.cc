/*
- Title : 25400 - Original position
- Start Time : 25-10-03, 01:10
- End Time : 25-10-03, 01:13
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

	int n;
	cin >> n;

	int curr = 1;
	int result = 0;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a != curr) result++;
		else curr++;
	}

	cout << result << "\n";

	return 0;
}

// Finish