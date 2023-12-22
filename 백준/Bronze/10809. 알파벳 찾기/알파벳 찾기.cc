#include<iostream>
#include<string>

using namespace std;

int main() {
	string S;
	cin >> S;
	for (int i = 0; i <= 'z' - 'a';i++) {
		char temp = 'a' + i;
		int index = S.find(temp);
		if(index != string::npos)
			cout << index << " ";
		else
			cout << -1 << " ";
	}
}