/*
- Title : 2596 - Secret Letter
- Start Time : 25-12-11, 15:14
- End Time : 25-12-11, 15:30
- Try : 1
- Category : implementation, string
- Language : C++20
*/

/* 한국어 주석
한 문자만 다르거나 완전히 일치하는 경우에만 해석할 수 있다.
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<string> letters = {
	"000000",
	"001111",
	"010011",
	"011100",
	"100110",
	"101001",
	"110101",
	"111010"
};

int getDifference(const string& a, const string& b) {
	int diff = 0;
	for (int i = 0; i < 6; ++i) {
		if (a[i] != b[i]) {
			++diff;
		}
	}
	return diff;
}

char getLetter(const string& code) {
	for (int i = 0; i < (int)letters.size(); ++i) {
		int diff = getDifference(code, letters[i]);
		if (diff <= 1) {          
			return 'A' + i;
		}
	}
	return '?';                   
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	string result = "";

	for (int num = 1; num <= n; ++num) {
		string code;
		code.resize(6);
		for (int i = 0; i < 6; ++i) {
			cin >> code[i];
		}

		char letter = getLetter(code);
		if (letter == '?') {
			cout << num << "\n";
			return 0;
		}

		result += letter;
	}

	cout << result << "\n";

	return 0;
}

// Finish