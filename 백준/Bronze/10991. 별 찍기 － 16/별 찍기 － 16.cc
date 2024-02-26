#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		bool star = true;
		int cnt = 0;
		for (int j = 1; ; j++) {
			if (cnt == i+1)
				break;
			if (j < n-i)
				cout << " ";
			else if (star) {
				cout << "*";
				cnt++;
				star = false;
			}
			else {
				cout << " ";
				star = true;
			}
		}
		cout << "\n";
	}
}