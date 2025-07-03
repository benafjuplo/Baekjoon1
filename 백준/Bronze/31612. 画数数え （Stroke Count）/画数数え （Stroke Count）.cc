/*
- Title : 31612 - Stroke Count
- Start Time : 25-07-03, 23:07
- End Time : 25-07-03, 23:10
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

	string str;
	cin >> str;

	int result = 0;;

	for (int i = 0; i < n; ++i) {
		result++;
		if (str[i] != 'o') result++;
	}

	cout << result;

	return 0;
}

// Finish