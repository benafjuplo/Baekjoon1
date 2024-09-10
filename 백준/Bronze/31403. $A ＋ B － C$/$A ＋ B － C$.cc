/*
- Title : 31403 - A + B - C
- Start Time : 24-09-11, 01:01
- End Time : 24-09-11, 01:08
- Try : 1
- Category : stoi, string
*/

/* 한국어 문제 요약
- 문제
+, -은 수에 대해서는 일반적인 의미의 덧셈 뺄셈의 의미를 가지고 있다.
하지만 문자열에 대해서 +는 두 문자열을 이어붙이라는 의미이고, -는 양쪽 문자열을 수로 해석한 이후에 빼라는 의미이다.

A, B, C를 각각 수와 문자열로 생각했을 때 A + B - C를 출력하라.

- 입력
첫 줄에는 정수 A가 주어진다. (1 <= A <= 1,000)
둘째 줄에는 정수 B가 주어진다. (1 <= B <= 1,000)
셋째 줄에는 정수 C가 주어진다. (1 <= C <= 1,000)
주어지는 모든 수는 0으로 시작하지 않는 양의 정수이다.

- 출력
첫 줄에는 A, B, C를 수로 생각했을 때, A + B - C를 출력한다.
둘째 줄에는 A, B, C를 문자열로 생각했을 때, A + B - C를 출력하라.

- 예제
입력 :
3
4
5
출력 : 
2
29
*/

/* 한국어 주석
이 문제는 문자열과 숫자를 변환하고 사용하는 문제이다.
C++에서는 string 자료형과 int 자료형, 그리고 변환으로 to_string() 혹은 stoi() 함수를 사용하여 간단히 구현할 수 있다.
특히 string 자료형의 덧셈은 이미 연산자 오버로딩이 되어있으므로 더욱 쉽게 구현 가능하다.
*/

/* English Problem Summary
- Question
The symbols + and - have their usual meanings of addition and subtraction when applied to numbers.
However, when applied to strings, + means concatenation of two strings, and - means subtracting the two values after interpreting both strings as numbers.

Given A, B, and C, which can be treated as either numbers or strings, output the result of A + B - C.

- Input
The first line of input contains an integer A. (1 <= A <= 1,000)
The second line of input contains an integer B. (1 <= B <= 1,000)
The third line of input contains an integer C. (1 <= C <= 1,000)
All numbers given in the input are positive integers with no leading 0.

- Output
The first line of output should contain A + B - C when A, B, C are interpreted as numbers.
The second line of output should contain A + B - C when A, B, C are interpreted as strings.

- Example
입력 :
3
4
5
출력 :
2
29
*/

/* English Comment
This problem involves converting between strings and numbers.
In C++, you can easily implement this using the string and int data types, as well as conversion functions like to_string() or stoi().
In particular, since the addition operation for the string data type is already overloaded, it can be implemented even more easily.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string A, B;
	int C;
	cin >> A >> B >> C;
	string APlusB = A + B;
	
	int resultAsNumber = stoi(A) + stoi(B) - C;

	int resultAsString = stoi(APlusB) - C;

	cout << resultAsNumber << "\n";
	cout << resultAsString;
}

// Finish
