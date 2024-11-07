/*
- Title : 9791 - Encoding Binary Numbers
- Start Time : 24-11-07, 00:16
- End Time : 24-11-07, 00:25
- Try : 1
- Category : string, find_first_not_of
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
이진수는 다음과 같은 계산 방법을 통해 십진수로 인코딩 된다.
이진수		카운팅				10진수
000			3x0					30
0111		1x0 3x1				1031
111000001	3x1 5x0 1x1			315011
1010		1x1 1x0 1x1 1x0		11101110

- 입력
입력에는 이진수를 나타내는 문자열 줄이 포함된다. 각 줄의 이진수 길이는 1에서 100 사이이다.
0(제로)만 포함된 줄은 입력의 끝을 나타낸다. 마지막 줄에 대해서는 출력하지 않는다. 입력에는 최대 1,000줄이 포함될 수 있습니다.

- 출력
각 줄에 주어진 이진수에 해당하는 십진수를 출력하라. 숫자 사이에 공백은 없다.

- 예제
입력 :
111100000011
000
01010101
11
0
출력 :
416021 
30 
1011101110111011 
21
*/

/* 한국어 주석
이 문제는 이진수에서 1과 0의 반복을 규칙에 따라 인코딩하는 문제이다.

C++에서는 <string> 라이브러리의 .find_first_not_of() 멤버 함수를 사용하여 간단하게 해결 할 수 있다.
*/

/* English Problem Summary
- Question
Binary numbers are encoded into decimal numbers by the following calculation method:
Binary		Counting			Decimal
000			3x0					30
0111		1x0 3x1				1031
111000001	3x1 5x0 1x1			315011
1010		1x1 1x0 1x1 1x0		11101110

- Input
The input includes lines of strings representing binary numbers. Each line's binary length is between 1 and 100.
A line containing only the digit 0 (zero) indicates the end of the input. Do not output the last line. The input can contain up to 1,000 lines.

- Output
For each line, print the decimal number corresponding to the given binary number. Do not include spaces between numbers.

- Example
Input :
111100000011
000
01010101
11
0
Output :
416021
30
1011101110111011
21
*/

/* English Comment
This problem involves encoding binary sequences of 1s and 0s according to a given pattern.

In C++, the .find_first_not_of() member function from the <string> library can be used to solve this efficiently.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	while (true) {
		string str;
		cin >> str;
		if (str == "0")
			break;

		string result = "";

		char c = str[0];	// current character
		size_t pos = 0;

		while (true) {
			size_t newPos = str.find_first_not_of(c, pos);
			if (newPos == string::npos) {
				int length = str.size() - pos;
				result = result + to_string(length) + c;
				break;
			}

			int length = newPos - pos;
			result = result + to_string(length) + c;
			pos = newPos;
			c = str[pos];
		}
		cout << result << "\n";
	}

	return 0;
}

//Finish