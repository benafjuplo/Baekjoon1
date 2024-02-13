#include<iostream>

using namespace std;

int factorial(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}

	else {
		return n * factorial(n - 1);
	}
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, r;
	cin >> n >> r;

	int res = 0;
	res = factorial(n) / (factorial(n - r) * factorial(r));
	cout << res;
}