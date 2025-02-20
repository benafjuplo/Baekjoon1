/*
- Title : 8710 - Basketball player
- Start Time : 25-02-21, 03:52
- End Time : 25-02-21, 03:54
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetics
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long k, w, m;
	cin >> k >> w >> m;

	if (k > w) cout << 0;
	else cout << (w - k) / m + (bool)((w - k) % m);

	return 0;
}

//Finish