/*
- Title : 16204 - Drawing a Card
- Start Time : 25-02-11, 01:10
- End Time : 25-02-11, 01:12
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
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

	int N, M, K;
	cin >> N >> M >> K;

	cout << min(M, K) + min(N - M, N - K);

	return 0;
}

//Finish