/*
- Title : 21394 - Digit Cards
- Start Time : 25-08-20, 00:20
- End Time : 25-08-20, 00:47
- Try : 1
- Category : string, greedy algorithm
- Language : C++20
*/

/* 한국어 주석
입력을 받은 숫자 카드의 개수를 세고, 6과 9는 합쳐서 처리한다.
이후 큰 수를 왼쪽과 오른쪽에 번갈아가며 배치하여 문자열을 만든다.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		vector<int> cnt(10, 0);
		int n = 0;

		for (int i = 1; i < 10; i++) {
			int x;
			cin >> x;
			cnt[i] = x;
			n += x;
		}

		// Spin 6 to 9
		cnt[9] += cnt[6];
		cnt[6] = 0;

		string str;
		str.assign(n, '0');

		int L = 0, R = n - 1;
		bool leftFlag = true;

		for (int i = 9; i > 0; --i) {
			for (int j = 0; j < cnt[i]; j++) {
				if (leftFlag)
					str[L++] = i + '0';
				else
					str[R--] = i + '0';
				leftFlag = !leftFlag;
			}
		}

		for (auto it : str) {
			cout << it << " ";
		}
		cout << "\n";
	}

	return 0;
}

// Finish