/*
- Title : 24084 - Next Character
- Start Time : 25-05-18, 23:54
- End Time : 25-05-18, 23:56
- Try : 1
- Category : simple, basic, string
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
	string s;
	cin >> n >> s;

	for (int i = 0; i < n - 1; ++i) {
		if (s[i + 1] == 'J')
			cout << s[i] << "\n";
	}

	return 0;
}

// Finish