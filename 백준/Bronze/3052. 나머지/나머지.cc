#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n[10];
	for (int i = 0; i < 10; i++) {
		int temp;
		cin >> temp;
		n[i] = temp;
	}

	int r[10];
	for (int i = 0; i < 10;i++) {
		r[i] = n[i] % 42;
	}

	vector <int> same;
	same.push_back(r[0]);

	for (auto i : r) {
		if (same.end() == find(same.begin(), same.end(), i)) {
			same.push_back(i);
		}
	}

	cout << same.size();
}