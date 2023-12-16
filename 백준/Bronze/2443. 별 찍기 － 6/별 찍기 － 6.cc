#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2*N-1; j++) {
			if (j >= 2 * N - 1 - i)
				break;
			if (j < i)
				cout << " ";
			else
				cout << "*";

		}
		cout << "\n";
	}
}