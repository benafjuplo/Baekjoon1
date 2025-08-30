/*
- Title : 6784 - Multiple Choice
- Start Time : 25-08-31, 01:55
- End Time : 25-08-31, 01:58
- Try : 1
- Category : implementation
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
	vector<char> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	int cnt = 0;

	for (int i = 0; i < n; ++i) {
		char x;
		cin >> x;

		if(v[i] == x)
			cnt++;
	}

	cout << cnt << "\n";

	return 0;
}

// Finish