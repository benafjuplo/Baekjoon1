#include<iostream>
#include<vector>
using namespace std;



int main() {
	
	int dwarfs[9];
	for (int i = 0; i < 9; i++) {
		cin >> dwarfs[i];
		try {
			if (dwarfs[i] <= 0)  // natural number check
				throw "The number is not a natural number.";
		}
		catch (const char* s) {
			cout << s;
			exit(1);
		}
	}	
	
	//Bubble Sort
	for (int i = 8; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (dwarfs[j] > dwarfs[j + 1]) {
				int temp = dwarfs[j + 1];
				dwarfs[j + 1] = dwarfs[j];
				dwarfs[j] = temp;
			}
		}
	}
	
	int total = 0;
	for (int i = 0; i < 9; i++) {
		total += dwarfs[i];
	}

	
	int liar[2];

	while(true) {		
		int sum = 0;
		for (int i = 0; i < 8; i++) {
			for (int j = i; j < 9; j++) {
				sum = dwarfs[i] + dwarfs[j];
				if (100 == (total - sum)) {
					liar[0] = i;
					liar[1] = j;
				}
				if (100 == (total - sum))
					break;
			}
			if (100 == (total - sum))
				break;
		}
		if (100 == (total - sum))
			break;
	}
	
	for (int i = 0, j = 0; i < 9; i++) {
		if (i == liar[0] || i == liar[1]) {
			continue;
		}
		else {
			cout<< dwarfs[i];
			if (j != 6) {
				cout << "\n";
			}
			j++;
		}
	}
}