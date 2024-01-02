#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int time = 0;
	for (int i = 0; i < str.size(); i++) {
		if ('A' <= str[i] && str[i] <= 'C')
			time += 3;
		else if ('D' <= str[i] && str[i] <= 'F')
			time += 4;
		else if ('G' <= str[i] && str[i] <= 'I')
			time += 5;
		else if ('J' <= str[i] && str[i] <= 'L')
			time += 6;
		else if ('M' <= str[i] && str[i] <= 'O')
			time += 7;
		else if ('P' <= str[i] && str[i] <= 'S')
			time += 8;
		else if ('T' <= str[i] && str[i] <= 'V')
			time += 9;
		else if ('W' <= str[i] && str[i] <= 'Z')
			time += 10;
	}
	cout << time;
}