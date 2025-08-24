/*
- Title : 31246 - Mobile advertising auction
- Start Time : 25-08-25, 00:58
- End Time : 25-08-25, 01:04
- Try : 1
- Category : sorting, nth_element
- Language : C++20
*/

/* 한국어 주석
간단한 정렬 문제이다. 이때 sort를 사용하면 O(n log n)이 걸리지만, nth_element를 사용하면 O(n)으로 해결할 수 있다.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, k;
	cin >> n >> k;

	vector <int> diff(n);

	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		diff[i] = b - a;
	}

	nth_element(diff.begin(), diff.begin() + (k - 1), diff.end());

	int ans = diff[k - 1];

	if (ans < 0) cout << 0 << "\n";
	else cout << ans << "\n";

	return 0;
}

// Finish