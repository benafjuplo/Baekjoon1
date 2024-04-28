/* 24416 - Algorithm Class - Fibonacci Number 1 */

#include<iostream>

using namespace std;

void fib(int n, int &cnt) {
	if (n == 1 || n == 2) {
		//return 1;  // 코드1
		cnt++;
	}
	else {
		fib(n - 1, cnt);
		fib(n - 2, cnt);
	}
}

void fibonacci(int n, int &cnt) {
	//f[1] = -f[2] < -1;
	for (int i = 3; i <= n; i++) {
		//f[i] < -f[i - 1] + f[i - 2];  # 코드2
		cnt++;
	}
	//return f[n];
	return;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	int cnt1 = 0;
	fib(n, cnt1);
	
	int cnt2 = 0;
	fibonacci(n, cnt2);

	cout << cnt1 << " " << cnt2;

}

//Finish