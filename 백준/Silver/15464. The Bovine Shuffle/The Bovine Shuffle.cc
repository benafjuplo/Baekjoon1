/*
- Title : 15464 - The Bovine Shuffle
- Start Time : 24-07-06, 21:45
- End Time : 24-07-06, 21:58
- Try : 1
- Category : Reverse
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> move(N);

	for (int i = 0; i < N; i++) {
		cin >> move[i];
		move[i]--;
	}

	vector<int> reverseMove(N);

	for (int i = 0; i < N; i++) {
		reverseMove[move[i]] = i;
	}

	vector<string> cow(N);
	

	for (int i = 0; i < N; i++) {
		cin >> cow[i];
	}

	vector<string> newCow(N);

	for (int i = 0; i < 3; i++) {
		for (int i = 0; i < N; i++) {
			newCow[reverseMove[i]] = cow[i];
		}
		cow = newCow;
	}

	for (int i = 0; i < N; i++) {
		cout << cow[i] << "\n";
	}
}

//Finish