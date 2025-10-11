/*
- Title : 14790 - Tidy Numbers (Small)
- Start Time : 25-10-12, 03:24
- End Time : 25-10-12, 03:43
- Try : 1
- Category : string, mathematics
- Language : C++20
*/

/* 한국어 주석
주어진 숫자 n이 주어졌을 때, n보다 작거나 같은 가장 큰 tidy number를 찾는 문제
1. 우선 n이 tidy number인지 0부터 끝까지 확인. tidy number인 경우 idx가 len까지 도달.
2. tidy number가 아닌 경우, 감소할 수 있는 위치를 찾고 그 위치의 숫자를 1 감소시킴.
3. 그 위치 이후의 모든 숫자를 9로 바꿈.
4. 만약 맨 앞자리가 0이 되는 경우, 그 0을 제거하고 출력.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int t;
	cin >> t;

	for (int tc = 1; tc <= t; tc++) {
		string n;
		cin >> n;
		int len = n.length();
		if (len == 1) {
			cout << "Case #" << tc << ": " << n << "\n";
			continue;
		}
		int idx = 1;
		// Find the first position where the digits are not in non-decreasing order
		while (idx < len && n[idx - 1] <= n[idx]) {
			idx++;
		}		
		// If the entire number is tidy
		if (idx == len) {
			cout << "Case #" << tc << ": " << n << "\n";
			continue;
		}
		// Move back to the position where the digit can be decreased
		while (idx > 0 && n[idx - 1] >= n[idx]) {
			idx--;
		}
		n[idx]--;
		// Set all digits after idx to '9'
		for (int i = idx + 1; i < len; i++) {
			n[i] = '9';
		}
		// Handle leading zero
		if (n[0] == '0') {
			cout << "Case #" << tc << ": " << n.substr(1) << "\n";
		}
		else {
			cout << "Case #" << tc << ": " << n << "\n";
		}
	}

	return 0;
}

// Finish