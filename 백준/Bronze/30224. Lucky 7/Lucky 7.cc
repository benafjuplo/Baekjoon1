/*
- Title : 30224 - Lucky 7
- Start Time : 25-10-01, 05:40
- End Time : 25-10-01, 05:43
- Try : 1
- Category : mathematics, implementation
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

	string s = to_string(n);

	bool flagSeven = false;

	for (char c : s) {
		if (c == '7') {
			flagSeven = true;
			break;
		}
	}

	bool flagDiv = (n % 7 == 0);

	if (!flagSeven && !flagDiv) {
		cout << "0\n";
	}
	else if (!flagSeven && flagDiv) {
		cout << "1\n";
	}
	else if (flagSeven && !flagDiv) {
		cout << "2\n";
	}
	else {
		cout << "3\n";
	}

	return 0;
}

// Finish