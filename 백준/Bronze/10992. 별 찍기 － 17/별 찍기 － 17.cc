#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int cnt = 0;
		for (int j = 1;; j++) {
			if (j == 2 * N)
				break;
			if (i == 0 && cnt == 1)
				break;
			if (i != N - 1 && cnt == 2)
				break;
			if (i == N - 1)
				cout << "*";
			else if (j < N - i)
				cout << " ";
			else if (j == N - i) {
				cnt++;
				cout << "*";
			}
			else if (j == N + i) {
				cnt++;
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
}