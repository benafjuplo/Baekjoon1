/*
- Title : 33845 - Sanjini, who never missed a single PNUPC, is honestly kind of amazing.
- Start Time : 25-11-10, 00:02
- End Time : 25-11-10, 00:05
- Try : 1
- Category : string
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

	vector<bool>alphabetMap(26, false);

	string s;
	cin >> s;

	for (char c : s) 
			alphabetMap[c - 'a'] = true;

	string t;
	cin >> t;

	for (char c : t) {
		if (!alphabetMap[c - 'a']) {
			cout << c;
		}		
	}

	return 0;
}

// Finish