/*
- Title : 23825 - Let’s Make a SASA Model
- Start Time : 25-06-01, 21:52
- End Time : 25-06-01, 21:53
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, m;
	cin >> n >> m;

	cout << min(n/2, m/2);

	return 0;
}

// Finish