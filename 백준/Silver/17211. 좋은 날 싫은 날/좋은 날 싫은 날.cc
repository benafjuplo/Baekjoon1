/*
- Title : 17211 - Good Day, Bad Day
- Start Time : 24-08-30, 21:38, 24-08-31, ??:??
- End Time :   24-08-30, 22:11, 24-08-31, 00:46
- Try : 1
- Category : probability, round-off, dynamic programming
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	bool isBadStart;
	cin >> isBadStart;

	double probability[4];

	for (int i = 0; i < 4; i++) {
		cin >> probability[i];
	}

	double goodProbability;
	double badProbability;

	if (isBadStart) {
		goodProbability = 0;
		badProbability = 1;
	}
	else {
		goodProbability = 1;
		badProbability = 0;
	}

	for (int i = 0; i < N; i++) {
		double newGoodProbability = goodProbability * probability[0] + badProbability * probability[2];
		double newBadProbability = goodProbability * probability[1] + badProbability * probability[3];
		goodProbability = newGoodProbability;
		badProbability = newBadProbability;
	}

	goodProbability *= 1000;
	badProbability *= 1000;

	cout << fixed << setprecision(0) << goodProbability << "\n";
	cout << fixed << setprecision(0) << badProbability << "\n";
}

//Finish