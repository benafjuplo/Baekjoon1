/*
- Title : 34934 - New Department
- Start Time : 26-02-25, 05:20
- End Time : 26-02-25, 05:24
- Try : 1
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
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

	for (int i = 0; i < n; ++i) {
		string department, year;
		cin >> department >> year;
		if (year == "2026") {
			cout << department << "\n";
			break;
		}
	}

	return 0;
}
