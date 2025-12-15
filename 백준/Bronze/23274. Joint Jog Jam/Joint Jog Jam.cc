/*
- Title : 23274 - Joint Jog Jam
- Start Time : 25-12-15, 10:31
- End Time : 25-12-15, 10:36
- Try : 1
- Category : geometry, mathematics
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	pair<int, int> a1, b1, a2, b2;
	cin >> a1.first >> a1.second >> b1.first >> b1.second;
	cin >> a2.first >> a2.second >> b2.first >> b2.second;

	double distance1 = sqrt(pow(a1.first - b1.first, 2) + pow(a1.second - b1.second, 2));
	double distance2 = sqrt(pow(a2.first - b2.first, 2) + pow(a2.second - b2.second, 2));

	cout << fixed << setprecision(10) << max(distance1, distance2) << "\n";

	return 0;
}

// Finish