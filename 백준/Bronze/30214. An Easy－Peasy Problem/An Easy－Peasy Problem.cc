/*
- Title : 30214 - An Easy-Peasy Problem
- Start Time : 25-03-19, 10:42
- End Time : 25-03-19, 10:44
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
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

	int s1, s2;
	cin >> s1 >> s2;

	cout << ((s1*2 >= s2) ? "E" : "H");

	return 0;
}

//Finish