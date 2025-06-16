/*
- Title : 26559 - Friends
- Start Time : 25-06-15, 23:35
- End Time : 25-06-15, 23:43
- Try : 1
- Category : pair, sorting
- Language : C++20
*/

/* 한국어 주석
pair vector를 sort와 람다 비교 함수을 사용하면 간단히 해결 가능하다.
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int m;
		cin >> m;

		vector<pair<string, int>> v(m);

		for (int i = 0; i < m; ++i) {
			cin >> v[i].first >> v[i].second;
		}
		sort(v.begin(), v.end(), [](pair<string, int> &a, pair<string, int> &b) {
			return a.second > b.second;
			}
		);

		for (int i = 0; i < m; ++i) {
			cout << v[i].first;
			if (i != m - 1)
				cout << ", ";
			else
				cout << "\n";
		}
	}

	return 0;
}

// Finish