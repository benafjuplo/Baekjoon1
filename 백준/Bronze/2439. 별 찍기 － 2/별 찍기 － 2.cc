#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N-1; j >= 0; j--) {
			if (j > i)
				cout << " ";
			else
				cout << "*";
		}
		if (i != N - 1)
			cout << "\n";
	}
}
