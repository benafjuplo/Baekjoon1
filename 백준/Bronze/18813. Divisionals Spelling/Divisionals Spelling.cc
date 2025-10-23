/*
- Title : 18813 - Divisionals Spelling
- Start Time : 25-10-23, 00:30
- End Time : 25-10-23, 00:47
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, m;
	cin >> n >> m;

	int result = 0;

	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;

		int len = s.length();
		if (len > m) continue;

		const int alpha_size = 'Z' - 'A' + 1;

		vector<bool> checkAlpha(alpha_size, false);
			
		for (int j = m; j < alpha_size; ++j) {
			checkAlpha[j] = true;
		}

		bool flag = true;
		for (int j = 0; j < len; ++j) {
			if (checkAlpha[s[j] - 'A']) {
				flag = false;
				break;
			}
			checkAlpha[s[j] - 'A'] = true;
		}
		if (flag) 
			result++;		
	}

	cout << result << "\n";

	return 0;
}

// Finish