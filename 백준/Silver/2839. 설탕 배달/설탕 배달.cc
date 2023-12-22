#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	if (N % 5 == 0) {
		cout << N / 5;
		return 0;	// Fast Route
	}

	int startm = N / 5;

	int m; // 5^m
	int n;// 3^n
	bool key = false;
	for ( m = startm; m >= 0; m--) {
		for (n = 0;;n++) {
			int cal = 5*m + 3*n;
			if (cal == N) {
				key = true;
				break;
			}
			if (cal > N)
				break;
		}
		if (key == true)
			break;
	}
	if (key == false)
		cout << -1;
	else
		cout << m + n;
}