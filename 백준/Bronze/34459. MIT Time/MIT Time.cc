/*
- Title : 34459 - MIT Time
- Start Time : 26-04-07, 15:30
- End Time : 26-04-07, 15:47
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
lower_bound()와 같은 이진 탐색이 아닌 if문으로도 똑같은 성능이 나온다.
출력을 자주하기에 문자열에 모아서 한 번에 출력하면 더 빠르다.
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

	vector<long long> mitTime(13, 5);
	
	// 5^13 = 1'220'703'125 > 10^9

	for (int i = 1; i <= 12; ++i) {
		mitTime[i] = 5 * mitTime[i - 1];
	}

	while (t--) {
		int n;
		cin >> n;

		int k = lower_bound(mitTime.begin(), mitTime.end(), n) - mitTime.begin() + 1;

		cout << "MIT";
		if (k != 1) cout << "^" << k;
		cout << " time\n";
	}

	return 0;
}