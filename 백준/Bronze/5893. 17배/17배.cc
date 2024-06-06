/*
- Title : 5893 - Times17
- Start Time : 24-06-06, 15:54, 16:30
- End Time :   24-06-06, 16:00, 17:11
- Try : 1
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	string ori;
	cin >> ori;

	string res = "0000" + ori;

	//"10001"	// Binary, 17

	int up = 0;

	string plus = ori + "0000";

	for (int i = 0; i < res.size(); i++) {
		res[res.size() - 1 - i] = res[res.size() - 1 - i] - '0' + plus[plus.size() - 1 - i] - '0' + up + '0';
		up = 0;
		if ((res[res.size() - 1 - i]-'0') >= 2) {
			res[res.size() - 1 - i] -= 2;
			up = 1;
		}
	}

	if (up == 1)
		res = "1" + res;	

	cout << res;
}

//Finish