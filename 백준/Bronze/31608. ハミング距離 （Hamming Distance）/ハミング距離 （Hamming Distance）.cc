/*
- Title : 31608 - Hamming Distance
- Start Time : 25-07-12, 00:07
- End Time : 25-07-12, 00:15
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	string s, t;
	cin >> s >> t;

	int result = 0;

	for (int i = 0; i < n; ++i) {
		if (s[i] != t[i])
			result++;
	}

	cout << result;

	return 0;
}

// Finish