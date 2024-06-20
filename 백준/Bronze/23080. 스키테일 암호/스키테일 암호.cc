/*
- Title : 23080 - Scytale Cipher
- Start Time : 24-06-19, 06:37
- End Time : 24-06-19, 06:41
- Try : 1
- Category : String
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int K;
	cin >> K;
	
	string str;
	cin >> str;

	string res = "";

	for (int i = 0; i < str.size(); i+=K) {
		res.push_back(str[i]);
	}

	cout << res << "\n";
}