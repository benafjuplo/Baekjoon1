/*
- Title : 18408 - Three Integers
- Start Time : 25-05-07, 07:24
- End Time : 25-05-07, 07:33
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
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int cnt[3] = { 0 };

	const int INPUT_SIZE = 3;

	for (int i = 0; i < INPUT_SIZE;++i) {
		int x;
		cin >> x;
		if (x == 1)
			cnt[1]++;
		else
			cnt[2]++;
	}

	if (cnt[1] > cnt[2])
		cout << 1;

	else
		cout << 2;

	return 0;
}

// Finish