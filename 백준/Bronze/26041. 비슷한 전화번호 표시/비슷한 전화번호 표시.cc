/*
- Title : 26041 - Display Similar Phone Numbers
- Start Time : 24-07-10, 21:47
- End Time : 24-07-10, 22:13
- Try : 1
- Category : getline, find-string, string
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string line;
	getline(cin, line);

	string str;
	cin >> str;

	int pos = line.find(str, 0);;
	int cnt = 0;

	while (pos != string::npos) {
		
		bool isPrefix = false;
		if (pos - 1 < 0 || (pos - 1 >= 0 && line[pos - 1] == ' ')) {	// if first	or (not first and front is blank)
			isPrefix = true;
		}
		bool isSame = true;
		if (pos + str.size() < line.size() && line[pos + str.size()] != ' ') {		// if back is blank
			isSame = false;
		}
		if (isPrefix && !isSame)
			cnt++;

		//debug
		//cout << " pos : " << pos << " isPrefix : " << isPrefix << " isSame : "  << isSame << " cnt : " << cnt << " " << "\n";
		//debug

		pos = line.find(str, line.find(' ', pos));
	}

	cout << cnt << "\n";	
}

//Finish