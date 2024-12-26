/*
- Title : 5358 - Football Team
- Start Time : 24-12-25, 21:53
- End Time : 
- Try : 3(2 : Misunderstanding of the Problem)
- Category : EOF, string
- Language : C++20
*/

/* 한국어 주석
이 문제는 주어진 문자열에서 'i'와 'e'를 서로 바꾸어 출력하는 문제이다.

입력은 문자열의 개수가 명시되어 있지 않고 파일 끝(EOF)까지 주어진다. 따라서 EOF를 활용하여 프로그램을 종료해야 한다.
문자열은 공백을 포함할 수 있으므로 `getline()` 함수를 `while` 루프의 조건문으로 사용하여 간편하게 구현할 수 있다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
	while(getline(cin, str)) {
		for (int j = 0; j < str.size(); ++j) {
			if (str[j] == 'i')
				str[j] = 'e';
			else if (str[j] == 'e')
				str[j] = 'i';
			else if (str[j] == 'I')
				str[j] = 'E';
			else if (str[j] == 'E')
				str[j] = 'I';
		}
		cout << str << "\n";
	}

	return 0;
}

//Finish