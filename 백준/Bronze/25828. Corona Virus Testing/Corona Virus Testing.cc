/*
- Title : 25828 - Corona Virus Testing
- Start Time : 25-08-21, 02:12
- End Time : 25-08-21, 02:16
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int g, p, t;
	cin >> g >> p >> t;

	int individualTest = g * p;
	int groupTest = g + t * p;

	if (individualTest < groupTest) {
		cout << "1" << '\n';
	}
	else if (individualTest > groupTest) {
		cout << "2" << '\n';
	}
	else {
		cout << "0" << '\n';
	}

	return 0;
}

// Finish