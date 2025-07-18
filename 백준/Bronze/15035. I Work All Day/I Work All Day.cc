/*
- Title : 15035 - I Work All Day
- Start Time : 25-07-16, 09:53
- End Time : 25-07-16, 09:58
- Try : 1
- Category : mathematics, modular arithmetic, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
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

	for (int i = 0; i < n; ++i)
		cin >> v[i];
	
	int t;
	cin >> t;

	int result = 0;
	int smallest = 10000;

	for (int i = 0; i < n; ++i) {
		if (t % v[i] < smallest) {
			smallest = t % v[i];
			result = v[i];
		}
	}

	cout << result;

	return 0;
}

// Finish