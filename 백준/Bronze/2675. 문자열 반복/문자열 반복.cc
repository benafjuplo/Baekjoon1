#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int t;
		cin >> t;
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			for (int k = 0; k < t; k++) {
				cout << str[j];
			}
		}
		cout << "\n";
	}
}