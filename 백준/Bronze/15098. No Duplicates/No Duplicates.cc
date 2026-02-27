/*
- Title : 15098 - No Duplicates
- Start Time : 26-02-27, 14:49
- End Time : 26-02-27, 14:52
- Try : 1
- Category : string, string stream, unordered set
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<sstream>
#include<string>
#include<unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string line;
	getline(cin, line);

	unordered_set<string> uniqueWords;

	istringstream iss(line);

	string word;

	while (iss >> word) {
		if (uniqueWords.find(word) != uniqueWords.end()) {
			cout << "no\n";
			return 0;
		}
		uniqueWords.insert(word);
	}

	cout << "yes\n";

	return 0;
}
