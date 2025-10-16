/*
- Title : 17450 - Buying snacks
- Start Time : 25-10-17, 00:05
- End Time : 25-10-17, 03:12
- Try : 2(1 : int -> double)
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);
	
	int sPrice, sWeight, nPrice, nWeight, uPrice, uWeight;
	cin >> sPrice >> sWeight >> nPrice >> nWeight >> uPrice >> uWeight;

	sPrice *= 10;
	if (sPrice >= 5000) sPrice -= 500;

	nPrice *= 10;
	if (nPrice >= 5000) nPrice -= 500;

	uPrice *= 10;
	if (uPrice >= 5000) uPrice -= 500;

	sWeight *= 10;
	nWeight *= 10;
	uWeight *= 10;

	double sUnit = (double)sWeight / sPrice;
	double nUnit = (double)nWeight / nPrice;
	double uUnit = (double)uWeight / uPrice;

	if(sUnit > nUnit && sUnit > uUnit) cout << "S\n";
	else if(nUnit > sUnit && nUnit > uUnit) cout << "N\n";
	else if(uUnit > sUnit && uUnit > nUnit) cout << "U\n";
	
	return 0;
}

// Finish