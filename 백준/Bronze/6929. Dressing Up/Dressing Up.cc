/*
- Title : 6929 - Dressing Up
- Start Time : 24-06-19, 06:51
- End Time : 24-06-19, 07:01
- Try : 1
- Category : Printing Pattern, Loop
*/

#include<iostream>

using namespace std; 

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int H;
	cin >> H;
	
	for (int i = 1; i <= H/2+1; i++) {
		for (int j = 1; j <= 2*H; j++) {
			if (j <= 2 * i - 1 || j > 2 * H - (2 * i - 1))
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = H / 2; i >= 1;i--) {
		for (int j = 1; j <= 2*H; j++) {
			if (j <= 2 * i - 1 || j > 2 * H - (2 * i - 1))
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}

//Finish