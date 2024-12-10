/*
- Title : 14581 - Hongjun Surrounded by Fans
- Start Time : 24-12-10, 11:39
- End Time : 24-12-10, 11:41
- Try : 1
- Category : simple, basic, string
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
입력된 문자열에 대해서 예제와 같이 출력하라.

- 입력
첫 번째 줄에 문자열를 입력받는다. 문자열은 길이가 20 이하이며, 알파벳 소문자, 알파벳 대문자, 숫자로만 이루어졌다.

- 출력
3개의 줄에 걸쳐, 예제와 같이 출력한다.

- 예제
입력 1 :
appa
출력 1 : 
:fan::fan::fan:
:fan::appa::fan:
:fan::fan::fan:
입력 2 : 
h0ngjun7
출력 2 : 
:fan::fan::fan:
:fan::h0ngjun7::fan:
:fan::fan::fan:
*/

/* 한국어 주석
이 문제는 문자열을 주어진 형식처럼 출력하면 되는 문제이다.
매우 간단하므로 설명은 생략한다.
*/

/* English Problem Summary
- Problem
Print the input string according to the given example.

- Input
The first line contains a string. The string has a length of at most 20 and consists of lowercase letters, uppercase letters, and numbers.

- Output
Print the output in three lines as shown in the example.

- Example
Input 1 :
appa
Output 1 :
:fan::fan::fan:
:fan::appa::fan:
:fan::fan::fan:
Input 2 :
h0ngjun7
Output 2 :
:fan::fan::fan:
:fan::h0ngjun7::fan:
:fan::fan::fan:
*/

/* English Comment
This problem requires printing a string in the specified format.
It is straightforward, so no further explanation is provided.
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

	cout << ":fan::fan::fan:\n";
	cout << ":fan::" << str << "::fan:\n";
	cout << ":fan::fan::fan:\n";

	return 0;
}

//Finish