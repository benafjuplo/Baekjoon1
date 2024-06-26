/*
- Title : 30329 - Kick
- Start Time : 24-06-26, 07:16
- End Time : 24-06-26, 07:21
- Try : 1
- Category : String, Sliding Window
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	long long cnt = 0;

	for (int i = 0; i < s.size();) {
		if (s.substr(i, 4) == "kick") {
			cnt++;
			i += 3;
		}
		else
			i++;
	}

	cout << cnt;
}

//Finish