/*
- Title : 11051 - Binomial Coefficient 2
- Start Time : 24-08-05, 18:32 / 24-08-06, 22:07
- End Time :   24-08-05, 18:43 / 24-08-06, 22:22
- Try : 1
- Category : (common) mathematics, combination, factorial, binomial coefficient
			 (option1) exponentiation by squaring, modular arithmetic, Fermat's little theorem, inverse modular
			 (option2) dynamic programming, Pascal's triangle, Pascal's rule
*/

#include<iostream>
#include<algorithm>

using namespace std;

// Function to compute modular inverse of a under modulo mod using Fermat's Little Theorem
long long inverseModular(long long a, long long mod) {	
	long long result = 1;
	long long exponent = mod - 2;	// mod is prime number
	long long base = a;
	// Fast Exponentiation (Exponentiation by squaring)
	while (exponent > 0) {
		if (exponent % 2 == 1)	// If exponent is odd, multiply base with result
			result = (result * base) % mod;
		base = (base * base) % mod;
		exponent /= 2;
	}

	return result;
}

// Function to compute combination(n, r) % mod
long long combinationWithMOD(long long n, long long r, int mod){
	if (r > n)	// Combination is not defined for r > n
		return 0;
	if (r == 0 || r == n)
		return 1;

	r = min(r, n - r);
	long long result = 1;
	for (int i = 1; i <= r; i++) {
		result = (result * (n - r + i)) % mod;
		result = (result * inverseModular(i, mod)) % mod;
	}
	return result;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	const int MOD = 10007;

	long long n, r;
	cin >> n >> r;

	cout << combinationWithMOD(n, r, MOD);
}

//Finish