#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int b[100] = { 0 };

	int N;
	int M;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		b[i] = i + 1;
	}


	for (int x = 0; x < M; x++) {
		int i, j;
		cin >> i >> j;
		reverse(begin(b) + i-1, begin(b) + j);
	}

	for (int i = 0; i < N; i++) {
		cout << b[i] << " ";
	}
}