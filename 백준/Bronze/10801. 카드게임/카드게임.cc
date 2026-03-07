/*
- Title : 10801 - Card Game
- Start Time : 26-03-07, 12:59
- End Time : 26-03-07, 13:02
- Try : 1
- Category : implementation
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

	vector<int> a(10);

	for (int i = 0 ;i < 10;++i)
		cin >> a[i];

	int scoreA = 0;
	int scoreB = 0;

	for (int i = 0; i < 10; ++i) {
		int b;
		cin >> b;
		if (a[i] > b)
			scoreA++;
		else if (a[i] < b)
			scoreB++;
	}

	if (scoreA > scoreB)
		cout << "A\n";
	else if (scoreA < scoreB)
		cout << "B\n";
	else
		cout << "D\n";

	return 0;
}
