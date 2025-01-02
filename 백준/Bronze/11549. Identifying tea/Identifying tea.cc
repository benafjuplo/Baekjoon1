/*
- Title : 11549 - Identifying tea
- Start Time : 25-01-02, 23:??
- End Time : 25-01-02, 23:45
- Try : 1
- Category : simple, basic
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

	int T;
	cin >> T;

	int cnt = 0;

	for (int i = 0;i < 5;++i) {
		int x;
		cin >> x;
		if (x == T) cnt++;
	}

	cout << cnt;

	return 0;
}

//Finish