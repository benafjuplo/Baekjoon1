#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	getline(cin, str);
	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			cnt++;
		}
	}
	if (str[0] == ' ') {
		cnt--;
	}
	if (str[str.size() - 1] == ' ') {
		cnt--;
	}

	cout << cnt + 1;
}