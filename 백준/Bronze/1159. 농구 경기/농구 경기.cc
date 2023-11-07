#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	string x[150];
	for (int i = 0; i < N; i++) {
		cin >> x[i];
	}
	int cnt[26] = {0};
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < 26; j++) {
			if ('a' + j == x[i][0])
				cnt[j]++;
		}
	}
	bool Unfulfilled = true;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] >= 5)
			Unfulfilled = false;
	}
	if (Unfulfilled)
		cout << "PREDAJA";

	else {
		for (int i = 0; i < 26; i++) {
			if (cnt[i] >= 5) {
				char temp = 'a' + i;
				cout << temp;
			}
		}
	}
}
