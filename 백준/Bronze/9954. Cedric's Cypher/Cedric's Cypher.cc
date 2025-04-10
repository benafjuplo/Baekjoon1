/*
- Title : 9954 - Cedric's Cypher
- Start Time : 25-04-09, 13:28
- End Time : 25-04-09, 13:41
- Try : 1
- Category : string, ASCII, getline
- Language : C++20
*/

/* 한국어 주석
문자열 입력(getline)과 아스키코드를 이용하여 복호화한다.
아스키코드에 계산 적용 시 알파벳 보다 낮아질 수 있음에 주의하여 원형 큐 형식으로 돌아가게 구현해준다.
알파벳만 복호화한다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string str;
	getline(cin, str);

	const int ALPHABET_SIZE = 'Z' - 'A' + 1;

	while (str != "#") {
		int s = str[str.size() - 1] - 'A';
		str.erase(str.begin() + str.size()-1);

		for (int i = 0;i < str.size() - 1;++i) {
			if ('a' <= str[i] && str[i] <= 'z') {
				str[i] -= s;
				if (str[i] < 'a')
					str[i] += ALPHABET_SIZE;
			}
			else if ('A' <= str[i] && str[i] <= 'Z') {
				str[i] -= s;
				if (str[i] < 'A')
					str[i] += ALPHABET_SIZE;
			}
		 }

		cout << str << "\n";

		getline(cin, str);
	}

	return 0;
}

// Finish