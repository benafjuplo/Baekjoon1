/*
- Title : 11945 - Hot Fish-shaped Bun
- Start Time : 25-02-06, 23:31
- End Time : 25-02-06, 23:33
- Try : 1
- Category : simple, basic, reverse, string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int r, c;
	cin >> r >> c;

	string str;
	for (int i = 0; i < r; ++i) {
		cin >> str;
		reverse(str.begin(), str.end());
		cout << str << "\n";
	}

	return 0;
}

//Finish