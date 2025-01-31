/*
- Title : 6763 - Speed fines are not fine!
- Start Time : 25-01-31, 21:56
- End Time : 25-01-31, 22:05
- Try : 1
- Category : simple, basic
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

	int limit, speed;
	cin >> limit >> speed;

	int diff = speed - limit;

	if (1 <= diff && diff <= 20) cout << "You are speeding and your fine is $100.";
	else if (21 <= diff && diff <= 30) cout << "You are speeding and your fine is $270.";
	else if (31 <= diff) cout << "You are speeding and your fine is $500.";
	else cout << "Congratulations, you are within the speed limit!";	

	return 0;
}

//Finish