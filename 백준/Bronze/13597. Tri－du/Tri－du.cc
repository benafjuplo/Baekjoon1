/*
- Title : 13597 - Tri-du
- Start Time : 25-06-07, 19:06
- End Time : 25-06-07, 19:08
- Try : 1
- Category : implementation
- Language : C++20
*/

/* 한국어 주석
설명 생략. 
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	if (a == b)
		cout << a;

	else
		cout << max(a, b);

	return 0;
}

// Finish