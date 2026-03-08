/*
- Title : 15279 - Heart Rate
- Start Time : 26-03-08, 18:54
- End Time : 26-03-08, 18:57
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
b번 박동을 관측한 p초 구간에는 실제로 (b-1) ~ (b+1)개의 박동 간격이 들어갈 수 있다.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	double aBPM = 60.0;

	int N;
	cin >> N;

	while (N--) {
		double b;
		double p;
		cin >> b >> p;

		cout << fixed << setprecision(6);
		cout << 60 * (b - 1) / p << " " << 60 * b / p << " " << 60 * (b + 1) / p << "\n";	
	}

	return 0;
}
