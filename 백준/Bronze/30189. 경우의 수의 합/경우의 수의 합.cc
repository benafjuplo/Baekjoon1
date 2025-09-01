/*
- Title : 30189 - Total number of possibilities
- Start Time : 25-09-02, 05:11
- End Time : 25-09-02, 05:26
- Try : 1
- Category : mathematics, brute force
- Language : C++20
*/

/* 한국어 주석
이 문제는 n과 m이 주어졌을 때, 조건을 만족하는 (x, y) 쌍의 개수를 구하는 문제이다. 
어떤 (x, y) 쌍을 고르더라도 그 합 x+y는 반드시 0과 n+m 사이에 있기 때문에(0+0 ≤ x+y ≤ n+m)
구하고자 하는 값은 0 <= x <= n과 0 <= y <= m을 만족하는 모든 순서쌍 (x, y)의 총개수를 세는 것과 같다. 
따라서 x의 총 가지수와 y의 총 가지수의 곱인 (n+1)(m+1)이 답이 된다.
문제의 제한이 작기 때문에 브루트 포스로도 풀 수 있다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, m;
	cin >> n >> m;

	cout << (n + 1) * (m + 1) << "\n";

	/* Brute Force
	int limit = n + m;

	int ans = 0;

	for(int i = 0 ; i <= limit; i++) {
		for (int a = 0; a <= i; a++) {
			int b = i - a;
			if (a <= n && b <= m) {
				ans++;
			}
		}
	}

	cout << ans << "\n";
	*/

	return 0;
}

// Finish