/*
- Title : 31616 - Matched Letters
- Start Time : 25-05-11, 11:00
- End Time : 25-05-11, 11:02
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
	cin >> n;

	string str;
	cin >> str;

	char c = str[0];

	for (int i = 0; i < str.size(); ++i) {
		if (c != str[i]) {
			cout << "No";
			return 0;
		}
	}

	cout << "Yes";

	return 0;
}

// Finish