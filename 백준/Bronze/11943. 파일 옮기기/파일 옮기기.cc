/* 11943 - Moving Files */

#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	int A, B;
	int C, D;
	cin >> A >> B >> C >> D;

	if (A + D < B + C)
		cout << A + D;
	else
		cout << B + C;
}

//Finish