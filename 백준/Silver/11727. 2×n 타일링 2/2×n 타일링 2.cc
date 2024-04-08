#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	n--;

	vector<long long> v;
	v.push_back(1);
	v.push_back(3);

	if (n < 2) {
		cout << v[n];
	}
	else {
		for (int i = 2; i <= n; i++) {
			v.push_back((v[i - 1] + 2*v[i - 2])%10007);
		}
		cout << v[n];
	}
}

//Finish