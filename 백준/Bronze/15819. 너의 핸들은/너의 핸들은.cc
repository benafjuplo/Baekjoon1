/*
- Title : 15819 - Your handle
- Start Time : 25-12-26, 14:19
- End Time : 
- Try : 
- Category :
- Language : C++20
*/

/* 한국어 주석
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, x;
	cin >> n >> x;

	vector<string> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[x - 1];

	return 0;
}
