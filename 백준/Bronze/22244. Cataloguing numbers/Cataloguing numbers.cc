/*
- Title : 22244 - Cataloguing numbers
- Start Time : 24-09-16, 22:11
- End Time : 24-09-16, 23:23
- Try : 1
- Category : string, parsing, substr, stoi, leaf year
*/

/* 한국어 문제 요약
- 문제
책에 9자리의 고유번호가 아래와 같은 규칙에 따라 주어진다.

처음 7자리는 책의 출판 날짜이다. 처음 2자리는 일, 그 다음 2자리는 월, 마지막 3 자리는 연도이다.
연도를 나타내는 3자리 숫자가 [000, 599] 범위에 있으면 이는 [2000,. 2599] 연도를 의미하고, 그렇지 않으면 [1600, 1999] 연도를 나타낸다.

다음 숫자는 책의 저자를 나타낸다. 저자가 아글라곤드 마법학교 소속이면 1, 저자가 다른 마법학교 소속이면 6, 그렇지 않으면 9이다.

마지막 9번째 숫자는 제어 숫자이며, 처음 8자리의 숫자를 가각 제곱한 합을 7로 나눈 나머지를 나타낸다.

3개의 고유번호가 주어질 때, 각 번호가 올바른 카탈로그 번호인지 판별하는 프로그램을 작성하라.

- 입력
입력은 3줄로 주어진다.
각 줄에는 9자리의 고유번호가 숫자로 입력된다.

- 출력
출력은 정확히 3줄이고, 각 줄에 0 또는 1을 출력한다.
1은 올바른 카탈로그 번호를, 0은 올바르지 않은 경우를 의미한다.

- 힌트
4로 나누어 떨어지는 해는 윤년이다. 다만, 100으로는 나누어 떨어지지만 400으로는 나누어 떨어지지 않는 해는 윤년이 아니다.
예를 들어 2000년과 2004년은 윤년이지만 2002년과 1900년은 윤년이 아니다.

- 예제
입력 : 
310456316
290260060
310053435
출력 : 
0
1
0
*/

/* 한국어 주석
이 문제는 주어진 입력을 규칙의 조건에 맞게 분리하고, 규칙으로 생성가능한 경우인지 확인하는 문제이다.

먼저 주어진 입력을 숫자 혹은 문자열로 받을 수 있다. 문자열 같은 경우 직접 위치에 따라서 substr()로 분리한다. 만약 숫자인 경우에는 나머지 연산을 이용할 수 있을 것이다.
여기서는 가독성과 간편함 때문에 문자열을 사용하였다. 만약 숫자로 입력하고 처리한다면 메모리에서 작지만 조금 더 나은 결과를 볼 수 있을 것이다.

이후에는 분리된 입력(일, 월, 년, 저자, 제어 숫자)를 아래와 같이 규칙에 맞게 조건문을 여러 번 반복해서 유효한 번호인지 결정한다.
날짜의 경우에는 캘린더를 잘 확인해서 조건을 설정해준다.
책의 저자를 나타내는 숫자는 1, 6, 9 밖에 없다.
제어 숫자는 간단한 반복문으로 구하여 비교한다.

이때 년도를 4자리 형태로 변경하고, 윤년을 잘 확인할 필요가 있다.
*/

/* English Problem Summary
- Question
Books are assigned a unique 9-digit code according to the following rules:

The first 7 digits represent the publication date of the book. The first 2 digits are the day, the next 2 digits are the month, and the last 3 digits represent the year.
If the 3-digit year falls within the range [000, 599], it represents the years [2000, 2599]. Otherwise, it represents the years [1600, 1999].

The next digit represents the author of the book. If the author is from Aglagond Magic School, it is 1. If the author is from another magic school, it is 6. Otherwise, it is 9.

The last digit is a control digit, representing the remainder when the sum of the squares of the first 8 digits is divided by 7.

Given three unique codes, write a program to determine whether each code is a valid catalog number.

- Input
The input consists of 3 lines.
Each line contains a 9-digit unique code as a number.

- Output
The output consists of exactly 3 lines.
Each line contains either 0 or 1.
1 means the catalog number is valid, and 0 means it is not.

- Hint
A leap year is divisible by 4. However, years divisible by 100 but not by 400 are not leap years.
For example, the years 2000 and 2004 are leap years, but 2002 and 1900 are not.

- Example
Input :
310456316
290260060
310053435
Output :
0
1
0
*/

/* English Comment
This problem involves splitting the given input according to the rules and checking whether it is a valid code based on the conditions.

First, the input can be received as either numbers or strings.
If it's a string, it can be split directly using substr() based on the position. If it's a number, modulus operations can be used for splitting.
Here, strings were used for readability and simplicity. If handled as numbers, it could result in slightly better memory efficiency.

Next, the separated input (day, month, year, author, control digit) is processed with several conditional checks to determine if the code is valid, according to the rules.
For the date, the conditions must be set carefully by referencing the calendar.
The author digit must be 1, 6, or 9.
The control digit is computed using a simple loop and compared with the given value.

When dealing with the year, it needs to be converted into a 4-digit format, and leap years should be handled properly.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T = 3;

	while(T--) {
		string catalogue;
		cin >> catalogue;

		bool isCorrect = true;

		int day = stoi(catalogue.substr(0, 2));
		int month = stoi(catalogue.substr(2, 2));
		int year = stoi(catalogue.substr(4, 3));
		if (0 <= year && year <= 599) {
			year += 2000;
		}
		else {
			year += 1000;
		}

		int author = stoi(catalogue.substr(7, 1));
		int controlDigit = stoi(catalogue.substr(8, 1));

		// Date
		if (0 < month && month < 13) {
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				if (day <= 0 || 31 < day)
					isCorrect = false;
			}
			else if (month == 2) {
				// Leap Year
				if (!(year % 100 == 0 && year % 400 != 0) && year % 4 == 0) {
					if (day <= 0 || 29 < day)
						isCorrect = false;
				}

				else {
					if (day <= 0 || 28 < day)
						isCorrect = false;
				}
			}
			else {
				if (day <= 0 || 30 < day)
					isCorrect = false;
			}
		}

		else {
			isCorrect = false;
		}
		
		// Author
		if (isCorrect) {
			if (author != 1 && author != 6 && author != 9) {
				isCorrect = false;
			}
		}

		// Control Digit
		if (isCorrect) {
			int sumOfSquares = 0;
			for (int i = 0; i < catalogue.size() - 1; i++) {
				sumOfSquares += (catalogue[i] - '0') * (catalogue[i] - '0');
			}
			if (sumOfSquares % 7 != catalogue[catalogue.size() - 1] - '0') {
				isCorrect = false;
			}
		}

		if (isCorrect)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}	
}

//Finish