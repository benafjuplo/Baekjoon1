/*
- Title : 28224 - Final Price
- Start Time : 25-01-01, 22:30
- End Time : 25-01-01, 22:32
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	int cost;
	cin >> cost;

	for (int i = 0; i < n - 1;++i) {
		int x;
		cin >> x;
		cost += x;
	}

	cout << cost;

	return 0;
}

//Finish