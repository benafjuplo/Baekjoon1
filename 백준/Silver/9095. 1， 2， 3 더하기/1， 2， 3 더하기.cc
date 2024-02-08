#include<iostream>

using namespace std;

int factorial(int n) {
	if (n == 1 || n == 0)
		return 1;
	else {
		return n * factorial(n - 1);
	}
}

int cal(int a, int b, int c) {
	int res = 0;

	res = factorial(a + b + c) / (factorial(a) * factorial(b) * factorial(c));

	return res;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	int arr[11] = {0};
	for (int i = 1; i < 11; i++) {
		int a = i;
		int b = 0;
		int c = 0;

		for (b = 0; b <= (double)i / 2; ) {
			for (c = 0; c <= (double)i / 3; ) {
				//
				arr[i] += cal(a, b, c);

				//Increment
				c++;
				a-=3;
				if (a < 0) {
					break;
				}
			}
			//Increment
			a += c * 3;
			c = 0;
			
			b++;
			a -= 2;
			if (a < 0)
				break;
		}
		
	}

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		cout << arr[n] << "\n";
	}
}