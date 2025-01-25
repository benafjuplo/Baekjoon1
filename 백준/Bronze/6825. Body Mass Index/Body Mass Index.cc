/*
- Title : 6825 - Body Mass Index
- Start Time : 25-01-26, 00:07
- End Time : 25-01-26, 00:12
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

	double weight, height;
	cin >> weight >> height;

	double bmi = weight / (height * height);

	if (bmi > 25) cout << "Overweight";
	else if (bmi < 18.5) cout << "Underweight";
	else cout << "Normal weight";

	return 0;
}

//Finish