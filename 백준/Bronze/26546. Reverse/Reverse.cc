/*
- Title : 26546 - Reverse
- Start Time : 26-03-31, 05:29
- End Time :  26-03-31, 05:33
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

	while (n--) {
		string s;
		int i, j;
		cin >> s >> i >> j;
		cout << s.substr(0, i) << s.substr(j) << "\n";
	}

	return 0;
}
