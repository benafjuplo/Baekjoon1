/* 15873 - Spaceless A+B */

#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	if (str.size() == 2)
		cout << str[0] - '0' + str[1] - '0';
	else if (str.size() == 3){
		if (str[1] == '0')
			cout << stoi(str.substr(0, 2)) + str[2] - '0';
		else
			cout << stoi(str.substr(1, 2)) + str[0] - '0';
	}
	else {
		cout << stoi(str.substr(0, 2)) + stoi(str.substr(2, 2));
	}
}

//Finish