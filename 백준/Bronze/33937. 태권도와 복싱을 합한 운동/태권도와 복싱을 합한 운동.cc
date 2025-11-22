/*
- Title : 33937 - A sport that combines taekwondo and boxing
- Start Time : 25-11-23, 02:15
- End Time : 25-11-23, 02:26
- Try : 1
- Category : string, implementation
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

	string firstSports, secondSports;

	cin >> firstSports >> secondSports;

	string firstPart, secondPart;

	bool flagVowel = false;
	bool flagConsonant = false;

	for (char ch : firstSports) {
		if (flagVowel == false) {
			firstPart += ch;
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
				flagVowel = true;
			}
		}
		else if(flagConsonant == false) {
			if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
				flagConsonant = true;
				break;
			}
			else
				firstPart += ch;
		}		
	}

	if (!flagVowel || !flagConsonant) {
		cout << "no such exercise";
		return 0;
	}

	flagVowel = false;
	flagConsonant = false;

	for (char ch : secondSports) {
		if (flagVowel == false) {
			secondPart += ch;
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
				flagVowel = true;
			}
		}
		else if (flagConsonant == false) {
			if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
				flagConsonant = true;
				break;
			}
			else
				secondPart += ch;
		}
	}

	if (!flagConsonant || !flagVowel) {
		cout << "no such exercise";
		return 0;
	}

	cout << firstPart + secondPart;

	return 0;
}

// Finish