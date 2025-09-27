/*
- Title : 16485 - Let's Construct! - 2
- Start Time : 25-09-28, 01:27
- End Time : 25-09-28, 01:30
- Try : 1
- Category : mathematics, geometry, angle bisector theorem
- Language : C++20
*/

/* 한국어 주석
각의 이등분성 정리(angle bisector theorem)를 이용하여 풀 수 있는 문제이다.
https://en.wikipedia.org/wiki/Angle_bisector_theorem
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int c, b;
	cin >> c >> b;

	cout << fixed << setprecision(10) << (double)c / b << '\n';

	return 0;
}

// Finish