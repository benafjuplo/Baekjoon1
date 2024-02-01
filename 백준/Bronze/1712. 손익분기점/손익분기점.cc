#include<iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	double A, B, C;
	cin >> A >> B >> C;

	if (B >= C) {
		cout << -1;
		return 0;
	}

	int n = A / (C - B);
	int res = n + 1;

	cout << res;
}