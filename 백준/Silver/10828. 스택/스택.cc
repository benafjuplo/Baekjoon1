#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack <int> s;
	int t;
	cin >> t;
	string temp;
	getline(cin, temp);

	for (int i = 0; i < t; i++) {
		string str;
		getline(cin, str);

		//push
		if (str.find("push") != string::npos) {
			string n = str.substr(4);
			int p = stoi(n);
			s.push(p);
			continue;
		}

		//pop
		if (str.find("pop") != string::npos) {
			if (s.empty())
				cout << -1 << "\n";
			else {
				cout << s.top() << "\n";
				s.pop();
			}
			continue;
		}

		//size
		if (str.find("size") != string::npos) {
			cout << s.size() << "\n";
			continue;
		}

		//empty
		if (str.find("empty") != string::npos) {
			if (s.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
			continue;
		}

		//top
		if (str.find("top") != string::npos) {
			if (s.empty())
				cout << -1 << "\n";
			else
				cout << s.top() << "\n";
			continue;
		}
	}
}