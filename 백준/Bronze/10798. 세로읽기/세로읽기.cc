#include<iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str[5];

	int size = 0;

	for (int i = 0; i < 5; i++) {
		cin >> str[i];
		if (size < str[i].size())
			size = str[i].size();
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 5; j++) {
			if (str[j].size() - 1 < i)
				continue;
			cout << str[j][i];
		}
	}
}

//Finish