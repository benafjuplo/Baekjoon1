#include<iostream>

using namespace std;

int euclidean(int a, int b) {
	int r = a % b;
	if (r != 0)
		return euclidean(b, r);
	else
		return b;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int a, b;

		cin >> a >> b;
		int gcd;
		if (a == b)
			gcd = a;

		if (a < b) {
			int temp;
			temp = a;
			a = b;
			b = temp;
		}

		if (a > b) {
			gcd = euclidean(a, b);
		}

		int lcm = a * b / gcd;

		cout << lcm << "\n";
	}
}