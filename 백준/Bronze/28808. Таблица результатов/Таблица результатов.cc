/*
- Title : 28808 - Results table
- Start Time : 25-07-07, 23:50
- End Time : 25-07-07, 23:53
- Try : 1
- Category : implementation
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

	int n, m;
	cin >> n >> m;

	int result = 0;

	for (int i = 0; i < n; ++i) {
		bool isCorrect = false;
		for (int j = 0; j < m; ++j) {
			char x;
			cin >> x;
			if (x == '+') isCorrect = true;
		}
		if (isCorrect) result++;
	}

	cout << result;

	return 0;
}

// Finish