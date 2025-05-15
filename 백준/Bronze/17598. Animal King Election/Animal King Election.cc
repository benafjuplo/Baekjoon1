/*
- Title : 17598 - Animal King Election
- Start Time : 25-05-15, 22:53
- End Time : 25-05-15, 22:56
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

	int cnt = 0;

	for (int i = 0; i < 9; ++i) {
		string str;
		cin >> str;
		if (str == "Lion") cnt++;
	}

	if (cnt >= 5) cout << "Lion";
	else cout << "Tiger";

	return 0;
}

// Finish
