/*
- Title : 28455 - Union Maplestory
- Start Time : 25-06-15, 18:56
- End Time : 25-06-15, 19:08
- Try : 1
- Category : sorting, mathematics
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int totalLevel = 0;
	int totalStat = 0;

	int UNION_LIMIT = 42;

	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];
	sort(v.rbegin(), v.rend());

	for (int i = 0; i < min(UNION_LIMIT, n); ++i) {
		int x = v[i];
		totalLevel += x;

		if (x >= 250) totalStat += 5;
		else if (x >= 200) totalStat += 4;
		else if (x >= 140) totalStat += 3;
		else if (x >= 100) totalStat += 2;
		else if (x >= 60) totalStat += 1;
	}
	cout << totalLevel << " " << totalStat;

	return 0;
}

// Finish