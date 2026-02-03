/*
- Title : 25053 - Organizing SWERC
- Start Time : 26-02-04, 00:44
- End Time : 26-02-04, 00:54
- Try : 1
- Category : implementation, unordered_map
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while(T--){
		unordered_map<int, int> problems;

		int n;
		cin >> n;

		for (int i = 0; i < n; ++i) {
			int b, d;
			cin >> b >> d;

			if (b > problems[d]) {
				problems[d] = b;
			}
		}

		if (problems.size() != 10) {
			cout << "MOREPROBLEMS\n";
			continue;
		}

		int ans = 0;

		for (int i = 1; i <= 10; ++i) {
			ans += problems[i];
		}

		cout << ans << '\n';
	}

	return 0;
}
