/*
- Title : 24746 - Pooling PCR Tests
- Start Time : 24-08-17, 00:52
- End Time : 24-08-17, 01:23
- Try : 1
- Category : mathematics
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	double p;
	cin >> p;

	int result = 1;

	double minEdivideN = 10000;

	bool EGreaterAllN = true;

	for (int i = 1; i <= 16; i++) {
		double P = pow(1-p, i);
		double E = P + (double)i * (1 - P);
		double EdivideN = E / i;
		if (i > E)
			EGreaterAllN = false;
		if (EdivideN < minEdivideN) {
			minEdivideN = EdivideN;
			result = i;
		}
	}

	if (EGreaterAllN)
		cout << 1;
	else
		cout << result;
}

//Finish
