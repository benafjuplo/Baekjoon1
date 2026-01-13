/*
- Title : 34424 - Flatter Land
- Start Time : 26-01-13, 10:05
- End Time : 26-01-13, 10:07
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, x;
	cin >> n >> x;
	cout << (n - 1) * x;

	return 0;
}
