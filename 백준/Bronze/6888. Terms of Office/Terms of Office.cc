/*
- Title : 6888 - Terms of Office
- Start Time : 25-02-16, 22:42
- End Time : 25-02-16, 22:49
- Try : 1
- Category : mathematics, LCM
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

	int X, Y;
	cin >> X >> Y;
	for (int i = X; i <= Y; i += 60) cout << "All positions change in year " << i << "\n";

	return 0;
}
