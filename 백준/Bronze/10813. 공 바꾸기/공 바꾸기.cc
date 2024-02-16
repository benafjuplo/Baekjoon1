#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	int basket[101] = { 0 };

	for (int i = 1; i <= N; i++) {
		basket[i] = i;
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		int temp;
		temp = basket[b];
		basket[b] = basket[a];
		basket[a] = temp;
	}

	for (int i = 1; i <= N; i++) {
		cout << basket[i] << " ";
	}
}