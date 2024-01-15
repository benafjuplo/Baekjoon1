#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		stack<char> s;
		bool VPS = true;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(')
				s.push(str[i]);
			else {
				if (s.empty()) {
					VPS = false;
					break;
				}
				s.pop();
			}
		}

		if (!VPS) {
			cout << "NO\n";
		}
		else {
			if (s.empty())
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}
}