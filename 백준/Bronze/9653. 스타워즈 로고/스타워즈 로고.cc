/*
- Title : 9653 - Star Wars Logo
- Start Time : 24-10-06, 20:03
- End Time : 24-10-06, 20:07
- Try : 1
- Category : basic, simple, I/O
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
스타워즈 로고를 예제 출력과 같이 출력하는 프로그램을 작성하시오.

- 출력
스타워즈 로고를 출력한다.

- 예제
출력 :
	8888888888  888    88888
   88     88   88 88   88  88
	8888  88  88   88  88888
	   88 88 888888888 88   88
88888888  88 88     88 88    888888

88  88  88   888    88888    888888
88  88  88  88 88   88  88  88
88 8888 88 88   88  88888    8888
 888  888 888888888 88  88      88
  88  88  88     88 88   88888888
*/

/* 한국어 주석
이 문제는 예제와 같이 출력하면 된다.
단순히 예제의 출력을 복사한 후, 앞의 공백을 실수하지 않고 각 줄에 줄 바꿈("\n")을 추가하는 것에 주의하면 된다.
*/

/* English Problem Summary
- Question
Write a program that prints the Star Wars logo as shown in the example output.

- Output
Print the Star Wars logo.

- Example
Output :
	8888888888  888    88888
   88     88   88 88   88  88
	8888  88  88   88  88888
	   88 88 888888888 88   88
88888888  88 88     88 88    888888

88  88  88   888    88888    888888
88  88  88  88 88   88  88  88
88 8888 88 88   88  88888    8888
 888  888 888888888 88  88      88
  88  88  88     88 88   88888888
*/

/* English Comment
This problem requires printing the output exactly as shown in the example.
The example output should be copied carefully, ensuring that no mistakes are made with the leading spaces, and that line breaks ("\n") are correctly added after each line.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	cout << "    8888888888  888    88888\n";
	cout << "   88     88   88 88   88  88\n";
	cout << "    8888  88  88   88  88888\n";
	cout << "       88 88 888888888 88   88\n";
	cout << "88888888  88 88     88 88    888888\n\n";
	cout << "88  88  88   888    88888    888888\n";
	cout << "88  88  88  88 88   88  88  88\n";
	cout << "88 8888 88 88   88  88888    8888\n";
	cout << " 888  888 888888888 88  88      88\n";
	cout << "  88  88  88     88 88   88888888\n";
}

//Finish