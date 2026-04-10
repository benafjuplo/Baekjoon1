/*
- Title : 18698 - The Walking Adam
- Start Time : 26-04-10, 15:09
- End Time : 26-04-10, 15:12
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

	int T;
	cin >> T;

	while (T--) {
		string s;
		cin >> s;

		int pos = s.find_first_not_of('U');

		if (pos != string::npos) {
			cout << pos << "\n";
		}
		else {
			cout << s.size() << "\n";
		}
	}

	return 0;
}
