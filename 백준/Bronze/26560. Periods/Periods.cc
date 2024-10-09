/*
- Title : 26560 - Periods
- Start Time : 24-10-09, 21:55
- End Time : 24-10-09, 22:06
- Try : 1
- Category : string, getline
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
여러 문장들이 주어진다. 각 문장이 마침표로 끝나면 그대로 출력하고, 마침표료 끝나지 않으면 문장 끝에 마침표를 추가하여 출력하는 프로그램을 작성하시오.

- 입력
첫 번째 줄에 줄의 수를 나타내는 단일 정수 n이 주어진다.
각 줄에는 끝에 마침표가 있거나 없는 문장으로 구성됩니다.

- 출력
각 문장을 규칙에 맞춰 한 줄씩 문장을 출력한다.

- 예제
입력 :
3
You kicked my dog
No I did not.
It was the kid that did
출력 :
You kicked my dog.
No I did not.
It was the kid that did.
*/

/* 한국어 주석
이 문제는 조건에 맞춰 입력받은 문장을 출력하는 문제이다.

일단 문장을 입력받을 때 공백을 포함하여 입력받아야 하므로 getline() 함수를 사용하여 입력받아야 한다.
이때, 단일 정수 n을 cin으로 먼저 받았기 때문에 '\n'을 버퍼에서 지우기 위하여 cin.ignore()를 사용한다.
문장의 끝이 '.'인지 확인하고 '.'로 끝나지 않으면 추가하여 출력하고 '.'로 끝나는 경우는 그대로 출력한다.

문제에 조건들이 주어지지 않았으므로 적절한 조건이 있다고 가정하고 풀었고 성공으로 체점되었으므로 복잡한 조건들에 대해서는 고려하지 않아도 된다.
*/

/* English Problem Summary
- Question
Several sentences are given. Print each sentence as-is if it ends with a period; otherwise, add a period at the end before printing.

- Input
The first line contains a single integer n, representing the number of sentences.
Each line consists of a sentence, which may or may not end with a period.

- Output
Print each sentence on a new line according to the rules.

- Example
Input :
3
You kicked my dog
No I did not.
It was the kid that did
Output :
You kicked my dog.
No I did not.
It was the kid that did.
*/

/* English Comment
This problem requires printing the input sentences according to specified conditions.

Since each sentence must be read with spaces included, the getline() function is used for input.
After reading the single integer n with cin, use cin.ignore() to clear the newline character from the buffer.
Check if each sentence ends with a period. If it doesn’t, add a period before printing; otherwise, print it as-is.

The problem does not specify additional conditions, so reasonable assumptions were made.
Given that the solution was accepted, complex conditions do not need to be considered.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cin.ignore();

	while (n--) {
		string str;
		getline(cin, str);

		if (str[str.size() - 1] == '.')
			cout << str;
		else
			cout << str + '.';
		cout << "\n";
	}
}

//Finish