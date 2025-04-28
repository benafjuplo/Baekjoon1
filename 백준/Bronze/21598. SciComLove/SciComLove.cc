/*
- Title : 21598 - SciComLove
- Start Time : 25-04-28, 23:23
- End Time : 25-04-28, 23:26
- Try : 1
- Category : string, simple, basic
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

	const string str = "SciComLove\n";

	for (int i = 0; i < n; ++i)
		cout << str;

	return 0;
}

// Finish