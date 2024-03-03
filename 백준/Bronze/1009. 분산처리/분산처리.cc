#include<iostream>
#include<vector>
using namespace std;

int findOnesPlace(int a, int b) {
	// 1 <= a,b
	int x = a % 10;
	int res = 0;
	int c;
	if (x == 0) {
		res = 0;
	}
	else if (x == 1) {
		res = 1;
	}
	else if (x == 2) {
		int two[4] = { 2,4,8,6 };
		c = (b - 1) % 4;
		res = two[c];
	}
	else if (x == 3) {
		int three[4] = { 3,9,7,1 };
		c = (b - 1) % 4;
		res = three[c];
	}

	else if (x == 4) {
		int four[2] = { 4,6 };
		c = (b - 1) % 2;
		res = four[c];
	}

	else if (x == 5) {
		res = 5;
	}

	else if (x == 6) {
		res = 6;
	}

	else if (x == 7) {
		int seven[4] = { 7,9,3,1 };
		c = (b - 1) % 4;
		res = seven[c];
	}

	else if (x == 8) {
		int eight[4] = { 8,4,2,6 };
		c = (b - 1) % 4;
		res = eight[c];
	}

	else if (x == 9) {
		int nine[2] = { 9,1 };
		c = (b - 1) % 2;
		res = nine[c];
	}

	return res;

	
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		int res = findOnesPlace(a, b);
		if (res == 0)
			res = 10;
		cout << res << "\n";
	}
	
}

//Finish