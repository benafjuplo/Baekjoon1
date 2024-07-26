/*
- Title : 31416 - Virtual Verification Technology
- Start Time : 24-07-26, 11:52
- End Time : 24-07-26, 12:38
- Try : 1
- Category : mathematics
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int Q;
	cin >> Q;

	while (Q--) {
		int ta, tb;
		cin >> ta >> tb;

		int va, vb;
		cin >> va >> vb;

		int timeA, timeB;
		timeA = va * ta;
		timeB = vb * tb;

		if (timeA <= timeB)		// in this case, A can't help B
			cout << timeB << "\n";

		else {					// in this case, B can help A
			int diff = timeA - timeB;

			int quotient = diff / ta;	// It is remain category

			int remainTask = ta - timeB % ta; // It is remain task in progress for A
			if (timeB % ta == 0)
				remainTask = 0;

			int result;

			if (quotient % 2 == 0) {	// even
				result = timeB + remainTask + quotient / 2 * ta;	// actually, A
			}

			else {		// odd
				result = timeB + (quotient / 2 + 1) * ta; // actually, B
			}

			cout << result << "\n";
		}
	}

}

//Finish