/*
- Title : 7585 - Brackets
- Start Time : 24-10-19, 01:30
- End Time : 24-10-19, 01:54
- Try : 3(1 : Simple Mistake, 1 : Case with Only Opening Brackets)
- Category : stack, getline
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
여러 줄로 이루어진 코드에서 괄호가 알맞게 배치되어 있는지 확인해야 한다. 간단히 하기 위해 따옴표 안의 괄호는 없다고 가정한다.
이 문제에서 고려해야 할 괄호들은 세 가지로 (), [], [] 이다.
마지막 줄은 #만 입력되고 이 줄은 무시한다.

각 줄에 대해여 괄호가 정상적으로 배치되어 있으면 Legal을, 오류가 있는 경우 Illegal을 출력하는 프로그램을 작성하라.

- 입력
입력은 여러 줄로 구성되고 각 줄은 250자를 넘지 않는다. 마지막 입력 줄에는 #만 입력되고 이 줄은 무시한다.

- 출력
각 코드에 대하여 괄호가 없거나 정상적으로 쌍을 이루고 중첩되어 있는 경우 Legal을 출력하고, 오류가 있는 경우 Illegal을 출력한다.

- 예제
입력 : 
void test(int num) { num = double(num); }
int count(int value) { return (value + 2; }
while(sum < 200) { sum += data[test(sum]); }
#
출력 : 
Legal
Illegal
Illegal
*/

/* 한국어 주석
이 문제는 스택을 이용하여 괄호의 짝을 확인하는 간단한 문제이다.

입력되는 문자열은 공백이 있으므로 getline() 함수를 사용하여 입력받는다.
문자열은 왼쪽부터 오른쪽까지 여는 괄호인 경우 스택에 넣고 닫는 괄호인 경우 스택의 top과 같은지 확인하여 검사한다.
top과 같은 경우 스택을 pop하고 계속 진행한다. top과 같지 않은 경우 검사를 종료하고 Illegal을 출력한다.
만약 문자열을 전체 검사하였는데 스택이 비어있지 않은 경우 Illegal을 출력하고 전체 검사를 하였고 스택도 비어있다면 Legal을 출력한다.

조건문을 반복하여 작성하면 코드가 길어지지만 메모리를 사용하지 않을 수 있다.
unordered_map을 사용하면 코드가 간결해지고 가독성이 올라가며 코드의 확장성이 올라가지만 추가적인 메모리를 사용하게 된다.

이 코드에서는 unordered_map을 사용하였다.
*/

/* English Problem Summary
- Question
You need to check if the parentheses in a multi-line code are correctly placed. To simplify, assume there are no parentheses inside quotation marks.
The parentheses to consider in this problem are three types: (), [], and []. The last line contains only the character #, and this line should be ignored.

Write a program that outputs "Legal" if the parentheses in each line are correctly placed, and "Illegal" if there are errors.

- Input
The input consists of multiple lines, and each line does not exceed 250 characters. The last input line contains only #, and this line should be ignored.

- Output
For each line of code, output "Legal" if there are no parentheses or they are correctly paired and nested. If there are errors, output "Illegal."

- Example
Input : 
void test(int num) { num = double(num); }
int count(int value) { return (value + 2; }
while(sum < 200) { sum += data[test(sum]); }
#
Output :
Legal
Illegal
Illegal
*/

/* English Comment
This problem involves checking if parentheses are correctly paired using a stack.

The input strings include spaces, so getline() is used to read the input. The string is processed from left to right.
When an opening bracket is encountered, it is pushed onto the stack. For closing brackets, the top of the stack is checked to see if it matches the corresponding opening bracket.
If the top of the stack matches the current closing bracket, the stack is popped, and the process continues.
If the top does not match, the check is stopped, and "Illegal" is printed. If the entire string has been checked and the stack is not empty, "Illegal" is printed.
If the string has been fully processed and the stack is empty, "Legal" is printed.

Writing conditions for each type of bracket separately can make the code longer but avoids extra memory usage.
Using an unordered_map simplifies the code, improves readability, and makes it easier to extend, though it does require additional memory.

In this solution, unordered_map is used to maintain a cleaner and more maintainable code structure.
*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<stack>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	unordered_map<char, char> pairsForBrackets;

	pairsForBrackets.insert({ ')','('});	// round
	pairsForBrackets.insert({ ']','[' });	// sqaure
	pairsForBrackets.insert({ '}','{' });	// curly

	while (true) {
		string line;
		getline(cin, line);

		if (line == "#")
			break;

		bool isLegal = true;

		stack<char>st;

		for (int i = 0; i < line.size(); i++) {
			if (line[i] == '(' || line[i] == '[' || line[i] == '{') {
				st.push(line[i]);
			}
			else if (line[i] == ')' || line[i] == ']' || line[i] == '}') {
				if (!st.empty() && st.top() == pairsForBrackets[line[i]]) {
					st.pop();
					continue;
				}
				else {
					isLegal = false;
					break;
				}		
			}
		}

		// Case: an open bracket has no matching pair
		if (st.size() > 0)
			isLegal = false;

		if (isLegal)
			cout << "Legal\n";
		else
			cout << "Illegal\n";
	}
}

//Finish