/* 1789 - Sum of Numbers */

#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	unsigned long long S;
	cin >> S;
	unsigned long long N;

	for (unsigned long long i = 1;; i++) {
		unsigned long long s = i*(1 + i) / 2;	// n(a+l)/2 Sum of arithmetic sequence
		if (s > S) {
			N = i - 1;
			break;
		}
	}

	cout << N;
}

//Finish