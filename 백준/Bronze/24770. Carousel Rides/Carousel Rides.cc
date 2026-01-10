/*
- Title : 24770 - Carousel Rides
- Start Time : 26-01-11, 03:07
- End Time : 26-01-11, 03:19
- Try : 1
- Category : mathematics, implementation
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

	int n, m;
	cin >> n >> m;

	while (n != 0 && m != 0) {
		int ansA = 1, ansB = 21;

		for (int i = 0; i < n; ++i) {
			int a, b;
			cin >> a >> b;
			if (a > m)	// ticket limit
				continue;
			if (ansB * a > b * ansA) {
				ansA = a;
				ansB = b;
			}
			else if (ansB * a == b * ansA) {
				if (ansA < a) {
					ansA = a;
					ansB = b;
				}
			}
		}

		if (ansB != 21)
			cout << "Buy " << ansA << " tickets for $" << ansB << "\n";

		else
			cout << "No suitable tickets offered\n";

		cin >> n >> m;
	}

	return 0;
}
