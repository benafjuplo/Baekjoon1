/*
- Title : 4589 - Gnome Sequencing
- Start Time : 25-01-13, 20:17
- End Time : 25-01-13, 20:20
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	cout << "Gnomes:\n";

	while (N--) {
		int a, b, c;
		cin >> a >> b >> c;
		if ((a < b && b < c) || (a > b && b > c)) cout << "Ordered\n";
		else cout << "Unordered\n";
	}

	return 0;
}

//Finish