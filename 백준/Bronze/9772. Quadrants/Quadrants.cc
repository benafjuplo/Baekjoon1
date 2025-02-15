/*
- Title : 9772 - Quadrants
- Start Time : 25-02-16, 01:06
- End Time :
- Try : 1
- Category : simple, basic, mathematics, geometry
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

	double x, y;
	cin >> x >> y;

	while (x != 0 || y != 0) {
		if (x > 0 && y > 0) cout << "Q1\n";
		else if (x < 0 && y > 0) cout << "Q2\n";
		else if (x < 0 && y < 0) cout << "Q3\n";
		else if (x > 0 && y < 0) cout << "Q4\n";
		else cout << "AXIS\n";
		cin >> x >> y;
	}

	cout << "AXIS";
	return 0;
}
//Finish