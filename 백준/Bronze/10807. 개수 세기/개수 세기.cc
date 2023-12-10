#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> v;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	
	int find;
	cin >> find;

	int cnt = 0;

	for (int i = 0; i < N; i++) {
		if (v[i] == find)
			cnt++;
	}

	cout << cnt;

}