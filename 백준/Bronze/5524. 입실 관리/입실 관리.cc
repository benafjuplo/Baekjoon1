/*
- Title : 5524 - Entry Management
- Start Time : 25-01-05, 23:53
- End Time :
- Try : 
- Category : 
- Language : C++20
*/

/* 한국어 주석
아스키코드를 사용하거나 tolower() 혹은 transform() 함수를 사용하여 구현할 수 있다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		for (int i = 0;i < str.size();++i)if ('A' <= str[i] && str[i] <= 'Z') str[i] += 'a' - 'A';
		cout << str << "\n";
	}

	return 0;
}
