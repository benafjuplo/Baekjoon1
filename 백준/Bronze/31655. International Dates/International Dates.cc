/*
- Title : 31655 - International Dates
- Start Time : 25-03-26, 11:04
- End Time : 25-03-26, 11:12
- Try : 1
- Category : string, substr, parsing, stoi
- Language : C++20
*/

/* 한국어 주석
문제는 간단하다.
입력을 문자열로 받고 substr과 stoi를 이용하여 파싱 후 숫자로 변환한다.
a와 b에 대하여 13~31이면 EU와 US가 특정되고 그렇지 않다면 either이다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	int a = stoi(str.substr(0, 2));
	int b = stoi(str.substr(3, 2));

	if (13 <= a && a <= 31) {
		cout << "EU";
	}
	else if (13 <= b && b <= 31) {
		cout << "US";
	}
	else
		cout << "either";

	return 0;
}

// Finish