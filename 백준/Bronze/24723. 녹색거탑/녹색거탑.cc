/*
- Title : 24723 - Green Tower
- Start Time : 25-06-20, 00:40
- End Time : 25-06-20, 00:41
- Try : 1
- Category : mathematics
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	//cout << pow(2, n);

	int result = 1;
	for (int i = 0; i < n; ++i)
		result *= 2;

	cout << result;

	return 0;
}

// Finish