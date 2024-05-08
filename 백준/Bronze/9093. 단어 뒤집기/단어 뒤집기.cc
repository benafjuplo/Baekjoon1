/*
- Title : 9093 - Word Reversal
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);


	int T;
	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
 		string str;
		getline(cin, str);

		string sub;
		int idx = 0;
		int newidx = 0;
		while (newidx != string::npos) {
			
			newidx = str.find(' ', idx);
			sub = str.substr(idx, newidx - idx);
			reverse(sub.begin(), sub.end());
			idx = newidx + 1;
			cout << sub << " ";
		}

		cout << "\n";
	}
}


//Finish
//