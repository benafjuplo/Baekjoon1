#include<iostream>
#include<vector>
using namespace std;

long long fibonacci(int n) {
	vector<long long> v;
	for (int i = 0; i <= n; i++) {
		if (i == 0)
			v.push_back(0);
		else if(i==1)
			v.push_back(1);
		else {
			long long x = v[i - 1] + v[i - 2];
			v.push_back(x);
		}
	}
	return v[n];
}

int  main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<int>v;

	cout << fibonacci(n);
}

//Finish