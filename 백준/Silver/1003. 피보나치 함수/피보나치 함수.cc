#include<iostream>
#include<vector>
using namespace std;

struct f {
	int zero;
	int one;
	f(int a, int b) {
		zero = a;
		one = b;
	}
};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	// Set
	vector <f> v;
	f temp(0, 0);
	for (int i = 0; i <= 40; i++) {
		switch (i) {
		case 0:
			temp.zero = 1;
			temp.one = 0;
			v.push_back(temp);
			break;
		case 1:
			temp.zero = 0;
			temp.one = 1;
			v.push_back(temp);
			break;
		default:
			temp.zero = v[i-1].zero + v[i-2].zero;
			temp.one = v[i-1].one + v[i - 2].one;
			v.push_back(temp);
			break;

		}
	}

	// Print

	for (int i = 0; i < T; i++) {
		int x;
		cin >> x;
		cout << v[x].zero << " " << v[x].one << "\n";
	}
}