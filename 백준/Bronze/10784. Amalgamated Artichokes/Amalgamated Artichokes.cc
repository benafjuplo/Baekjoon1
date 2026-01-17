/*
- Title : 10784 - Amalgamated Artichokes
- Start Time : 26-01-18, 07:50
- End Time : 26-01-18, 07:56
- Try : 1
- Category : mathematics, implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int p, a, b, c, d, n;
	cin >> p >> a >> b >> c >> d >> n;

	double ans = 0;

	double prev = 0;
	double peak = 0;

	for (int k = 1; k <= n; ++k) {
		double price = p * (sin(a * k + b) + cos(c * k + d) + 2);

		if (peak < price)
			peak = price;
		if (prev > price)
			ans = max(ans, peak - price);
		prev = price;
	}

	cout << fixed << setprecision(8) << ans;

	return 0;
}
