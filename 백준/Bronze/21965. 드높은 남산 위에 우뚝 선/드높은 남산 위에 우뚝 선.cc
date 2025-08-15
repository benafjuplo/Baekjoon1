/*
- Title : 21965 - Standing tall atop the lofty Namsan
- Start Time : 25-08-16, 01:11
- End Time : 25-08-16, 01:46
- Try : 2(1 : only up or down case)
- Category : implementation, streaming algorithm
- Language : C++20
*/

/* 한국어 주석
엄격히 증가만 하거나 엄격히 감소만 하여도 가능하다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int prev = 0;
	cin >> prev;	
	int curr = prev;
	bool upFlag = true;

	for (int j = 0; j < n - 1; ++j) {
		prev = curr;
		cin >> curr;
		if (upFlag) {
			if (prev > curr) {	// top of the mountain, i
				upFlag = false;
			}
			else if (curr == prev) {
				cout << "NO\n";
				return 0;
			}			
		}

		else {
			if (prev <= curr) {
				cout << "NO\n";
				return 0;
			}
		}
	}

	cout << "YES\n";

	return 0;
}

// Finish