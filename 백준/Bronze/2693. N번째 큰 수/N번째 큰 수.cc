/* 2693 - N-th Largest Number */

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<int> v;

	for (int i = 0; i < T; i++) {
		v.clear();
		for (int j = 0; j < 10; j++) {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		cout << v[7] << "\n";
	}
}

//Finish