#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;	// Input N, natural number
	int K;	// Input K, natural number
	cin >> N;
	cin >> K;
	try {
		if (N <= 0 || K <= 0)  // natural number check
			throw "The number is not a natural number.";
	}
	catch (const char* s) {
		cout << s;
	}

	vector <int> divisors;	// 약수
	for (int i = 1; i <= N; i++) {
		if (divisors.size() == K)		// Fast end
			break;
		if (N % i == 0)
			divisors.push_back(i);
	}
	if (K > divisors.size())
		cout << 0;
	else
		cout << divisors[K-1];
}