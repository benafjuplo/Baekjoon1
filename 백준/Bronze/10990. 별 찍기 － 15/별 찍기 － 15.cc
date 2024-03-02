#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	bool first = true;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 1; i < 2*N; j++) {
			if (j == N - i || j == N + i) {
				cout << "*";
				cnt++;
				if (first) {
					first = false;
					cnt = 0;
					break;
				}
				if (cnt == 2) {
					cnt = 0;
					break;
				}
			}
			else {
				cout << " ";	
			}
		}
		cout << "\n";
	}
}