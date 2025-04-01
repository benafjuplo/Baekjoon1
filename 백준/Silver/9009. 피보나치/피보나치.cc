/*
- Title : 9009 - Fibonacci Numbers
- Start Time : 25-03-26, 16:40 | 25-03-27, ??:??
- End Time :   25-03-26, 16:?? | 25-03-27, 10:50
- Try : 1
- Category : fibonacci, dynamic programming, string, greedy algorithm, binary search, upper_bound
- Language : C++20
*/

/* 한국어 주석
이 문제는 2가지 파트로 나누어 풀 수 있다.
피보나치를 생성하는 부분과 피보나치를 이용하여 입력 값을 나누는 부분이다.
첫 번째 부분은 다이나믹 프로그래밍 형태로 쉽게 구할 수 있다.
두 번째 부분은 큰 피보나치 부터 입력 값과 비교하면 되는데 입력 범위의 피보나치가 46 밖에 안되므로 선형 탐색도 가능하고 이진 탐색을 사용해도 된다.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int t;
	cin >> t;

	const int FIBO_LIMITS = 46;		// to cover 1'000'000'000

	vector<int> f(FIBO_LIMITS);
	f[0] = 0;
	f[1] = 1;
	for (int i = 2;i < f.size();++i) {
		f[i] = f[i-1] + f[i - 2];
	}

	while (t--) {
		string result = "";
		int x;
		cin >> x;
		while (x != 0) {
			int idx = upper_bound(f.begin(), f.end(), x) - f.begin();
			idx--;
			result = to_string(f[idx]) + " " + result;
			x -= f[idx];
			//debug
			//cout << idx << " " << f[idx] << " ";
		}
		cout << result << "\n";
	}

	return 0;
}

// Finish