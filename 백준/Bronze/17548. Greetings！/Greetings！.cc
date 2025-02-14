/*
- Title : 17548 - Greetings!
- Start Time : 25-02-15, 00:42
- End Time : 25-02-15, 00:45
- Try : 1 
- Category : string, substr
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	string str;
	cin >> str;
	cout << str.front() + str.substr(1, str.size() - 2) + str.substr(1, str.size() - 2) + str.back();

	return 0;
}

//Finish