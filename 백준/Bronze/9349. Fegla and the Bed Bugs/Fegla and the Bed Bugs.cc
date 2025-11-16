/*
- Title : 9349 - Fegla and the Bed Bugs
- Start Time : 25-11-17, 03:44
- End Time : 25-11-17, 03:45
- Try : 1
- Category : mathematic, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
N칸 중 K칸에 빈대를 놓을 때, 인접한 두 빈대 사이의 빈 칸 수의 최소값을 최대화하는 문제이다.

빈대를 K마리 두면 사이 구간은 K-1개이고,
최적 배치에서는 모든 빈 칸 N-K개가 이 구간들 안에 들어간다고 볼 수 있다.

N-K개의 빈 칸을 K-1개 구간에 최대한 균등하게 나누면,
각 구간이 보장하는 최소 빈 칸 수는 floor((N-K)/(K-1))이므로
정답은 (n - k) / (k - 1)이다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int n, k;
		cin >> n >> k;

		cout << (n - k) / (k - 1) << "\n";
	}

	return 0;
}

// Finish