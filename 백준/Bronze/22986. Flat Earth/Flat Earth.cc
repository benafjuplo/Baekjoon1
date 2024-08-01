/*
- Title : 22986 - Flat Earth
- Start Time : 24-07-31, 18:20, 18:35
- End Time : 24-07-31, 18:32
- Try : 3(1 : Condition Mistake, 1 : Data Type Mistake)
- Category : mathematics, long long, arithmetical sequence, sum of arithmetical sequence
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		long long N, K;
		cin >> N >> K;
		long long last = 4 + (N - 1) * 4;
		long long start = 4 + (N - 1 - K) * 4;
		if (start < 4)
			start = 4;
		long long res = min((1 + K), N) * (start + last) / 2;
		cout << res << "\n";
	}
}

//Finish