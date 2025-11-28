/*
- Title : 9777 - Birthday Statistics
- Start Time : 25-11-28, 20:31
- End Time : 25-11-28, 20:35
- Try : 1
- Category : string, parsing
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<int> birth_month_count(12, 0);

	for (int i = 0; i < n; i++) {
		int id, day, month, year;
		char dummy;
		cin >> id >> day >> dummy >> month >> dummy >> year;
		birth_month_count[month - 1]++;
	}

	for (int i = 0; i < 12; i++) {
		cout << i + 1 << " " << birth_month_count[i] << "\n";
	}

	return 0;
}

// Finish