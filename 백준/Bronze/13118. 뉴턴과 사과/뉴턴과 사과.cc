/*
- Title : 13118 - Newton and the Apple
- Start Time : 25-01-29, 19:47
- End Time : 25-01-29, 20:13
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	const int PEOPLE_NUMBER = 4;

	vector<int> p(PEOPLE_NUMBER+1);
	for (int i = 1; i <= PEOPLE_NUMBER; ++i) cin >> p[i];

	int x, y, r;
	cin >> x >> y >> r;

	for (int i = 1; i <= PEOPLE_NUMBER; ++i) {
		if (x == p[i]) {
			cout << i;
			return 0;
		}
	}

	cout << 0;
	return 0;
}

//Finish