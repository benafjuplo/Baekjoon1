#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= 2*N+1; j++) {
			int blank = 2 * N - 1 - (2*i + 1);
			int ssb = blank / 2;
			if (j <= ssb)
				cout << " ";
			else if (j > (ssb + 2 * i + 1)) {

			}
			else
				cout << "*";
		}
		cout << "\n";
	}
}