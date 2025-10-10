/*
- Title : 21614 - Secret Instructions
- Start Time : 25-10-11, 04:04
- End Time : 25-10-11, 04:48
- Try : 1
- Category : string, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<string_view>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string str;
	cin >> str;

	bool prevDir = true; // true : right, false : left

	while (str != "99999") {
		
		string_view sv(str);

		int a = sv[0] - '0';
		int b = sv[1] - '0';

		int c = a + b;

		if (c == 0) {
			if (prevDir) {
				cout << "right ";
			} else {
				cout << "left ";
			}
		}
		else if(c % 2 == 0) {
			cout << "right ";
			prevDir = true;
		} else {
			cout << "left ";
			prevDir = false;
		}

		cout << sv.substr(2, 3) << '\n';

		cin >> str;
	}

	return 0;
}

// Finish