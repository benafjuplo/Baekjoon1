/*
- Title : 17863 - FYI
- Start Time : 24-11-06, 20:38
- End Time : 24-11-06, 20:42
- Try : 1
- Category : string, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
제공된 7자리 전화번호에 대해서 접두어 번호가 555인지 여부를 판단하는 프로그램을 작성하시오.

- 입력
입력은 7자리 양의 정수 N(1000000 <= N <= 9999999)이 포함된 한 줄로 구성된다.

- 출력
입력된 번호의 접두어 번호가 555인 경우에는 YES, 그렇지 않은 경우에는 NO를 출력한다.

- 예제
입력 1 : 
5551212
출력 1 : 
YES
입력 2 :
5519876
출력 2 :
NO
입력 3 :
5055555
출력 3 :
NO
입력 4 :
5550000
출력 4 :
YES
*/

/* 한국어 주석
이 문제는 간단하게 문자열을 받아서 1~3번째 문자가 5인지 확인하면 된다.
*/

/* English Problem Summary
- Question
Write a program to determine if a given 7-digit phone number starts with the prefix "555."

- Input
The input consists of a single line containing a 7-digit positive integer N (1000000 ≤ N ≤ 9999999).

- Output
If the input number has the prefix "555," output "YES." Otherwise, output "NO."

- Example
Input 1 :
5551212
Output 1 :
YES
Input 2 :
5519876
Output 2 :
NO
Input 3 :
5055555
Output 3 :
NO
Input 4 :
5550000
Output 4 :
YES
*/

/* English Comment
This problem can be solved easily by taking the input as a string and checking if the first three characters are "555."
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

	for (int i = 0; i < 3; ++i) {
		if (str[i] != '5') {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";
	return 0;
}

//Finish