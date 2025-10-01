/*
- Title : 25238 - Gahee and Defense Ignore
- Start Time : 25-10-02, 01:48
- End Time : 25-10-02, 01:49
- Try : 1
- Category : mathemaitcs, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설멸 생략.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	if(a*(100 - b) < 10000) cout << 1;
	else cout << 0;

	return 0;
}

// Finish