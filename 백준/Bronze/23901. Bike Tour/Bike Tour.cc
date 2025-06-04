/*
- Title : 23901 - Bike Tour
- Start Time : 25-06-04, 23:14
- End Time : 25-06-04, 23:22
- Try : 1
- Category : implementation, one-pass algorithm
- Language : C++20
*/

/* 한국어 주석
vector에 입력받아 peak인지 확인해도 되지만, prev, curr, next처럼 3개의 변수를 이용하면 메모리 사용 없이 가능하다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	for (int testCase = 1; testCase <= T; ++testCase) {
		int peaks = 0;

		int n;
		cin >> n;

		int prev, curr, next;
		if (n >= 3) {
			cin >> prev >> curr;
		}

		for (int i = 0; i < n-2; ++i) {
			cin >> next;
			if (prev<curr && curr>next)
				peaks++;

			prev = curr;
			curr = next;
		}

		cout << "Case #" << testCase << ": " << peaks << "\n";
	}

	return 0;
}

// Finish