/*
- Title : 19844 - Counting the Number of Words
- Start Time : 25-07-22, 09:16
- End Time : 25-07-22, 10:17
- Try : 1
- Category : string, string_view, stringstream, unordered_set
- Language : C++20
*/

/* 한국어 주석
우선 getline으로 입력을 받는다. 입력받은 문장에서 '-'는 ' '로 변환한다.
stringstream으로 문장을 문자열들로 나눈 후 개수를 샌다.
unordered_set과 string_view를 이용하여 어포스트로피로 나누어질 수 있는지 확인하여 개수를 더한다.
앞은 frontWord와 정확히 같아야 하지만 뒤는 backWord로 시작하면 된다.
*/

#include<iostream>
#include<vector>
#include<sstream>
#include<string>
#include<string_view>
#include<unordered_set>

using namespace std;

const vector<string> frontWord = {
"c", "j", "n", "m", "t", "s", "l", "d", "qu"
};

const unordered_set<char> backWord = {
'a', 'e', 'i', 'o', 'u', 'h'
};

inline bool checkFront(const string_view& front) {
	if (front.size() > 2)
		return false;

	size_t frontSize = frontWord.size();
	for (int i = 0; i < frontSize; ++i)
		if (front == frontWord[i])
			return true;
	
	return false;
}

inline bool checkBack(const char& back) {
	return backWord.count(back);
}

inline bool checkApostrophe(const string_view& front, const char back) {
	return checkFront(front) && checkBack(back);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string line;
	getline(cin, line);

	// convert hyphen to blank
	size_t lineSize = line.size();
	for (int i = 0; i < lineSize; ++i)
		if (line[i] == '-')
			line[i] = ' ';

	stringstream ss(line);

	vector<string> blankSeparated;
	string str;

	while (ss >> str) 
		blankSeparated.push_back(str);
	
	int result = 0;

	size_t blankSeparatedSize = blankSeparated.size();

	for (int i = 0; i < blankSeparatedSize; ++i) {
		size_t wordSize = blankSeparated[i].size();

		size_t pos = blankSeparated[i].find('\'');
		size_t startPos = 0;

		string_view sv(blankSeparated[i]);

		// count apostrophe separated
		while (pos != string::npos) {
			if (pos + 1 < wordSize && checkApostrophe(sv.substr(startPos, pos), sv[pos+1]))
				result++;
			
			startPos = pos + 1;

			if (pos + 1 < wordSize)
				pos = blankSeparated[i].find('\'', pos + 1);
			else
				pos = string::npos;
		}

		// count blank and hyphen
		result++;
	}

	cout << result;

	return 0;
}

// Finish