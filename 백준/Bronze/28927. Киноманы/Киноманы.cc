/*
- Title : 28927 - Movie buffs
- Start Time : 26-02-20, 03:02
- End Time : 26-02-20, 03:05
- Try : 1
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


	int t1, e1, f1, t2, e2, f2;
	cin >> t1 >> e1 >> f1 >> t2 >> e2 >> f2;

	int max = t1 * 3 + e1 * 20 + f1 * 120;
	int mel = t2 * 3 + e2 * 20 + f2 * 120;
	
	if (max > mel) {
		cout << "Max\n";
	}
	else if (max < mel) {
		cout << "Mel\n";
	}
	else {
		cout << "Draw\n";
	}

	return 0;
}
