#include <iostream>

using namespace std;

int findmax(int a, int b, int c) {
	if (a >= b && a >= c)
		return a;
	else if (b>=a && b>=c)
		return b;
	else {
		return c;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (true) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		else {
			if (a == findmax(a, b, c)) {
				if (a * a == b * b + c * c)
					cout << "right" << "\n";
				else
					cout << "wrong" << "\n";
			}
			else if (b == findmax(a, b, c)) {
				if (b * b == a * a + c * c)
					cout << "right" << "\n";
				else
					cout << "wrong" << "\n";
			}
			else {
				if (c * c == a * a + b * b)
					cout << "right" << "\n";
				else
					cout << "wrong" << "\n";
			}
		}
	}
}
