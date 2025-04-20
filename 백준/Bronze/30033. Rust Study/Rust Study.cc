/*
- Title : 30033 - Rust Study
- Start Time : 25-04-20, 21:35
- End Time :
- Try :
- Category :
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];

	int result = 0;

	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		if (v[i] <= x)
			result++;
	}

	cout << result;

	return 0;
}
