/*
- Title : 2052 - Exponentiation
- Start Time :	25-08-16, 00:33, 25-08-19, 00:18
- End Time :	25-08-16, 01:00, 25-08-19, 01:06
- Try : 1
- Category : mathematics, arbitrary-precision arithmetic
- Language : C++20
*/

/* 한국어 주석
1/2^n은 0.5, 0.25, 0.125, 0.0625, 0.03125, 0.015625. 0.0078125, 0.00390625, ... 등으로 나타낼 수 있다.
여기서 소수점 아래의 0의 개수는 맨 앞의 숫자가 1일 때 추가되고 소수점 아래의 숫자는 5의 제곱 형태이다.
맨 앞의 숫자가 1인 것을 확인하기 위해 문자열로 큰 수를 표현한다.
선행 0의 개수 = N - digits(5^N) = N - rev.size()와 같다. 따라서 조금 더 간단하게 계산할 수 있다.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int N;
	if (!(std::cin >> N)) return 0;
	const int N_copy = N;

	// rev: 5^k를 "LSB 먼저" 담는 문자열 (예: 125 -> "521")
	string rev = "1";
	for (int step = 0; step < N; ++step) {
		int carry = 0;
		for (size_t i = 0; i < rev.size(); ++i) {
			int x = (rev[i] - '0') * 5 + carry;
			rev[i] = char('0' + (x % 10));
			carry = x / 10;
		}
		if (carry) rev.push_back(char('0' + carry));
	}

	// 선행 0의 개수 = N - digits(5^N) = N - rev.size()
	int zeros = N_copy - static_cast<int>(rev.size());

	cout << "0.";
	for (int i = 0; i < zeros; ++i) cout << '0';
	reverse(rev.begin(), rev.end());
	cout << rev << "\n";	

	return 0;
}

// Finish