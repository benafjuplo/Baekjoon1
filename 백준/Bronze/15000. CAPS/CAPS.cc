/*
- Title : 15000
- Start Time : 25-03-28, 16:56
- End Time : 25-03-28, 17:05
- Try : 1
- Category : simple, basic, string, ASCII
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
	const int DIFF = 'a' - 'A';

	for (auto& c : str)
		c -= DIFF;

	cout << str;

	return 0;
}

//Finish