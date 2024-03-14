#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);


	string str;
	cin >> str;

	int n = 0;

	for (int i = 0; i < str.size(); i++) {
		char x = str[i];
		if ('A' <= x && x <= 'F') {
			n += (x - 55) * pow(16, str.size() - 1 - i);
		}

		else {
			n += (x - '0') * pow(16, str.size() - 1 - i);
		}
	}

	cout << n;
}

//Finish