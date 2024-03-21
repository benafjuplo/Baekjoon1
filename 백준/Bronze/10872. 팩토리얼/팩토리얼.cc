#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	long long res = N;

	for (int i = N-1; i > 0; i--) {
		res *= i;
	}

	if (N == 0)
		res = 1;

	cout << res;
}

//Finish