/*
- Title : 31561 - Clock Tower
- Start Time : 24-06-26,06:56
- End Time : 24-06-26,07:05
- Try : 1
- Category : Time, Fixed, Precision
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	double M;
	cin >> M;
	if (M <= 30)
		M /= 2;
	else
		M = (M - 30) * 3 / 2 + 15;

	cout << fixed << setprecision(1);
	cout << M;
}

//Finish