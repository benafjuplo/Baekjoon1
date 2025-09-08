/*
- Title : 32172 - Hyunkwon and the Mysterious Sequence
- Start Time : 25-09-09, 07:00
- End Time : 25-09-09, 07:23
- Try : 1
- Category : data structure, implementation, unordered_set, bitset, vector
- Language : C++20
*/

/* 한국어 주석
문제에 제시된 수열을 그대로 구현하면 된다.
방법은 여러 가지이다.
첫째로 안전하게 unordered_set을 이용하는 방법이 있다. 단 해시 집합이므로 메모리를 많이 잡아먹고 배열 접근보다는 느리다.

나머지 방법들은 수열의 최대값이 대략 6*N (N=100,000이면 약 60만)임을 이용한다.
둘째로 bool 배열, 벡터를 이용하는 방법이 있다. 매우 빠르고 적은 메모리를 사용한다.
셋째로 비트 집합을 이용하는 방법이 있다. 매우 빠르고 메모리를 가장 적게 사용한다.

6*N 근거는 관찰적 상한이며, 문제 제약이 바뀌면 동적 확장 방식이 더 안전하다.
*/

#include<iostream>
#include<bitset>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	constexpr int MAX = 100'000;

	bitset<MAX * 6> bs = 1;

	int prev = 0;
	int curr = 0;

	for (int i = 1; i <= n; ++i) {
		curr = prev - i;
		if (curr < 0 || bs[curr])
			curr = prev + i;
		prev = curr;

		bs[curr] = 1;
	}

	cout << curr << '\n';

	return 0;
}

// unordered_set version
/*
#include<iostream>
#include<unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	unordered_set<int> us;

	us.insert(0);

	int prev = 0;
	int curr = 0;

	for (int i = 1; i <= n; ++i) {
		curr = prev - i;
		if(curr < 0 || us.count(curr))
			curr = prev + i;
		prev = curr;

		us.insert(curr);
	}

	cout << curr << '\n';

	return 0;
}
*/

// vector version
/*
#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	constexpr int MAX = 100'000;

	vector<bool> v(MAX * 6, 0);

	v[0] = true;

	int prev = 0;
	int curr = 0;

	for (int i = 1; i <= n; ++i) {
		curr = prev - i;
		if (curr < 0 || v[curr])
			curr = prev + i;
		prev = curr;

		v[curr] = true;
	}

	cout << curr << '\n';

	return 0;
}
*/