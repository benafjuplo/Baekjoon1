#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	bool odd = true;
	for (int i = 0; i < n; i++) {
		if (odd) {
			for (int j = 0; j < n; j++) {
				cout << "* ";
			}
			odd = false;
		}
		else {
			cout << " ";
			for (int j = 0; j < n; j++) {
				cout << "* ";
			}
			odd = true;
		}
		cout << "\n";
	}
}