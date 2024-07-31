/*
- Title : 31450 - Everyone is a winner
- Start Time : 24-07-31, 17:27
- End Time  24-07-31, 17:31
- Try : 2(1 : Typo)
- Category : I/O, basic, simple, mathematics
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int M, K;
	cin >> M >> K;

	if (M % K == 0)
		cout << "Yes";
	else
		cout << "No";
}

//Finish