/*
- Title : 22885 - Reversort
- Start Time : 25-10-03, 23:52
- End Time : 25-10-04, 00:36
- Try : 2(1 : Wrong approach)
- Category : simulation, sorting
- Language : C++20
*/

/* 한국어 주석
문제에 나온 정렬을 시뮬레이션하면 된다.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int t;
	cin >> t;

	for (int test_case = 1; test_case <= t; test_case++) {
		int n;
		cin >> n;

		int ans = 0;

		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}

		for (int i = 0; i < n - 1; i++) {
			int j;

			for (j = i; j < n; j++) {
				if (v[j] == i + 1)
					break;
			}
			
			
			reverse(v.begin() + i, v.begin() + j + 1);

			ans += (j - i + 1);
		}

		cout << "Case #" << test_case << ": " << ans << "\n";
	}

	return 0;
}

// Finish