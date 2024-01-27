#include<iostream>
#include<vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;
	vector<int> coin;	// 동전 종류별 가치
	vector<int> cnt;	// 동전 종류별 갯수
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		coin.push_back(temp);
		cnt.push_back(0);
	}

	int total = 0;		// 현재 총 가치
	int res = 0;		// 출력 결과

	if (N == 1) {
		res = K;
	}

	else {
		// Greedy
		int k = K;
		for (int i = N-1; i >= 0; i--) {
			if (k / coin[i] > 0) {
				cnt[i] += k / coin[i];
				k -= coin[i] * cnt[i];
				total += coin[i] * cnt[i];
			}
		}

		int seq = 1;
		while (total != K) {
			if (seq == N) {
				seq = 1;
			}
			if (cnt[seq] == 0) {
				seq++;
				continue;
			}
			if (K - total > coin[seq] * cnt[seq]) {
				seq++;
				continue;
			}
			int dif = K - total;
			cnt[seq] -= dif / coin[seq] + 1;
			total -= (dif / coin[seq] + 1) * coin[seq];

			for (int i = seq-1; i > 0; i--) {
				if (dif / coin[i] > 0) {
					cnt[i] += dif / coin[i];
					dif -= coin[i] * (dif / coin[i]);
					total += coin[i] * (dif / coin[i]);
				}
			}
			seq = 1;
		}

		for (int i = 0; i < N; i++) {
			res += cnt[i];
		}
	}
	
	cout << res;
}