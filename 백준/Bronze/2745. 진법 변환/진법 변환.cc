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

	int base;
	cin >> base;

	int res = 0;

	for (int i = 0; i < str.size(); i++) {
		if ('A' <= str[str.size() - 1 - i] && str[str.size() - 1 - i] <= 'Z')
			res += (str[str.size() - 1 - i] - 'A' + 10) * pow(base, i);
		else
			res += (str[str.size() - 1 - i] - '0') * pow(base, i);
	}

	cout << res;
}

//Finish