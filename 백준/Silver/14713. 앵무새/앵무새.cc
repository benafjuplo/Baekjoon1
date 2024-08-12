/*
- Title : 14713 - Parrot
- Start Time : 24-08-12, 04:24
- End Time : 24-08-12, 05:37
- Try : 4(3 : Mistake in Problem Interpretation)
- Category : string
*/

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int numberOfParrot;
	cin >> numberOfParrot;

	vector<vector<string>> parrots(numberOfParrot);
	vector<string> L;

	// another solution
	//cin.ignore

	string dummy;
	getline(cin, dummy);


	// another solution
	// sstream

	for (int i = 0; i <= numberOfParrot; i++) {
		string str;
		getline(cin, str);

		int oldPos = 0;
		int pos = str.find(" ");

		while (pos != string::npos) {
			if (i < numberOfParrot)
				parrots[i].push_back(str.substr(oldPos, pos - oldPos));
			else
				L.push_back(str.substr(oldPos, pos - oldPos));
			oldPos = pos + 1;
			pos = str.find(" ", oldPos);
		}
		if (i < numberOfParrot)
			parrots[i].push_back(str.substr(oldPos));
		else
			L.push_back(str.substr(oldPos));
	}

	vector<int> pos(numberOfParrot, 0);

	//Debug
	/*for (int i = 0; i < numberOfParrot; i++) {
		for (int j = 0; j < parrots[i].size(); j++)
			cout << parrots[i][j] << " ";
		cout << "\n";
	}

	for (int i = 0; i < L.size(); i++) {
			cout << L[i] << " ";


	}*/

	bool isPossible = true;

	for (int i = 0; i < L.size(); i++) {
		bool isFind = false;
		for (int j = 0; j < numberOfParrot; j++) {
			if (pos[j] < parrots[j].size())
				if (L[i] == parrots[j][pos[j]]) {
					pos[j]++;
					isFind = true;
					break;
				}
		}

		if (!isFind) {
			isPossible = false;
			break;
		}
	}

	// Check if all parrots have finished their sentences
	for (int j = 0; j < numberOfParrot; j++) {
		if (pos[j] != parrots[j].size()) {
			isPossible = false;
			break;
		}
	}

	if (isPossible)
		cout << "Possible" << "\n";
	else
		cout << "Impossible" << "\n";
}

//Finish