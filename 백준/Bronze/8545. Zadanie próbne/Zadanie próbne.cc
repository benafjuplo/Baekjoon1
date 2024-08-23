/*
- Title : 8545 - Trial task
- Start Time : 24-08-23, 12:33
- End Time : 24-08-23, 12:39
- Try : 1
- Category : string, reverse, simple, basic
*/

#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	reverse(str.begin(), str.end());

	cout << str;
}


//Finish