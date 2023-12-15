#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < 2 * N - 1; i++) {
		if (i < N)
			for (int j = 1; j <= 2 * N - i - 1; j++) {
				if (j <= i)
					cout << " ";
				else
					cout << "*";
			}
		else
			for (int j = 1; j <= i+1; j++) {
				if (j <= 2*N-1 - i - 1)
					cout << " ";
				else
					cout << "*";
			}
		cout << "\n";
	}
}