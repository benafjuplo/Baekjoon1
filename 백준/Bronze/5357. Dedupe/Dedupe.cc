/*
- Title : 5357 - Dedupe
- Start Time : 24-12-30, 21:36
- End Time : 24-12-30, 21:43
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 주석
<string>을 사용하면 간단하게 구현가능하다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		string str;
		cin >> str;
		size_t strSize = str.size();

		string newStr = "";
		
		newStr += str[0];

		for (int i = 1; i < strSize;++i) if (str[i] != str[i - 1]) newStr += str[i];
		
		cout << newStr << "\n";
	}

	return 0;
}

//Finish