/*
- Title : 6616 - Text Encryption
- Start Time : 24-07-16, 12:06
- End Time : 24-07-16, 12:30
- Try : 1
- Category : string, toupper, getline
*/

#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	while (true) {
		int N;
		cin >> N;
		if (N == 0)
			break;

		string dummy;
		getline(cin, dummy);

		string str;
		getline(cin, str);
		int pos = str.find(' ');
		while (pos != string::npos) {
			str.erase(str.begin() + pos);
			pos = str.find(' ');
		}

		string enc(str.size(), ' ');

		for (int i = 0; i < str.size();) {
			for (int j = 0; j < enc.size();) {
				if (enc[j] == ' ') {
					enc[j] = toupper(str[i]);
					j += N;
					i++;
				}
				else
					j++;
			}
		}

		cout << enc << "\n";
	}
}

//Finish
