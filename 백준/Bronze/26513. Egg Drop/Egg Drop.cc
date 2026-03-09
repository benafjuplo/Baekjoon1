/*
- Title : 26513 - Egg Drop
- Start Time : 26-03-09, 21:26
- End Time : 26-03-09, 21:38
- Try : 1
- Category : simulation
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

	int n, k;
	cin >> n >> k;

	while (n != 0 && k != 0) {
		int breakFloor = k, safeFloor = 1;

		for (int i = 0; i < n; ++i) {
			int floor;
			string result;
			cin >> floor >> result;
			if (result == "SAFE" && safeFloor<floor)
				safeFloor = floor;
			else if (result == "BROKEN" && breakFloor>floor)
				breakFloor = floor;
		}
		cout << safeFloor+1 << ' ' << breakFloor-1 << '\n';

		cin >> n >> k;
	}

	return 0;
}