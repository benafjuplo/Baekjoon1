/*
- Title : 17783 - Breaking Branches
- Start Time : 25-07-24, 10:04
- End Time : 25-07-24, 10:06
- Try : 1
- Category : mathematics, game theory, parity
- Language : C++20
*/

/* 한국어 주석
짝수인 경우 Alice가 이기고 홀수인 경우 Bob이 이긴다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	if (n % 2 == 0)
		cout << "Alice" << "\n" << 1;
	else
		cout << "Bob";

	return 0;
}

// Finish