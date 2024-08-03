/*
- Title : 1543 - Document Search
- Start Time : 24-08-03, 22:30
- End Time : 24-08-03, 22:35
- Try : 1
- Category : string, find-string, search-string
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	string document;
	getline(cin, document);
	string word;
	getline(cin, word);

	int pos = 0;
	int cnt = 0;

	while (true) {
		pos = document.find(word, pos);
		if (pos == string::npos)
			break;
		cnt++;
		pos += word.size();
		if (pos >= document.size())
			break;
	}

	cout << cnt;
}

//Finish