/*
- Title : 25881 - Electric Bill
- Start Time : 25-01-08, 22:??
- End Time : 25-01-08, 22:44
- Try : 1
- Category : mathematics, simple, basic, elementary arithmetic
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

	int costA, costB;
	cin >> costA >> costB;

	int n;
	cin >> n;

	while (n--) {
		int usage;
		cin >> usage;
		cout << usage << " ";
		if (usage <= 1000) cout << usage * costA << "\n";
		else cout << 1000 * costA + (usage - 1000) * costB << "\n";
	}

	return 0;
}

//Finish