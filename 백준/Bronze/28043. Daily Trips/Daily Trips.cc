/*
- Title : 28043 - Daily Trips
- Start Time : 26-03-01, 02:23
- End Time : 26-03-01, 02:44
- Try : 1
- Category : simulation
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

	int n, h, w;
	cin >> n >> h >> w;

	for (int i = 0; i < n; ++i) {
		char a, b;
		cin >> a >> b;

		if (a == 'Y' || w == 0) {
			h--;
			w++;
			cout << "Y" << " ";
		}
		else 
			cout << "N" << " ";

		if (b == 'Y' || h == 0) {
			h++;
			w--;
			cout << "Y" << "\n";
		}
		else
			cout << "N" << "\n";
	}

	return 0;
}
