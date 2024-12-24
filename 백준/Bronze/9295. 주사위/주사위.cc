/*
- Title : 9295 - Dice
- Start Time : 24-12-24, 23:16
- End Time : 24-12-24, 23:18
- Try : 1
- Category : simple, basic
- Language : C++20
*/

/* 한국어 주석
자세한 설명은 생략한다.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 1; i <= T; ++i) {
		int a, b;
		cin >> a >> b;
		cout << "Case " << i << ": " << a + b << "\n";
	}

	return 0;
}

//Finish