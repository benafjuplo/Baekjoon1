/*
- Title : 21964 - Sunrin Internet High School Anthem
- Start Time : 24-12-19, 22:45
- End Time : 24-12-19, 22:47
- Try : 1
- Category : string
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
공백이 없는 문자열이 주어지면 마지막 5글자만 출력하는 프로그램을 작성하라.

- 입력
첫 번째 줄에 문자열의 길이 N이 주어진다. 두 번째 줄에는 N글자로 이루어진 문자열 S가 주어진다.

- 출력
S의 마지막 5글자를 출력한다.

- 제한
5 <= N <= 100,000
문자열 S는 알파벳 대문자, 알파벳 소문자, 쉼표(,), 마침표(.)로만 구성되어 있다. 쉼표와 마침표도 각각 한 글자로 센다.

- 예제
입력 :
12
Sunrin,Hair.
출력 : 
Hair.
*/

/* 한국어 주석
이 문제는 문자열을 입력받아 마지막 5글자만 출력하는 문제이다.
<string> 라이브러리의 substr 함수를 사용하면 간단히 구현할 수 있다.
*/

/* English Problem Summary
- Problem
Write a program that prints the last 5 characters of a given string without spaces.

- Input
The first line contains an integer N, the length of the string.
The second line contains a string S consisting of N characters.

- Output
Print the last 5 characters of S.

- Constraint
5 <= N <= 100,000
The string S consists only of uppercase letters, lowercase letters, commas (,), and periods (.). Commas and periods are counted as single characters.

- Example
input :
12
Sunrin,Hair.
Output :
Hair.
*/

/* English Comment
This problem involves taking a string as input and printing only the last 5 characters.
You can easily implement this using the substr function from the <string> library.
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

	string str;
	cin >> str;
	cout << str.substr(N - 5);

	return 0;
}

//Finish