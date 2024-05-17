/*
- Title : 1541 - Lost Parentheses
- Start Time : 24-05-14, 22:07
- End Time : 24-05-14, 22:46
- Try : 1
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	int start = 0;
	int end = 0;

	int res = 0;

	bool isMinus = false;

	while (end != string::npos) {
		int plus = str.find('+', start);
		int minus = str.find('-', start);

		if (plus == string::npos && minus == string::npos) {
			end = string::npos;
			if (isMinus)
				res -= stoi(str.substr(start));
			else
				res += stoi(str.substr(start));
			break;
		}

		if (plus == string::npos)
			plus = str.size() + 1;
		if (minus == string::npos)
			minus = str.size() + 1;

		if (plus < minus) {
			end = plus;
			if (!isMinus) {
				res += stoi(str.substr(start, end));
			}
			else {
				res -= stoi(str.substr(start, end));
			}
			start = end + 1;
		}

		else {
			end = minus;
			if (!isMinus) {
				res += stoi(str.substr(start, end));
			}
			else {
				res -= stoi(str.substr(start, end));
			}
			start = end + 1;
			isMinus = true;
		}

	}

	cout << res;
}

//Finish