/*
- Title : 4564 - Digit Solitaire
- Start Time : 25-08-22, 02:31
- End Time : 25-08-22, 02:37
- Try : 1
- Category : mathematics, string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int x;
	cin >> x;
	cout << x << " ";

	while(x!= 0) {
		while (x >= 10) {
			string str = to_string(x);
			int mult = 1;

			for (int i = 0; i < str.size(); i++) {
				mult *= (str[i] - '0');
			}
			x = mult;
			cout << x << " ";
		}
		cout << "\n";
		cin >> x;
		if (x == 0) break;
		cout << x << " ";
	}

	return 0;
}

// Finish