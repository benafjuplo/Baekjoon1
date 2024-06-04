/*
- Title : Number of Zeros(Counting Digits)
- Start Time : 24-06-04, 14:02
- End Time : 24-06-04, 14:17
- Try : 2
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<int> num(1000'000 + 1);

	for (int i = 0; i < 1000'000 + 1; i++) {
		string str = to_string(i);
		int cnt = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '0')
				cnt++;
		}
		num[i] = cnt;
	}

	while (T--) {
		int N, M;
		cin >> N >> M;

		int cnt = 0;

		for (int i = N; i <= M; i++) {
			cnt += num[i];
		}

		cout << cnt << "\n";
	}
}
