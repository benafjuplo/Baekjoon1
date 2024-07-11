/*
- Title : 11131 - Balancing Weights
- Start Time : 24-07-12. 01:22
- End Time : 24-07-12. 01:26
- Try : 1
- Category : Simple, Basic
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;
		int total = 0;
		while (N--) {
			int x;
			cin >> x;
			total += x;
		}
		if (total > 0)
			cout << "Right\n";
		else if (total < 0)
			cout << "Left\n";
		else
			cout << "Equilibrium\n";
	}
}

//Finish