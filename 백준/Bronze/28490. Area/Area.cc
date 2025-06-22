/*
- Title : 28490 - Area
- Start Time : 25-06-23, 00:05
- End Time : 25-06-23, 00:07
- Try : 1
- Category : mathematicsm, elementary arithmetic
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

	int n;
	cin >> n;

	int result = 0;

	while (n--) {
		int h, w;
		cin >> h >> w;

		result = max(h * w, result);
	}

	cout << result;

	return 0;
}

// Finish