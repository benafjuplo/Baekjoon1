/*
- Title : 15272 - Hissing Microphone
- Start Time : 26-02-05, 16:43
- End Time : 26-02-05, 16:44
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

	string s;
	cin >> s;

	if (s.find("ss") != string::npos) {
		cout << "hiss\n";
	}
	else {
		cout << "no hiss\n";
	}

	return 0;
}
