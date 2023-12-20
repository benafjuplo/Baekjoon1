#include<iostream>

using namespace std;

int main() {
	int num[9];
	
	int index = 0;
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	int max = num[0];
	for (int i = 1; i < 9; i++) {
		if (num[i] > max) {
			max = num[i];
			index = i;
		}
	}
	cout << max << "\n" << index + 1;
}