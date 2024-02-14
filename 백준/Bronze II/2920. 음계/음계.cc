#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int scale[8];

	for (int i = 0; i < 8; i++)
		cin >> scale[i];

	bool ascending = true;
	for (int i = 0; i < 8; i++) {
		if (scale[i] != i + 1) {
			ascending = false;
			break;
		}
	}

	if (ascending) {
		cout << "ascending";
		return 0;
	}

	bool descending = true;
	for (int i = 0; i < 8; i++) {
		if (scale[i] != 8 - i) {
			descending = false;
			break;
		}
	}

	if (descending) {
		cout << "descending";
		return 0;
	}

	cout << "mixed";
	
}