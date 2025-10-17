/*
- Title : 25840 - Sharing Birthdays
- Start Time : 25-10-18, 02:50
- End Time : 25-10-18, 02:52
- Try : 1
- Category : unordered_set, string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	unordered_set<string> birthdays;

	for (int i = 0; i < n; i++) {
		string birthday;
		cin >> birthday;
		birthdays.insert(birthday);
	}

	cout << birthdays.size() << "\n";

	return 0;
}

// Finish