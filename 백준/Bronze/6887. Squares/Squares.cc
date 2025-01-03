/*
- Title : 6887 - Squares
- Start Time : 25-01-03, 21:??
- End Time : 25-01-03, 21:48
- Try : 1
- Category : mathematics, square root
- Language : C++20
*/

/* 한국어 주석
<cmath>와 자료형 변환을 사용하면 간단하게 구현 가능하다.
*/

#include<iostream>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int x;
	cin >> x;
	cout << "The largest square has side length " << (int)sqrt(x) << ".";

	return 0;
}

//Finish