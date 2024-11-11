/*
- Title : 5339 - Call Center
- Start Time : 24-10-06, 21:20
- End Time : 24-10-06, 21:23
- Try : 1
- Category : basic, simple, I/O
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
콜센터에 앉아있는 C3PO를 그리는 프로그램을 작성하시오.

- 출력
예제 출력처럼 콜센터에 앉아있는 C3PO를 출력한다. 마지막 세 줄의 두 '|' 사이에는 공백이 10개 있다.

- 예제
출력 : 
	 /~\
	( oo|
	_\=/_
   /  _  \
  //|/.\|\\
 ||  \ /  ||
============
|          |
|          |
|          |
*/

/* 한국어 주석
이 문제는 예제와 동일하게 출력하는 문제이다.
예제를 단순히 복사하여 사용하되, 특수문자인 '\'에 대해서 '\\'로 바꾸어 준다.
각 줄 끝에 \n을 추가하여 줄 바꿈을 해준다.
*/

/* English Problem Summary
- Question
Write a program that draws C3PO sitting at a call center.

- Output
Print C3PO sitting at a call center as shown in the example output.
In the last three lines, there are exactly 10 spaces between the two '|' characters.

- Example
Output :
	 /~\
	( oo|
	_\=/_
   /  _  \
  //|/.\|\\
 ||  \ /  ||
============
|          |
|          |
|          |
*/

/* English Comment
This problem requires printing the output exactly as shown in the example.
Simply copy the example, but replace the special character '\' with '\\'.
Add \n at the end of each line to handle line breaks.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	cout << "     /~\\\n";
	cout << "    ( oo|\n";
	cout << "    _\\=/_\n";
	cout << "   /  _  \\\n";
	cout << "  //|/.\\|\\\\\n";
	cout << " ||  \\ /  ||\n";
	cout << "============\n";
	cout << "|          |\n";
	cout << "|          |\n";
	cout << "|          |\n";
}

//Finish

