/*
- Title : 1735 - Sum of Fractions
- Start Time : 25-03-26, 16:17
- End Time : 
- Try : 1
- Category : mathematics, number theory, gcd, numeric, Euclidean algorithm, C++17
- Language : C++20
*/

/* 한국어 주석
분수의 덧셈은 간단히 구현 가능하다.
C++17 이상은 <numeric> 라이브러리의 gcd() 함수를 이용하여 기약분수로 만들 수 있다.
그렇지 않은 경우, 유클리드 호제법을 사용하여 최대공약수를 구하여 기약분수를 만든다.
*/

#include<iostream>
#include<numeric>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	int c, d;
	c = a1 * b2 + a2 * b1;
	d = b1 * b2;

	int g = gcd(c, d);
	c /= g;
	d /= g;

	cout << c << " " << d;

	return 0;
}

// Finish