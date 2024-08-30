/*
- Title : 17202 - Phone Number Compatibility
- Start Time : 24-08-30, 12:09
- End Time : 24-08-30, 12:23
- Try : 1
- Category : string, Convert:string-int
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string A;
	cin >> A;
	string B;
	cin >> B;

	string before;
	string after;

	for (int i = 0; i < 8; i++) {
		before.push_back(A[i]);
		before.push_back(B[i]);
	}
	
	after = before;

	while (after.size() != 2) {
		before = after;
		after.clear();

		for (int i = 0; i < before.size() - 1; i++) {
			int x = before[i] - '0' + before[i + 1] - '0';
			x %= 10;
			string str = to_string(x);
			after += str;
		}
	}

	cout << after;
}

//Finish