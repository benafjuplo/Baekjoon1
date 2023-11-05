#include<iostream>
#include<string>
using namespace std;

int main() {

	string s;					// input s
	cin >> s;	
	
	int cnt[26] = { 0 };		// count alphabet
	
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if ('a' + j == s[i] || 'A' + j == s[i]) {
				cnt[j]++;
			}
		}
	}

	bool dupl = false;		// is duplicate?
	int most = 0;			// most count

	for (int i = 1; i < 26; i++) {			// search most
		if (cnt[most] < cnt[i]) {
			most = i;
		}
	}

	for (int i = 0; i < 26; i++) {			// check duplicate
		if (cnt[most] == cnt[i] && most != i) {
			dupl = true;
			break;
		}
	}
	
	char out;

	if (dupl == true) {
		out = '?';
		cout << out;
	}

	else {
		out = 'A' + most;
		cout << out;
	}
}