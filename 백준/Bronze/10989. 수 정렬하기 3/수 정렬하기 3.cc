#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int arr[10001] = { 0 };

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr[temp]++;
	}

	for (int i = 1; i <= 10000; i++) {
		while (arr[i]--) {
			cout << i << "\n";
		}
	}
}