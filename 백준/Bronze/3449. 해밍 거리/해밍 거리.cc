/*
- Title : 3449 - Hamming Distance
- Start Time : 26-01-08, 00:21
- End Time : 26-01-08, 00:24
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

	int T;
	cin >> T;

	while (T--) {
		string s1, s2;
		cin >> s1 >> s2;

		int hammingDistance = 0;

		for (int i = 0; i < s1.size(); ++i) {
			if (s1[i] != s2[i])
				hammingDistance++;
		}

		cout << "Hamming distance is " << hammingDistance << ".\n";
	}

	return 0;
}
