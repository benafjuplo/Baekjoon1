/*
- Title : 25191 - Ims Saw GomGom Dancing the Chicken Dance
- Start Time : 25-06-01, 21:38
- End Time : 25-06-01, 21:40
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

	int n, a, b;
	cin >> n >> a >> b;

	cout << min(n, a / 2 + b);

	return 0;
}

// Finish