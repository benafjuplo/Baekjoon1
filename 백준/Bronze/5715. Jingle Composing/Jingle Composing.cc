/*
- Title : 5715 - Jingle Composing
- Start Time : 24-10-23, 17:06
- End Time : 24-10-23, 17:10
- Try : 1
- Category : mathematics, string
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
이 문제에서는 대문자를 사용하여 음표의 길이를 표시한다.
W = 1, H = 1/2, Q = 1/4, E = 1/8, T = 1/32, X = 1/64

마디의 길이는 음표의 길이의 합이며, 마디의 길이는 항상 1이어야 한다.
아래 예에서 각 마디는 슬래시로 구분되어 있고 각 음표는 위와 같이 표현됩니다. 처음 4개는 올바른 길이이지만 마지막은 틀렸다.
/HH/QQQQ/XXXTXTEQH/W/HW/

각각에 대해 얼마나 많은 마디가 적절한 길이를 갖는지 결정하는 프로그램을 작성하라.

- 입력
입력에는 여러 테스트 케이스가 포함되어 있다. 각 테스트 케이스는 길이가 3~200자(포함)인 문자열이 단일 행으로 이루어지며, 이는 악보를 나타낸다.
문자열은 슬래시(/)로 시작하고 끝납니다. 악보의 마디는 슬래시(/)로 구분된다. 마디의 각 음표는 위에서 설명한 대로 해당 대문자로 표시된다.
각 악보에는 최소한 하나의 마디가 포함되어 있고 각 마디에는 최소한 하나의 음표가 포함되어 있다고 가정할 수 있다.
입력의 모든 문자는 위에서 설명한 대로 음표를 나타내는 데 사용되는 슬래시 또는 7개의 대문자 중 하나이다.
마지막 테스트 케이스 다음에는 별표 하나가 포함된 줄이 주어진다.

- 출력
각 테스트 케이스에 대해 적절한 지속 시간을 갖는 경우의 수를 나타내는 단일 정수를 한 줄씩 출력한다.

- 예제
입력 : 
/HH/QQQQ/XXXTXTEQH/W/HW/
/W/W/SQHES/
/WE/TEX/THES/
*
출력 : 
4
3
0
*/

/* 한국어 주석
이 문제는 문자열을 규칙에 따라 처리하여 적절한 결과를 출력하는 문제이다.

우선 문자열은 공백이 없기에 cin으로 간단히 받는다.
이 후 문자열이 /이면 duration 값을 비교 후 64인 경우 cnt를 하나 더하고 duration을 0으로 설정 후 다음 문자로 넘어간다.
만약 음표라면 문제에 주어진 값에 64를 곱한 값을 duration에 더한 후 다음 문자로 넘어간다.
만약 문자열이 끝났다면 cnt를 출력한다.

문제와 달리 64가 전체적으로 곱해져 있는 이유는 분수 연산을 없애기 위해서이다.
*/

/* English Problem Summary
- Question
In this problem, uppercase letters are used to represent note durations.
W = 1, H = 1/2, Q = 1/4, E = 1/8, T = 1/32, X = 1/64.

The length of a measure is the sum of the note durations, and the total length of each measure must always equal 1.
In the following example, each measure is separated by a slash, and each note is represented as described above. The first four measures have the correct length, but the last one is incorrect:
/HH/QQQQ/XXXTXTEQH/W/HW/

Write a program that determines how many measures in the input have the correct length.

- Input
The input contains multiple test cases. Each test case consists of a single line of text representing a musical score, with a length between 3 and 200 characters (inclusive).
The string begins and ends with a slash ('/'), and the measures are separated by slashes ('/'). Each note in a measure is represented by the uppercase letters described above.
Each musical score contains at least one measure, and each measure contains at least one note. All characters in the input are either slashes or one of the seven uppercase letters used to represent the notes.
The input ends with a single line containing an asterisk ('*') after the last test case.

- Output
For each test case, output a single integer on a new line representing the number of measures that have the correct total duration.

- Example
Input :
/HH/QQQQ/XXXTXTEQH/W/HW/
/W/W/SQHES/
/WE/TEX/THES/
*
Output :
4
3
0
*/

/* English Comment
This problem involves processing a string according to a set of rules and producing the appropriate output.

First, since there are no spaces in the input string, reading the string using cin is straightforward. After that, the string is processed character by character.
If the current character is a '/', the current duration value is checked. If the duration is 64, it means the measure has the correct length, so cnt (the count of valid measures) is incremented by 1.
Then, the duration is reset to 0, and the process continues with the next character.
If the current character is a note (one of the letters), the corresponding value is retrieved according to the problem's description, multiplied by 64 (to avoid dealing with fractions),
and added to the duration. The next character is then processed.
Finally, after the entire string is processed, the value of cnt is output, representing the number of valid measures.

The reason for multiplying everything by 64 is to eliminate fractional operations and handle everything with integers for simplicity and efficiency.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	while (true) {
		string str;
		cin >> str;
		if (str == "*")
			break;
		int cnt = 0;	// count for correct length
		int duration = 0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'W')
				duration += 64;
			else if (str[i] == 'H')
				duration += 32;
			else if (str[i] == 'Q')
				duration += 16;
			else if (str[i] == 'E')
				duration += 8;
			else if (str[i] == 'S')
				duration += 4;
			else if (str[i] == 'T')
				duration += 2;
			else if (str[i] == 'X')
				duration += 1;
			else if (str[i] == '/') {
				// correct length
				if (duration == 64)
					cnt++;
				duration = 0;	// Reset duration
			}
			// No else clause needed; any other character is ignored

			//Switch - case
			//switch (str[i]) {
			//case 'W': duration += 64; break;
			//case 'H': duration += 32; break;
			//case 'Q': duration += 16; break;
			//case 'E': duration += 8;  break;
			//case 'S': duration += 4;  break;
			//case 'T': duration += 2;  break;
			//case 'X': duration += 1;  break;
			//case '/':
			//	if (duration == 64)
			//		cnt++;
			//	duration = 0;
			//	break;
			//default:
			//	// Ignore any other characters
			//	break;
			//}
		}
		cout << cnt << "\n";
	}
}

//Finish