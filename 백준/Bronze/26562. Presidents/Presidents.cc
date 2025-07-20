/*
- Title : 26562 - Presidents
- Start Time : 25-07-14, 11:09
- End Time : 25-07-14, 11:19
- Try : 1
- Category : stringstream, string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	cin.ignore();

	while (n--) {
		int result = 0;

		string line;
		getline(cin, line);

		stringstream ss(line);

		while (ss) {
			string name;
			ss >> name;
			if (name == "Franklin")
				result += 100;
			else if (name == "Grant")
				result += 50;
			else if (name == "Jackson")
				result += 20;
			else if (name == "Hamilton")
				result += 10;
			else if (name == "Lincoln")
				result += 5;
			else if (name == "Washington")
				result++;
		}
		cout << "$" << result << "\n";
	}	

	return 0;
}

// Finish