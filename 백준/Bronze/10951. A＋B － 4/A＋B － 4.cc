#include<iostream>
#include<string>


using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;

	while (getline(cin, str)) {
		cout << str[0] - '0' + str[2] - '0' << "\n";
	}
}

//Finish