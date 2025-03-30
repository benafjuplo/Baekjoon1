/*
- Title : 31674 - Exceptional Technology
- Start Time : 25-03-27, 11:33
- End Time : 25-03-27, 11:41
- Try : 2(1: int -> long long)
- Category : greedy algorithm, modular arithmetic, sorting
- Language : C++20
*/

/* 한국어 주석
그리디 알고리즘으로 풀이가 가능하다.
입력 값들을 정렬하고 큰 순서부터 더해나가면 되고 모듈러 연산을 연산마다 수행한다.
순간적으로 int 범위를 넘어서므로 결과값은 long long을 사용한다.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;
	
	vector<int> v(n);

	for (auto& x : v) cin >> x;
	
	sort(v.rbegin(), v.rend());

	long long result = v[0];

	const int MOD = 1'000'000'000 + 7;

	for (int i = 1;i < n;++i) {
		result += result + v[i];
		result %= MOD;
	}

	cout << result;

	return 0;
}

// Finish