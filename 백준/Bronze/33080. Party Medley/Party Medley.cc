/*
- Title : 33080 - Party Medley
- Start Time : 25-12-08, 12:53
- End Time : 25-12-08, 13:09
- Try : 1
- Category : brute force
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a.begin(), a.end(), greater<int>());

	int numberOfBalancedTeam = 0;
	int largestTeamRating = 0;

	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			for (int k = j + 1; k < n; ++k) {
				if (a[i] - a[k] <= m) {
					numberOfBalancedTeam++;
					if (largestTeamRating == 0)
						largestTeamRating = a[i] + a[j] + a[k];
				}
			}
		}
	}

	if (numberOfBalancedTeam > 0)
		cout << numberOfBalancedTeam << " " << largestTeamRating << "\n";
	else
		cout << -1 << "\n";

	return 0;
}

// Finish