#include<iostream>

using namespace std;

int unsame(int p, int q, int r) {
	if (p == q) {
		return r;
	}
	else if (p == r) {
		return q;
	}
	else if (q == r) {
		return p;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x[4];
	int y[4];

	for (int i = 0; i < 3; i++) {
		cin >> x[i] >> y[i];
	}

	int a; // 공통되지 않은 x좌표
	a = unsame(x[0], x[1], x[2]);

	int b; // 공통되지 않은 y좌표
	b = unsame(y[0], y[1], y[2]);

	cout << a << " " << b;

}