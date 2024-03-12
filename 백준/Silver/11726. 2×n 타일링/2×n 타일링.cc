#include<iostream>
#include<vector>
using namespace std;;


//long long factorial(int n) {
//	long long res = 1;
//	
//	for (int i = n; i > 0; i--) {
//		res *= i;
//		if (res > 100000 && res % 100000 != 0)
//			res %= 100000;
//	}
//	
//	return res;
//}
//
//
//// For combination
//long long factorial2(int n, int r) {
//	long long res = 1;
//
//	int limit = 1;
//	if (r > limit)
//		limit = r;
//
//	for (int i = n; i > limit; i--) {
//		res *= i;
//		if (res > 100000 && res % 100000 != 0)
//			res %= 100000;
//	}
//
//	return res;
//}
//
//
////permutations with duplicates
//long long permutation(int n, int a, int b) {
//	if (a > b)
//		return factorial2(n, a) / factorial(b);
//	else
//		return factorial2(n, b) / factorial(a);
//}
//
//long long cal(int n) {
//	int res = 0;
//
//	for (int i = 0; i <= n / 2; i++) {
//		res += permutation(n-i, n-i*2, i);
//	}
//
//	return res;
//}


long long fibonacci(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2)
		return 2;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	
	for (int i = 2; i <= n; i++) {
		long long temp;
		temp = v[i - 1] + v[i - 2];
		if (temp >= 10007)
			temp %= 10007;
		v.push_back(temp);
	}

	return v[n-1];
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	long long res = fibonacci(n) % 10007;
	cout << res;
}

//Finish