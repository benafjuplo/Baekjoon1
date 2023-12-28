#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	string str;

	string origin;
	if (N < 10) {
		origin = to_string(N);
		origin.insert(0, "0");
	}
	else {
		origin = to_string(N);
	}

	int cnt = 0;
	while (true) {
		cnt++;
		str.clear();
		if (N < 10) {
			str = to_string(N);
			str.insert(0, "0");

		}
		else {
			str = to_string(N);
		}
		//
		int make = str[0] - '0' + str[1] - '0';
		make %= 10;
		str[0] = str[1];
		str[1] = make + '0';
		N = stoi(str);
		if (str == origin)
			break;
		
	}
	
	cout << cnt;
	
	
}