#include<iostream>
#include<string>
using namespace std;

int main() {
	string x;
	getline(cin,x);
	int size = x.size();
	
	for (int i = 0; i < size; i++) {
		if ('a' <= x[i] && x[i] <= 'z') {
			if (x[i] + 13 <= 'z')
				x[i] += 13;
			else
				x[i] = 'a' + x[i] + 13 - 'z'  - 1;
		}
		else if ('A' <= x[i] && x[i] <= 'Z') {
			if (x[i] + 13 <= 'Z')
				x[i] += 13;
			else
				x[i] = 'A' + x[i] + 13 - 'Z' - 1;
		}
	}
	cout << x;
}
