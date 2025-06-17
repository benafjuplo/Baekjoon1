/*
- Title : 33689 - CPDU
- Start Time : 25-06-18, 04:00
- End Time : 25-06-18, 04:02
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

	int result = 0;

	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;

		if (str[0] == 'C') result++;
	}

	cout << result;

	return 0;
}

// Finish