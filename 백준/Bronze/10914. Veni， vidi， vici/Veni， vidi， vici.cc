/*
- Title : 10914 - Veni, vidi, vici
- Start Time : 25-03-19, 10:59
- End Time : 25-03-19, 11:11
- Try : 3(1 : "\n" -> " ", 1 : 'a' + 'a' -2 -> not letter)
- Category : ASCII, string, cryptography
- Language : C++20
*/

/* 한국어 주석
1. 결과는 공백으로 구분한다.
2. 2, "aa" 가 입력인 경우 복호화가 문자가 아니다.
3. 'a' ~ 'z'는 0~25가 아니고 아스키코드 임에 유의하여 구현한다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string str;

	while (cin >> str) {
		string result = "";
		for (int i = 0; i < str.size();i+=2) {
			if (i + 1 >= str.size())
				break;
			result += (str[i]-'a' + str[i+1]-'a' - n) % 26 + 'a';
			if (result.back() < 'a')
				result.back() += 26;
		}
		cout << result << " ";
	}

	return 0;
}

//Finish