/*
- Title : 18409 - Counting Vowels
- Start Time : 25-03-28, 17:20
- End Time : 25-03-28, 17:22
- Try : 1
- Category : simple, basic, string
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

	int n;
	cin >> n;

	string str;
	cin >> str;

	int result = 0;
	
	for (auto c : str) {
		if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
			result++;
		}
	}

	cout << result;

	return 0;
}

//Finish
