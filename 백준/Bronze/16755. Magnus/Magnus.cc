/*
- Title : 16755 - Magnus
- Start Time : 25-12-19, 18:59
- End Time : 25-12-19, 19:11
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
문자열 없이도 가능하다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	
	string str;
	cin >> str;

	int ans = 0;
	int seq = 0;

	for (char c : str) {
		if (seq == 0 && c == 'H')
			seq++;
		else if (seq == 1 && c == 'O')
			seq++;
		else if (seq == 2 && c == 'N')
			seq++;
		else if (seq == 3 && c == 'I') {
			ans++;
			seq = 0;
		}
	}

	cout << ans << "\n";

	return 0;
}

// Finish