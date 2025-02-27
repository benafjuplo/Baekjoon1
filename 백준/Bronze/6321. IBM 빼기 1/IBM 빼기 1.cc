/*
- Title : 6321 - IBM minus one
- Start Time : 25-02-27, 23:31
- End Time : 25-02-27, 23:37
- Try : 1
- Category : simple, basic, string, ASCII
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 1; i <= N; ++i) {
		string str;
		cin >> str;
		cout << "String #" << i << "\n";
		for (int j = 0; j < str.size(); ++j) {
			str[j] = str[j] + 1;
			if (str[j] == 'Z' + 1) str[j] = 'A';
		}
		cout << str << "\n\n";
	}

	return 0;
}

// Finish