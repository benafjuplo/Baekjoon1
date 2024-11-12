/*
- Title : 10170 - NFC West vs North
- Start Time : 24-10-30, 05:29
- End Time : 24-10-30, 05:32
- Try : 1
- Category : simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
NFC 서부와 북부 디비전 순위를 출력하는 프로그램을 작성하시오.

- 입력
없음

- 출력
예제와 같이 NFC 서부와 북부 디비전 순위를 출력한다.

- 예제
입력 :

출력 : 
NFC West       W   L  T
-----------------------
Seattle        13  3  0
San Francisco  12  4  0
Arizona        10  6  0
St. Louis      7   9  0

NFC North      W   L  T
-----------------------
Green Bay      8   7  1
Chicago        8   8  0
Detroit        7   9  0
Minnesota      5  10  1
*/

/* 한국어 주석
입력없이 예제를 복사해서 개행 문자를 마지막에 추가하여 간단히 출력한다.
단순 출력이 불가능한 특수 문자도 없기에 아주 간단히 해결 가능하다.
*/

/* English Problem Summary
- Question
Write a program to display the standings of the NFC West and NFC North divisions.

- Input
None

- Output
Display the standings of the NFC West and NFC North divisions as shown in the example.

- Example
Input :

Output :
NFC West       W   L  T
-----------------------
Seattle        13  3  0
San Francisco  12  4  0
Arizona        10  6  0
St. Louis      7   9  0

NFC North      W   L  T
-----------------------
Green Bay      8   7  1
Chicago        8   8  0
Detroit        7   9  0
Minnesota      5  10  1
*/

/* English Comment
This problem involves outputting the NFC West and NFC North division standings as given in the example.
The example can be copied directly and printed with a newline character added at the end. Since there are no complex or special characters, this can be solved with minimal effort.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	cout << "NFC West       W   L  T\n";
	cout << "-----------------------\n";
	cout << "Seattle        13  3  0\n";
	cout << "San Francisco  12  4  0\n";
	cout << "Arizona        10  6  0\n";
	cout << "St. Louis      7   9  0\n\n";
	cout << "NFC North      W   L  T\n";
	cout << "-----------------------\n";
	cout << "Green Bay      8   7  1\n";
	cout << "Chicago        8   8  0\n";
	cout << "Detroit        7   9  0\n";
	cout << "Minnesota      5  10  1";

	return 0;
}

//Finish
