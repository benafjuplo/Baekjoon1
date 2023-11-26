#include<iostream>
#include<string>

using namespace std;


int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;
	int j = 0;
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		j++;
		if (j == 10) {
			j = 0;
			cout << "\n";
		}
	}
}