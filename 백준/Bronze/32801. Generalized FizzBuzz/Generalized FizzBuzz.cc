/*
- Title : 32801 - Generalized FizzBuzz
- Start Time : 26-01-31, 01:10
- End Time : 26-01-31, 01:13
- Try : 1
- Category : mathematics, least common multiple
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<numeric>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	long long n, a, b;
	cin >> n >> a >> b;

	long long fizz = n / a;
	long long buzz = n / b;
	long long lcm_ab = lcm(a, b);

	long long fizzbuzz = n / lcm_ab;

	cout << fizz - fizzbuzz << " " << buzz - fizzbuzz << " " << fizzbuzz << "\n";

	return 0;
}
