/*
- Title : 33810 - SciComLove (2025)
- Start Time : 25-06-24, 22:22
- End Time : 25-06-24, 22:24
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

	string a = "SciComLove";
	string b;
	cin >> b;

	int result = 0;

	for (int i = 0; i < 10; ++i) {
		if (a[i] != b[i])
			result++;
	}

	cout << result;

	return 0;
}

// Finish
