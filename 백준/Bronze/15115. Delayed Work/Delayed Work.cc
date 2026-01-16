/*
- Title : 15115 - Delayed Work
- Start Time : 26-01-06, 17:26
- End Time : 26-01-06, 17:45
- Try : 1
- Category : mathematics, brute force, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
총 가격 = m * x + k * p / m이다. 이 함수는 아래로 볼록하므로 반복문의 형태로 찾을 수 있다.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	double k, p, x;
	cin >> k >> p >> x;

	int m = 1;
	double d = k / m;
	double price = d * p + m * x;

	while (true) {
		m++;
		d = k / m;
		double newPrice = d * p + m * x;
		if (price < newPrice)
			break;
		price = newPrice;
	}

	cout << fixed << setprecision(3) << price;

	return 0;
}
