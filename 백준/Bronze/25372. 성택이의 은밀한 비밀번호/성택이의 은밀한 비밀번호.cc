/*
- Title : 25372 - Sungtaek's Secret Password
- Start Time : 24-12-02, 18:??
- End Time : 24-12-02, 18:59
- Try : 1
- Category : string, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
비밀번호는 6자리 이상 9자리 이하여야 한다. 문자열이 주어졌을 때, 이를 비밀번호로 사용할 수 있는지 판단하는 프로그램을 작성하라.

- 입력
첫째 줄에 문자열의 총 개수 N이 주어진다.
둘째 줄부터 N개의 줄에 걸쳐 숫자, 영어 대소문자로만 구성된 문자열이 주어진다.

- 출력
줄마다 사용할 수 있는 비밀번호면 "yes", 그렇지 않으면 "no"를 출력한다.

- 제한
1 <= N <= 1,000
문자열의 길이는 1자리 이상 20자리 이하이다.

- 예제
입력 : 
3
1245125
asdij
120318739721
출력 : 
yes
no
no
*/

/* 한국어 주석
<string> 라이브러리를 이용해 문자열을 입력받고, 문자열의 길이를 조건문으로 판단하여 구현한다.
*/

/* English Problem Summary
- Problem
A password must be between 6 and 9 characters long. Write a program to determine if a given string can be used as a password.

- Input
The first line contains an integer N, the number of strings.
From the second line, there are N lines, each containing a string consisting of digits and English letters (both uppercase and lowercase).

- Output
For each string, output "yes" if it can be used as a password, and "no" otherwise.

- Constraints
1 <= N <= 1,000
The length of each string is between 1 and 20 characters.

- Example
Input :
3
1245125
asdij
120318739721
Output :
yes
no
no
*/

/* English Comment
Using the `<string>` library, the strings can be input, and their lengths can be evaluated using conditional statements for implementation.
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
		if (6 <= str.size() && str.size() <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}

//Finish