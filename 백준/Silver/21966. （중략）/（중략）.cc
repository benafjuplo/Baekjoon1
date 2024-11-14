/*
- Title : 21966 - (Omitted)
- Start Time : 24-11-14, 21:44
- End Time : 24-11-14, 22:03
- Try : 1
- Category : string, substr
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
1개 이상의 문장들이 주어진다. 아래 규칙에 따라 문장들의 중간 부분을 생략해 25글자 이내로 요약해서 출력하는 프로그램을 작성하라.

단, 입출력의 편의를 위해, 문장들을 공백 없이 붙여 구성한 문자열 S가 입력으로 주어진다.
문자열의 첫 글자부터 가장 먼저 만나는 '.'(마침표)까지, 그리고 각 '.'의 다음 글자부터 가장 먼저 만나는 '.'까지를 한 문장으로 생각하기로 하자.
예를 들어 주어진 문자열 S가 'IamInevitable.IamIronMan.'이라면 'IamInevitable.'이 한 문장, 'IamIronMan.'이 한 문장이다.

생략 규칙은 다음과 같다.
1. S의 길이가 25 이하면 S를 그대로 출력한다.
2. S의 길이가 25 초과이면, S의 앞에서부터 11글자, 뒤에서부터 11글자를 제외한 나머지 부분이 모두 같은 문장에 속한다면, 생략한 뒤 '...'('.' 3개)으로 바꿔서 출력한다.
위 두 경우에 해당되지 않는다면 S를 앞에서부터 9글자, 뒤에서부터 10글자만 남기고 중간은 '......'('.' 6개)으로 바꿔서 출력한다.

- 입력
첫 번째 줄에 문자열의 길이 N이 주어진다.
두 번째 줄에는 N글자로 이루어진 문자열 S가 주어진다.

- 출력
문제에서 제시된 규칙에 따라 S를 25글자 이내로 요약해서 출력한다.

- 제한
2 <= N <= 100,000
문자열 S는 알파벳 대문자, 알파벳 소문자, 쉼표(,), 마침표(.)로만 구성되어 있다.
문자열 S의 첫 글자는 마침표(.)가 아니다.
문자열 S의 마지막 글자는 마침표(.)이다.

- 예제
입력 1 : 
11
IamIronMan.
출력 1 :
IamIronMan.
입력 2 : 
26
And,IamIronMan.IamIronMan.
출력 2 :
And,IamIron...IamIronMan.
입력 3 : 
29
IamInevitable.And,IamIronMan.
출력 3 :
IamInevit......amIronMan.
*/

/* 한국어 주석
이 문제는 문자열을 주어진 조건에 맞춰 적절히 변형하여 출력하는 문제이다.

문자열은 공백 없이 주어지므로, string 자료형을 사용하고 cin으로 입력받는다.

첫 번째 조건은 <string> 라이브러리의 멤버 함수 size() 또는 length()를 사용하여 문자열의 길이를 확인하면 된다.
두 번째 조건은 <string> 라이브러리의 멤버 함수 substr()를 이용하여 서브 문자열을 분리한 후, 해당 서브 문자열에 find를 사용하여 '.'이 포함되지 않는지 확인한다.
이때, 서브 문자열의 좌우로 한 칸씩 덜 잘라야 한다. 이는 맨 왼쪽과 오른쪽에 위치한 '.'은 조건에 영향을 주지 않기 때문이다.
두 번째 조건과 세 번째 조건에 대한 출력은 substr()을 적절히 사용하면 된다.
*/

/* English Problem Summary
- Question
One or more sentences are given. Write a program that summarizes the sentences to a length of 25 characters or less based on the following rules:

For input and output convenience, the sentences are given as a single string `S` without spaces.
A sentence is defined as the substring of `S` from the first character to the first encountered `.` (period), and from each `.` to the next `.`.
For example, if the input string `S` is 'IamInevitable.IamIronMan.', 'IamInevitable.' is one sentence, and 'IamIronMan.' is another.

The summarization rules are as follows:
1. If the length of `S` is 25 or less, print `S` as is.
2. If the length of `S` exceeds 25, and the middle part (everything excluding the first 11 and last 11 characters) belongs to the same sentence,
replace the omitted portion with '...' (three dots).
3. If neither of the above cases apply, include only the first 9 and last 10 characters of `S`, replacing the middle portion with '......' (six dots).

- Input
The first line contains the integer `N`, the length of the string `S`.
The second line contains the string `S` with a length of `N`.

- Output
Print the summary of `S` as per the rules provided.

- Constraint
2 <= N <= 100,000
`S` consists only of uppercase and lowercase English letters, commas (,), and periods (.).
The first character of `S` is not a period (.), and the last character of `S` is a period (.).

- Hint

- Example
*/

/* English Comment
This problem involves transforming a given string based on specified conditions and printing the result.

Since the string is provided without spaces, use the `string` type and read input with `cin`.

Use the `size()` or `length()` member functions from the `<string>` library to check the string's length for the first condition.
For the second condition, use the `substr()` function from `<string>` to extract substrings and check if the omitted part belongs to the same sentence by verifying the absence of '.' within it.
This can be done using the `find()` function. Note that when extracting the substring, exclude the first and last '.' as they don't affect the condition.
For both the second and third conditions, use `substr()` to handle and print the appropriate parts of the string based on the rules.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	// read string's size and ignore.
	int N;
	cin >> N;

	// read string
	string str;
	cin >> str;

	// condition 1
	if (str.size() <= 25) {
		cout << str;
		return 0;
	}

	// condition 2
	string middleString = str.substr(11 + 1, str.size() - 22-2);
	int pos = middleString.find('.');
	if (pos==string::npos) {
		cout << str.substr(0, 11) + "..." + str.substr(str.size() - 11);
		return 0;
	}

	// condition 3
	else {
		cout << str.substr(0, 9) + "......" + str.substr(str.size() - 10);
		return 0;
	}

	return 0;
}

//Finish