/*
- Title : 33515 - Brought three laptops
- Start Time : 25-02-26, 22:38
- End Time : 25-02-26, 22:40
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int t1, t2;
	cin >> t1 >> t2;

	cout << min(t1, t2);
		
	return 0;
}

// Finish
