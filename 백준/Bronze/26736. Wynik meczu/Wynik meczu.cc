/*
- Title : 26736 - Match result
- Start Time : 25-07-04, 23:19
- End Time : 25-07-04, 23:22
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

	int cntA = 0;
	int cntB = 0;

	string str;
	cin >> str;

	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == 'A') cntA++;
		else cntB++;
	}

	cout << cntA << " : " << cntB;	

	return 0;
}

// Finish