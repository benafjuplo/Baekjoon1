#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	//UP
	for (int i = 1; i <= N; i++) {
		//LEFT
		for (int j = 0; j < N; j++) {
			if (j < i)
				cout << "*";
			else
				cout << " ";
		}
		//RIGHT
		for (int j = N; j > 0; j--) {
			if (j > i)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}

	//DOWN
	for (int i = N-1; i > 0; i--) {
		//LEFT
		for (int j = 0; j < N; j++) {
			if (j < i)
				cout << "*";
			else
				cout << " ";
		}
		//RIGHT
		for (int j = N; j > 0; j--) {
			if (j > i)
				cout << " ";
			else
				cout << "*";
		}
		cout << "\n";
	}
}