/*
- Title : 28235 - Code Master 2023
- Start Time : 26-02-13, 00:43
- End Time : 26-02-13, 00:44
- Try : 1
- Category : implementation
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

	string str;
	cin >> str;

	if (str == "SONGDO")
		cout << "HIGHSCHOOL";
	else if (str == "CODE")
		cout << "MASTER";
	else if (str == "2023")
		cout << "0611";
	else if (str == "ALGORITHM")
		cout << "CONTEST";

	return 0;
}
