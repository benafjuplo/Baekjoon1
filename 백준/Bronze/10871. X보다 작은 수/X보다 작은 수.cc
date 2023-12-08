#include<iostream>

using  namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio;

	int N, X;
	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		if (temp < X)
			cout << temp << " ";
	}

}