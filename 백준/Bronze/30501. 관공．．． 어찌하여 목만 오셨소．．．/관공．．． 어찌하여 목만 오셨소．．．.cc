/*
- Title : 30501 - Lord Guan... why have you come only as a head...
- Start Time : 25-08-28, 22:52
- End Time : 25-08-28, 22:56
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

	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;

		if (str.find("S") != string::npos) {
			cout << str;
			return 0;
		}
	}

	return 0;
}

// Finish