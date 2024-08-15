/*
- Title : 4732 - Transposition(First Composed, Then Transposed)
- Start Time : 24-08-15, 21:51
- End Time : 24-08-15, 22:24
- Try : 1
- Category : sstream, string
*/

#include<iostream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string line;
	getline(cin, line);
	stringstream ss(line);

	vector<string> originalTones;
	
	string str;
	while (ss >> str) {
		originalTones.push_back(str);
	}

	vector <string> Tones1 = { "A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#" };
	vector <string> Tones2 = { "A", "Bb", "Cb", "B#", "Db", "D", "Eb", "Fb", "E#", "Gb", "G", "Ab" };

	while (line != "***") {
		int move;
		cin >> move;
		cin.ignore();

		vector<int> intTones(originalTones.size(), -1);

		for (int i = 0; i < intTones.size(); i++) {
			for (int j = 0; j < 12; j++) {
				if (originalTones[i] == Tones1[j])
					intTones[i] = j;
			}
			if(intTones[i]==-1)
				for (int j = 0; j < 12; j++) {
					if (originalTones[i] == Tones2[j])
						intTones[i] = j;
				}

			// move tone
			intTones[i] += move;
			if (intTones[i] >= 12)
				intTones[i] -= 12;
			if(intTones[i]<0)
				intTones[i] += 12;
		}

		for (int i = 0; i < intTones.size(); i++) {
			cout << Tones1[intTones[i]] << " ";
		}
		cout << "\n";

		getline(cin, line);
		ss.str(line);
		ss.clear();		

		originalTones.clear();

		while (ss >> str) {
			originalTones.push_back(str);
		}
	} 

}

//Finish
//Submit