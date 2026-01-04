/*
- Title : 14582 - Lost Again Today
- Start Time : 26-01-03, 23:28
- End Time : 26-01-03, 23:34
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

	vector<int> first(9);
	vector<int> second(9);

	for (int i = 0; i < 9; ++i) {
		cin >> first[i];
	}

	for (int i = 0; i < 9; ++i) {
		cin >> second[i];
	}

	int scoreA = 0, scoreB = 0;

	bool winFirst = false;

	for (int i = 0; i < 9; ++i) {
		scoreA += first[i];
		if (scoreA > scoreB)
			winFirst = true;
		scoreB += second[i];
	}

	cout << (winFirst ? "Yes" : "No");

	return 0;
}
