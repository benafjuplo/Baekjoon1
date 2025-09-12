/*
- Title : 14405 - Pikachu
- Start Time : 25-09-12 , 15:11
- End Time : 25-09-12 , 15:15
- Try : 1
- Category : string, string_view
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

	string s;
	cin >> s;

	string_view sv = s;

	while (!sv.empty()) {
		if (sv.starts_with("pi")) {
			sv.remove_prefix(2);
		}
		else if (sv.starts_with("ka")) {
			sv.remove_prefix(2);
		}
		else if (sv.starts_with("chu")) {
			sv.remove_prefix(3);
		}
		else {
			cout << "NO\n";
			return 0;
		}
	}

	cout << "YES\n";

	return 0;
}

// Finish