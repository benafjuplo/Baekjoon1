/*
- Title : 4655 - Hangover
- Start Time : 26-01-09, 02:57
- End Time : 26-01-09, 03:12
- Try : 2(1 : Typo)
- Category : mathematics, implementation, lower_bound
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);
	
	double target;
	cin >> target;

	double limitTarget = 5.20;

	vector<double> vectorLength;

	double cardLength = 0.00;

	for (int i = 2; ; ++i) {
		cardLength += 1.0 / i;
		vectorLength.push_back(cardLength);

		if (cardLength > limitTarget)
			break;
	}

	while (target != 0.00) {
		cout << lower_bound(vectorLength.begin(), vectorLength.end(), target) - vectorLength.begin() + 1 << " card(s)\n";
		cin >> target;
	}	

	return 0;
}