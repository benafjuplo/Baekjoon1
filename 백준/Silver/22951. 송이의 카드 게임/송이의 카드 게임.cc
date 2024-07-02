/*
- Title : 22951 - Songyi's Card Game
- Start Time : 24-07-01, 09:00, 14:47, 15:46
- End Time :   24-07-01, 10:07, 15:05, 15:54
- Try : 1
- Category : Circular, Erase
*/

#include<iostream>
#include<vector>
#include<string>
#include<iterator>
using namespace std;

int main() {

	//Input Start
	int N, K;
	cin >> N >> K;

	vector<vector<int>> v(N, vector<int>(K, 0));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++)
			cin >> v[i][j];
	}
	//Input End

	/* //Input when diffrent personal card numbers
	{
		string dummy;
		getline(cin, dummy);
	}

	for (int i = 0; i < N; i++) {
		string str;
		getline(cin, str);

		int newpos = str.find(" ");
		int pos = 0;

		while (newpos != string::npos) {

			v[i].push_back(stoi(str.substr(pos, newpos - pos)));
			line.push_back(stoi(str.substr(pos, newpos - pos)));

			pos = newpos + 1;
			newpos = str.find(" ", pos);
		}
		v[i].push_back(stoi(str.substr(pos)));
		line.push_back(stoi(str.substr(pos)));
	}
	*/

	//Calculate Start
	int rest = K * N - 1;
	int x;
	if (rest > 0) {
		x = v[0][0] % rest;
		v[0][0] = 0;
	}
	int i = 0;
	int j = 0;
	
	
	while (true) {
		if (rest <= 1)
			break;
		for (i = 0 ; i < N; i++) {
			for (j = 0; j < K; j++) {
				//Not Deleted
				if (v[i][j] != 0) {
					if (x == 1) {
						rest--;				//Reduce card
						x = v[i][j];	//New x
						v[i][j] = 0;		//Delete Card
					}
					else
						x--;
				}
				if (rest <= 1)
					break;
			}
			if (rest <= 1)
				break;
		}
		if (rest <= 1)
			break;
	}
	//Calculate End

	//Oupput Start
	for (i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			if (v[i][j] != 0) {
				cout << i + 1 << " " << v[i][j] << "\n";
				return 0;
			}
		}
	}
	//Oupput End
}


//Finish