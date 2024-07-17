/*
- Title : 16394 - Hongik University
- Start Time : 24-07-18, 00:14
- End Time : 24-07-18, 00:18
- Try : 1
- Category : Basic, I/O, Simple
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int year;
	cin >> year;
	const int startYear = 1946;
	cout << year - startYear << "\n";
}

//Finish