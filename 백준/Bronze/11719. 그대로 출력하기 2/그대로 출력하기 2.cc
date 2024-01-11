#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	for (int i = 0; i < 100; i++) {
		getline(cin, str);
		cout << str << "\n";
	}

}