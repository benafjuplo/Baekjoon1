/*
- Title : 1439 - Flipping
- Start Time : 25-09-08, 13:17
- End Time : 25-09-08, 13:26
- Try : 1
- Category : string, greedy algorithm
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<string_view>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string str;
	cin >> str;
	string_view sv = str;

	int zero = 0, one = 0;

	size_t pos = 0;

	while ((pos = sv.find('0', pos)) != string_view::npos) {
		zero++;
		pos = sv.find_first_not_of('0', pos);
		if (pos == string_view::npos) break;
	}

	pos = 0;

	while ((pos = sv.find('1', pos)) != string_view::npos) {
		one++;
		pos = sv.find_first_not_of('1', pos);
		if (pos == string_view::npos) break;
	}

	cout << (zero < one ? zero : one) << '\n';
	
	return 0;
}

// Finish