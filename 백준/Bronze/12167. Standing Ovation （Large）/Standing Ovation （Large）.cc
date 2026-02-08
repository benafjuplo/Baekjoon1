/*
- Title : 12167 - Standing Ovation (Large)
- Start Time : 26-02-09, 04:19
- End Time : 26-02-09, 04:25
- Try : 1
- Category : mathematics, elementary arithmetic
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

	for (int test_case = 1; test_case <= T; ++test_case) {
		int Smax;
		string S;
		cin >> Smax >> S;
		int standing = 0;
		int friends = 0;
		for (int shyness = 0; shyness <= Smax; ++shyness) {
			int num_people = S[shyness] - '0';
			if (num_people > 0) {
				if (standing < shyness) {
					int need = shyness - standing;
					friends += need;
					standing += need;
				}
				standing += num_people;
			}
		}
		cout << "Case #" << test_case << ": " << friends << '\n';
	}

	return 0;
}