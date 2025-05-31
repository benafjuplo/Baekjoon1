/*
- Title : 20232 - Archivist 
- Start Time : 25-05-31, 21:31
- End Time : 25-05-31, 21:33
- Try : 1
- Category : simple
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	vector<string> v = { "ITMO", "SPbSU", "SPbSU", "ITMO", "ITMO", "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO", "ITMO", "PetrSU, ITMO", "SPbSU", "SPbSU",
		"ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO", "ITMO", "ITMO", "ITMO", "SPbSU", "ITMO" };

	int y;
	cin >> y;

	cout << v[y - 1995];

	return 0;
}

// Finish