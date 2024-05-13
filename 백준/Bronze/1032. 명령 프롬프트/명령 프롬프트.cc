/*
- Title : 1032 - Command Prompt
- Start Time : 24-05-10, 06:22
- End Time : 24-05-10, 06:31
- Try : 1
*/


#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	int N;
	cin >> N;

	vector<string> v;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		v.push_back(str);
	}

	vector<bool> isDifferent(v[0].size(), false);

	for (int i = 0; i < v[0].size(); i++) {
		char ch;
		ch = v[0][i];
		for (int j = 1; j < N; j++) {
			if (ch != v[j][i]) {
				isDifferent[i] = true;
				break;
			}
		}
	}

	for (int i = 0; i < v[0].size(); i++) {
		if (isDifferent[i] == true)
			cout << "?";
		else
			cout << v[0][i];
	}
}

//Finish