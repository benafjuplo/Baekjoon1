/*
- Title : 30802 - Welcome Kit
- Start Time : 25-03-24, 16:24
- End Time : 25-03-24, 16:55
- Try : 1
- Category : mathematics, elementary arithemetic, modular arithmetic
- Language : C++20
*/

/* 한국어 주석
문제가 길고 복잡해 보이지만 매우 간단하다.
티셔츠는 모듈러 연산으로 올림 연산을 구현하여 계산 가능하다.
펜은 정수 나눗셈의 몫과 나머지이다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	const int TYPES = 6;
	vector<int> v(TYPES);

	for (auto& x : v)
		cin >> x;

	int a, b;
	cin >> a >> b;

	int t = 0;

	for (auto& x : v) {
		t += x / a;
		if (x % a > 0)
			t++;
	}

	cout << t << "\n";
	cout << n / b << " " << n % b;

	return 0;
}

// Finish