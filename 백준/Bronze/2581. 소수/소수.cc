#include<iostream>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int M, N;
	cin >> M >> N;

	int prime[10001] = { 0 };

	for (int i = 2; i <= N; i++) {
		prime[i] = i;
	}

	for (int i = 2; i <= sqrt(N); i++) {
		if (prime[i] == 0)
			continue;
		int p = prime[i];
		for (int j = i+1; j <= N; j++) {
			if (prime[j] % p == 0) {
				prime[j] = 0;
			}
		}
	}

	//Print
	int total = 0;
	int min = 0;
	for (int i = M; i <= N; i++) {
		if (prime[i] != 0) {
			min = prime[i];
			break;
		}
	}
	if (min == 0) {
		cout << -1;
	}
	else {
		for (int i = M; i <= N; i++) {
			if (prime[i] != 0) {
				total += prime[i];
			}
		}
		cout << total << "\n" << min;
	}
	
}
