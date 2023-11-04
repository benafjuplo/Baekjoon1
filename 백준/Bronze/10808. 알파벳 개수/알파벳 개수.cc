#include<iostream>
#include<string>
using namespace std;

int main() {
	string x;
	cin >> x;
	int size = x.size();
	int cnt[26] = { 0 };
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < 26; j++) {
			if ('a' + j == x[i])
				cnt[j]++;
		}
	}
	for (int j = 0; j < 26; j++) {
		cout << cnt[j];
		if (j != 25)
			cout << " ";
	}
	
}
