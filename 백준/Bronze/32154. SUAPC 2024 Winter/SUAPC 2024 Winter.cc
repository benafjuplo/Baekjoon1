/*
- Title : 32154 - SUAPC 2024 Winter
- Start Time : 25-11-20, 00:04
- End Time : 25-11-20, 00:05
- Try : 1
- Category : implementation
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

	string board[10][2] = {
					   {"11", "A B C D E F G H J L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A B C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A B C F G H L M"}
	};

	cout << board[n - 1][0] << "\n" << board[n - 1][1] << "\n";

	return 0;
}

// Finish