/*
- Title : 9461 - Padovan Sequence
- Start Time : 24-05-14, 21:52
- End Time : 24-05-14, 21:59
- Try : 1
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	vector<long long> padovan(100+1);

	padovan[1] = 1;
	padovan[2] = 1;
	padovan[3] = 1;
	padovan[4] = 2;
	padovan[5] = 2;
	padovan[6] = 3;
	padovan[7] = 4;
	padovan[8] = 5;
	padovan[9] = 7;
	padovan[10] = 9;

	for (int i = 11; i < 101; i++) {
		padovan[i] = padovan[i - 1] + padovan[i - 5];
	}

	for (int i = 0; i < T; i++) {
		int N;
		cin >> N;
		cout << padovan[N] << "\n";
	}
}

//Finish