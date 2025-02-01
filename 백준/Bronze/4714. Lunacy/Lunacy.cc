/*
- Title : 4714 - Lunacy
- Start Time : 25-02-01, 15:08
- End Time : 25-02-01, 15:15
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic, setprecision, fixed
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	double originalWeight;
	cin >> originalWeight;

	while (originalWeight > 0) {
		cout << fixed << setprecision(2);
		cout << "Objects weighing " << originalWeight << " on Earth will weigh " << originalWeight * 0.167 << " on the moon.\n";
		cin >> originalWeight;
	}

	return 0;
}

//Finish