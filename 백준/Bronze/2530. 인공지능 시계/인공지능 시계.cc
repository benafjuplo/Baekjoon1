#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);


	int A, B, C;
	int D;

	cin >> A >> B >> C;
	cin >> D;
	
	double mD = (double)D / 60;
	double hD = mD / 60;

	if (hD > 1) {
		int INT_hD = hD;
		A += INT_hD;

		while (A >= 24)
			A -= 24;
		D -= INT_hD * 60 * 60;
	}

	mD = (double)D / 60;

	if (mD > 1) {
		int INT_mD = mD;
		B += INT_mD;

		if (B >= 60) {
			B -= 60;
			A++;
			if (A >= 24)
				A -= 24;
		}

		D -= INT_mD * 60;
	}

	C += D;
	if (C >= 60) {
		C -= 60;
		B++;
		if (B >= 60) {
			B -= 60;
			A++;
			if (A >= 24)
				A -= 24;
		}
	}

	cout << A << " " << B << " " << C;
}