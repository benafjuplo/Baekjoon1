/*
- Title : 3765 - Celebrity jeopardy
- Start Time : 25-01-21, 22:39
- End Time : 25-01-21, 22:41
- Try : 2(1 : EOF)
- Category : simple, basic, EOF, getline, string
- Language : C++20
*/

/* 한국어 주석
while()과 getline()을 사용하여 구현한다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);
	string line;
	while (getline(cin, line)) cout << line << "\n";
	return 0;
}

//Finish