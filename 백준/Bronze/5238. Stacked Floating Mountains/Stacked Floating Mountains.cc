/*
- Title : 5238 - Stacked Floating Mountains
- Start Time : 25-09-17, 21:29
- End Time : 25-09-17, 21:34
- Try : 1
- Category : mathematics, elementary arithmetic, Fibonacci numbers
- Language : C++20
*/

/* 한국어 주석
k <= 2 인 경우는 무조건 YES.
k > 2 인 경우, 각 수가 앞의 두 수의 합과 같은지 확인한다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	while (n--) {
		long long k;
		cin >> k;

		if (k <= 2) {
			long long x;
			for(int i = 0; i < k; i++)
				cin >> x;
			cout << "YES\n";
		}
		else {
			long long x1, x2, x;
			cin >> x1 >> x2;

			bool flag = true;
			for (int i = 2; i < k; i++) {
				cin >> x;
				if (x != x1 + x2)
					flag = false;
				x1 = x2;
				x2 = x;
			}
			if (flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}

// Finish