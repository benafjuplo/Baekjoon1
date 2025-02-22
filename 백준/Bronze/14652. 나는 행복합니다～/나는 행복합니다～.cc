/*
- Title : 14652 - I am happy~
- Start Time : 25-02-22, 23:??
- End Time : 25-02-22, 23:41
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetics, modular arithmetic
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

	int N, M, K;
	cin >> N >> M >> K;

	cout << K / M << " " << K % M;

	return 0;
}

//Finish