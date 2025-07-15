/*
- Title : 32132 - It's not PlayStation
- Start Time : 25-07-14, 10:27
- End Time : 25-07-14, 10:37
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

	int n;
	cin >> n;

	string str;
	cin >> str;

	while (true) {
		string PS4 = "PS4";
		string PS5 = "PS5";

		size_t findedIndex = str.find(PS4);

		if (findedIndex != string::npos) {
			str.erase(findedIndex + 2, 1);

			continue;
		}

		findedIndex = str.find(PS5);

		if (findedIndex != string::npos) {
			str.erase(findedIndex + 2, 1);

			continue;
		}

		else {
			break;
		}
	}

	cout << str;

	return 0;
}

// Finish