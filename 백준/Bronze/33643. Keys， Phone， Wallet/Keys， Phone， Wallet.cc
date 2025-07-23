/*
- Title : 33643 - Keys, Phone, Wallet
- Start Time : 25-07-23, 09:01
- End Time : 25-07-23, 09:17
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	string items[3] = { "keys", "phone", "wallet" };
	bool haveItems[3] = { false, false, false };

	while (n--) {
		string str;
		cin >> str;

		for (int i = 0; i < 3; ++i) {
			if (str == items[i]) {
				haveItems[i] = true;
				break;
			}
		}
	}

	for (int i = 0; i < 3; ++i) {
		if (!haveItems[i])
			cout << items[i] << "\n";
	}

	if (haveItems[0] && haveItems[1] && haveItems[2])
		cout << "ready" << "\n";

	return 0;
}

// Finish