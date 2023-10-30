#include<iostream>
#include<vector>
using namespace std;



int main() {
	int T;
	cin >> T;
	vector <int> n;	// Input n, natural number
	for (int i = 0; i < T; i++) {
		int temp;
		cin >> temp;
		n.push_back(temp);
	}	
	
	try {

		if(T<=0)
			throw "The number is not a natural number.";

		for (int i = 0; i < T; i++) {
			if (n[i] <= 0)  // natural number check
				throw "The number is not a natural number.";
		}
	}
	catch (const char* s) {
		cout << s;
		exit(1);
	}
	vector<int> binary; // inverse 이진수

	for (int i = 0; i < T; i++) {
		binary.clear();
		for (int j = n[i]; j >= 1; ) {
			if (j == 1)
				binary.push_back(j);
			else
				binary.push_back(j%2);
			j /= 2;
		}
		
		bool firstspace = true;
		
		for (int j = 0; j < binary.size(); j++) {
			if (binary[j] == 1) {
				if (!firstspace) {
					cout << " ";
				}
				else {
					firstspace = false;
				}
				cout << j;
			}
		}
		bool lastline = false;
		if (i == T - 1)
			lastline = true;
		if (!lastline)
			cout << "\n";
	}
	
}