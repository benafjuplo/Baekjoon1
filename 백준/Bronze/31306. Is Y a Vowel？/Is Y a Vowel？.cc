/*
- Title : 31306 - Is Y a Vowel?
- Start Time : 25-09-03, 22:25
- End Time : 25-09-03, 22:30
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

	int cntY = 0;
	int cntVowel = 0;

	string str;
	cin >> str;

	for (char c : str) {
		if (c == 'y') cntY++;
		else if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cntVowel++;
	}

	cout << cntVowel << ' ' << cntVowel + cntY << '\n';

	return 0;
}

// Finish