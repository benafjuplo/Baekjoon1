#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	

	while (true) {
		int n;
		cin >> n;		

		if (n == 0)
			break;

		string str;
		str = to_string(n);

		bool isPalindrome = true;

		//even
		if (str.size() % 2 == 0) {
			for (int i = 0; i < str.size() / 2; i++) {
				if (str[str.size() - 1-i] != str[i]) {
					isPalindrome = false;
					break;
				}
			}
		}
		//odd
		else {
			for (int i = 0; i < str.size() / 2; i++) {
				if (str[str.size() - 1-i] != str[i]) {
					isPalindrome = false;
					break;
				}
			}
		}

		if (isPalindrome)
			cout << "yes" << "\n";
		else
			cout << "no" << "\n";
	}
}

//Finish