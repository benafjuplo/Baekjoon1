/*
- Title : 30580 - Natatorium
- Start Time : 25-03-02, 00:48
- End Time : 25-03-02, 00:56
- Try : 1
- Category : mathematics, elementary arithmetic, modular arithmetic
- Language : C++20
*/

/* 한국어 주석
직사각형의 수영장의 넓이가 주어질 때, 가능한 변의 길이들이 주어진다.
문제에서 조건은 모두 소수라는 것이다.
이를 이용하면 메모리를 사용하지 않고 간단히 해결 가능하다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long c, m;
	cin >> c >> m;

	for (int i = 0; i < m; ++i) {
		long long p;
		cin >> p;
		if (c % p == 0) {
			long long a = c / p;
			cout << min(a, p) << " " << max(a, p);
			return 0;
		}
	}

	return 0;
}

//Finish