/*
- Title : 27182 - Rain Diary
- Start Time : 25-08-13, 16:14
- End Time : 25-08-13, 16:24
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

	int n, m;	// n : the number of current days of the month, m : the number that the record was signed two weeks ago
	cin >> n >> m;

	if (n > 7) 
		cout << n - 7;
	else 
		cout << m + 7;

	return 0;
}

// Finish