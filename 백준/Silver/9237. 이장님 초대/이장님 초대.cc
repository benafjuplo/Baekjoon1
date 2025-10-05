/*
- Title : 9237 - Planting Trees
- Start Time : 25-10-05, 18:44
- End Time : 25-10-05, 19:03
- Try : 1
- Category : greedy algorithm, sorting
- Language : C++20
*/

/* 한국어 주석
겹치는 경우가 있으므로 정렬 후 계산해야 한다.
자라는 날 = 심은 날 + 자라는 데 걸리는 날
원하는 날 = 자라는 날 + 1
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

	vector<int> growthTime(n);

	for (int i = 0; i < n; i++) {
		cin >> growthTime[i];
	}

	sort(growthTime.begin(), growthTime.end(), greater<int>());

	int maxDay = 0;

	for (int i = 0; i < n; i++) {
		int day = i + 1 + growthTime[i] + 1;
		if (day > maxDay) {
			maxDay = day;
		}
	}

	cout << maxDay << '\n';

	return 0;
}

// Finish