#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		if ('A' <= s[i] && s[i] <= 'Z') {
			s[i] += 'a' - 'A';
		}

		else if ('a' <= s[i] && s[i] <= 'z') {
			s[i] -= 'a' - 'A';
		}
	}

	cout << s;
}

//Finish