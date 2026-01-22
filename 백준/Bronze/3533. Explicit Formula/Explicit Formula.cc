/*
- Title : 3533 - Explicit Formula
- Start Time : 26-01-22, 18:25
- End Time : 26-01-22, 19:07
- Try : 3 (1 : Misundersttanding, 1 : Wrong calculation)
- Category : mathematicsm, combination
- Language : C++20
*/

/* 한국어 주석
여집합으로 접근한다.
*/

#include<iostream>

using namespace std;

// Consider only k == 2 and k == 3
int nCk(int n, int k) {
	if (k == 2) return n * (n - 1) / 2;
	else if (k == 3) return n * (n - 1) * (n - 2) / 6;
	else return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int zero_count = 0;

	for (int i = 0; i < 10; ++i) {
		bool x;
		cin >> x;
		if (!x)
			zero_count++;
	}

	int total_cases = 165; // nCk(10, 2) + nCk(10, 3)
	int zero_cases = nCk(zero_count, 2) + nCk(zero_count, 3);
	int one_cases = total_cases - zero_cases;
	
	if (one_cases % 2 != 0)
		cout << 1;
	else
		cout << 0;

	return 0;
}
