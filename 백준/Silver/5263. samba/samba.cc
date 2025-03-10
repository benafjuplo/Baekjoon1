/*
- Title : 5263 - samba
- Start Time : 25-03-10, 12:37
- End Time : 25-03-10, 12:41
- Try : 1
- Category : unordered_map, modular arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n, k;
	cin >> n >> k;

	unordered_map<long long, long long> m;

	for (int i = 0; i < n;++i) {
		long long x;
		cin >> x;
		if (m.count(x)) m[x]++;
		else m[x] = 1;
	}

	for (auto x : m) {
		if (x.second % k != 0) {
			cout << x.first << "\n";
			return 0;
		}
	}

	return 0;
}

//Finish