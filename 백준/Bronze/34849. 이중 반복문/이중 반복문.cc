/*
- Title : 34849 - Nested loop
- Start Time : 26-02-25, 11:39
- End Time : 26-02-25, 11:41
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

	int n;
	cin >> n;

	if (n<=10000)
		cout << "Accepted" << "\n";
	else
		cout << "Time limit exceeded" << "\n";

	return 0;
}
