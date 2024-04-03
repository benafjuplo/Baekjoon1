#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	string str;
	getline(cin, str);
	while (str != ".") {
		stack <int> s;
		int i = 0;
		for (; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty())
					break;
				if (s.top() != '(') {
					break;
				}
				s.pop();
			}
			else if (str[i] == ']') {
				if (s.empty())
					break;
				if (s.top() != '[') {
					break;
				}
				s.pop();
			}
		}
		if (i == str.size() && s.empty())
			cout << "yes\n";
		else
			cout << "no\n";

		getline(cin, str);
	}

}

//Finish