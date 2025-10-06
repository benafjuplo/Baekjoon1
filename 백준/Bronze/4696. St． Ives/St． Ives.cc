/*
- Title : 4696 - St. Ives
- Start Time : 25-10-07, 03:01
- End Time : 25-10-07, 03:07
- Try : 1
- Category : mathematics, elementary arithmetic, fixed, setprecision
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	while (true) {
		double n;
		cin >> n;
		
		if (n == 0) break;
		double ans = 1;
		double mul = 1;

		for (int i = 1; i <= 4; ++i)
			ans += mul *= n;
			
		cout << fixed << setprecision(2) << ans << '\n';		
	}

	return 0;
}

// Finish