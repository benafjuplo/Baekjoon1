/*
- Title : 9306 - Practice: Roll Call
- Start Time : 25-10-10, 05:44
- End Time : 25-10-10, 05:47
- Try : 1
- Category : string, implementation
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

	int t;
	cin >> t;

	for (int tc = 1; tc <= t; tc++) {		
		string firstname, lastname;
		cin >> firstname >> lastname;

		cout << "Case " << tc << ": " << lastname << ", " << firstname << '\n';	
	}

	return 0;
}

// Finish