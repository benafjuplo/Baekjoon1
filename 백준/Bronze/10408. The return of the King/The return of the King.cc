/*
- Title : 10408 - The return of the King
- Start Time : 24-06-06, 22:53
- End Time :24-06-06, 23:08
- Try : 1
*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	double average = 0;
	int cnt = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '1') {
			if (i + 1 < str.size() && str[i + 1] == '0') {
				average += 10;
				i++;
			}
			else
				average += 1;
		}
		else {
			average += str[i] - '0';
		}
		cnt++;
	}
	
	if (cnt != 0)
		average /= cnt;

	cout << fixed << setprecision(2);

	cout << average << "\n";

}

//Finish