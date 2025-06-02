/*
- Title : 18141 - Are They All Integers?
- Start Time : 25-06-01, 23:37
- End Time : 25-06-01, 23:47
- Try : 1
- Category : brute-force, mathematics, elementary arithmetic, modular arithmetic
- Language : C++20
*/

/* 한국어 주석
브루트포스 알고리즘으로 구현하면 3중 반복문의 형태가 된다. 입력의 크기가 50이므로 50*49*48 = 117600 의 연산을 수행해야 한다.
문제의 제한 시간은 2초로 1억 정도의 연산은 충분히 가능하기에 브루트포스 알고리즘으로 해결 가능하다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	bool result = true;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i == j)
				continue;
			for (int k = 0; k < n; ++k) {
				if (k == i || k == j)
					continue;
				if ((v[i] - v[j]) % v[k] != 0) {
					i = n;
					j = n;
					k = n;					
					result = false;
				}
			}
		}
	}

	if (result)
		cout << "yes";
	else
		cout << "no";

	return 0;
}

// Finish