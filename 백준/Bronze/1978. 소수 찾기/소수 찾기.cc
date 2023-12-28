#include<iostream>

using namespace std;

bool prime(int n) {
	int cnt = 0;
	for (int i = 1; i <= n;i++) {
		if (n % i == 0)
			cnt++;
		if (cnt > 2)
			break;
	}
	if (cnt == 2)
		return true;
	else
		return false;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;	
		if (prime(temp))
			cnt++;
	}
	cout << cnt;
}