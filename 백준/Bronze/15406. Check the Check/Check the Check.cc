/*
- Title : 15406 - Check the Check
- Start Time : 24-08-08, 01:55
- End Time : 24-08-08, 02:11
- Try : 1
- Category : string, getline, fast I/O
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string d;
	int p;
	int c;

	int realTotal = 0;
	int total = 0;

	while (true) {
		getline(cin, d);
		if (d == "TOTAL") {
			int T;
			cin >> T;
			total = T;
			break;
		}
		cin >> p;
		cin >> c;
		
		string dummy;
		getline(cin, dummy);

		realTotal += p * c;
	}

	if (total <= realTotal)
		cout << "PAY";
	else
		cout << "PROTEST";
}

//Finish