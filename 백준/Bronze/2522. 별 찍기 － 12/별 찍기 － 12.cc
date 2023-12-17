#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= 2 * N-1; i++) {
		if (i <= N) {
			for (int j = 0; j < N; j++) {
				if (j < N - i) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
		}
		else {
			for (int j = 0; j < N; j++) {
				if (j < i-N) {
					cout << " ";
				}
				else {
					cout << "*";
				}
			}
		}
		cout << "\n";
	}
}