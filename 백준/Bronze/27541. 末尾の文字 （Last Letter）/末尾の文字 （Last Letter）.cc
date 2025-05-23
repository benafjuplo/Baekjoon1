/*
- Title : 27541 - Last Letter
- Start Time : 25-05-24, 01:18
- End Time : 25-05-24, 01:22
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
	string str;
	cin >> n >> str;

	if (str[n - 1] == 'G')
		cout << str.substr(0, n - 1);
	else
		cout << str << "G";

	return 0;
}

// Finish