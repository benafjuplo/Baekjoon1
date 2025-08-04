/*
- Title : 2935 - Noise
- Start Time : 25-08-04, 23:05
- End Time : 25-08-04, 23:40
- Try : 1
- Category : string, mathematics, elementary arithmetic
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
	
	string a, b;
	char oper;
	cin >> a  >> oper >> b;

	if (oper == '*') {
		string result = "1";

		int pow1 = a.size() - 1;
		int pow2 = b.size() - 1;

		int resultPow = pow1 + pow2;

		for (int i = 0; i < resultPow; ++i)
			result += "0";

		cout << result;
	}

	else {
		string result;

		if (a.size() == b.size()) {
			result = a;
			result[0] = '2';
		}
		else {
			if (a.size() > b.size()) {
				result = a;
				result[a.size() - b.size()] = '1';
			}
			else {
				result = b;
				result[b.size() - a.size()] = '1';
			}
		}
		
		cout << result;
	}
	
	return 0;
}

// Finish