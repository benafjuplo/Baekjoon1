#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	vector <string> str;
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string temp;
		cin >> temp;
		str.push_back(temp);
	}
	
	for (int i = 0; i < T; i++) {
		int score = 0;
		int c = 0;
		for (int j = 0; j< str[i].size(); j++) {
			if (str[i][j] == 'O') {
				c++;
			}
			else {
				c = 0;
			}
			score += c;
		}
		cout << score << "\n";
	}
	
}