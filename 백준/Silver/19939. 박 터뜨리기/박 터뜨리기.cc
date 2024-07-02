/*
- Title : 19939 - Breaking the Pot
- Start Time : 24-07-01, 20:56
- End Time : 24-07-01, 21:16
- Try : 1
- Category : Mathmatics
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int nTeams, nBalls;
	cin >> nBalls >> nTeams; // 2 <= N <= 100000, 2 <= K <= 1000

	if (nBalls < (nTeams + nTeams * nTeams) / 2) {
		cout << -1;
		return 0;
	}

	int startBalls = nBalls - (nTeams + nTeams * nTeams) / 2;
	int diff = nTeams - 1;

	if (startBalls % nTeams != 0)
		diff++;

	cout << diff << "\n";

}
//Finish