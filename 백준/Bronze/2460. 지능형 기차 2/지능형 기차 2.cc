#include<iostream>
using namespace std;

int main() {
	int in;		
	int out;	
	
	int people = 0;
	int max = 0;

	for (int i = 0; i < 10; i++) {
		cin >> out >> in;
		people -= out;
		people += in;
		if (people > max)
			max = people;
	}
	cout << max;
}