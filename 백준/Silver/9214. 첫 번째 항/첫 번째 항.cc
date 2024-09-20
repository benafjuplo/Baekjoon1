/*
- Title : 9214 - First Term
- Start Time : 24-09-20, 09:00
- End Time : 24-09-20, 09:28
- Try : 1
- Category : string
*/

/* 한국어 문제 요약
- 문제
다음과 같은 규칙이 있다.

어떤 항이 있을 때 다음 항을 만드는 방법은 현재 항을 같은 숫자들로 구분되도록 쪼갠 후, 각 숫자가 반복되는 횟수를 앞에 붙이는 것이다.
예를 들어 21은 "한 개의 2, 한 개의 1"이므로 다음 항은 1211이 된다. 이와 같은 규칙에 따라서 111221 뒤에는 312211이 오게 된다(세 개의 1, 두 개의 2, 한 개의 1).

다음 항뿐 아니라 이전 항도 알아낼 수 있다.
2221은 그 자체로 "두 개의 2, 두 개의 1"이 있었다는 뜻이므로 이전 항은 2211이다. 또한 2211의 이전 항도 221임을 알 수 있다.

그런데 221의 이전 항은 존재하지 않는다. 왜냐면 이 값을 정보로 나타낼 수 있는 수가 없기 때문이다.
또한 2212도 이전 항이 없는데, "두 개의 2, 한 개의 2"인 수는 222인데 이 수의 다음 항은 2212가 아니라 32여야 하기 때문이다.

어떤 항이 주어졌을 때, 위 규칙을 따르면서 이 항이 존재하는 수열의 첫 번째 항을 찾아내는 프로그램을 작성하시오.
첫 번째 항은 절대 이전 항이 존재하지 않는다. 예를 들어 문제가 2221이면 답은 221이고, 문제가 312211이면 답은 1이다. 22처럼 이전 항이 자신과 동일할 경우는 예외로 그 자신이 첫 번째 항이 될 수 있다.

- 입력
입력은 여러 개의 테스트 케이스로 이루어져 있다. 각 줄에 걸쳐 최대 100글자의 정수 n이 주어지며, 입력의 끝은 0으로 주어진다.

- 출력
각 n마다 첫 번째 항을 줄마다 양식에 맞춰서 출력한다.

- 예제
입력 : 
2221
312211
22
0
출력 : 
Test 1: 221
Test 2: 1
Test 3: 22
*/

/* 한국어 주석
이 문제는 주어진 항을 기준으로 문제의 규칙에 따라서 첫 번째 항을 찾는 문제이다.
문제에서 주어진 조건만 고려하면 되므로, 추가적인 조건을 고민할 필요는 없다.

입력을 숫자로 받을 수도 있겠지만, 여기서는 문자열로 받아서 처리하였다.

첫 번째 항의 조건은 이전 항이 존재하지 않거나, 반복되는 항인 경우이다.
우선 이전 항이 존재하지 않은 경우에 대해서는 문자열이 홀수인 경우와 규칙에서 앞과 뒤의 반복되는 숫자가 똑같은 경우(예 : 2212)이다.
만약 이전항이 존재하지 않으면 그대로 항을 출력한다.
이전 항이 있다면 주어진 규칙에 따라 새로운 항을 생성한다. 만약 생성한 항이 반복되는 경우라면 역시 첫 번째 항이므로 항을 출력한다.
그렇지 않은 경우 위 과정을 반복하여 첫 번째 항을 찾는다.

이 문제의 경우 main() 함수에 직접 구현하기보다는 사용자 정의 함수를 작성하는 것이 프로그램 작성 시 편리하다.
*/

/* English Problem Summary
- Question
There is a sequence defined by the following rule:

To generate the next term in the sequence, the current term is broken down into groups of the same digits, and then the count of each digit is placed in front of it.
For example, for 21, the next term is 1211 because there is "one 2 and one 1." According to this rule, 111221 is followed by 312211 (which means "three 1s, two 2s, and one 1").

It is also possible to find the previous term.
For example, 2221 implies "two 2s and two 1s," so the previous term is 2211. Moreover, the previous term of 2211 is 221.

However, the sequence does not always have a previous term.
For instance, 221 does not have a previous term because there is no valid sequence that describes this number.
Similarly, 2212 does not have a previous term because it would imply "two 2s and one 2," but the next term for 222 should be 32, not 2212.

Given a term in the sequence, write a program to find the first term of the sequence, following the rules above.
The first term does not have a previous term. For example, if the input is 2221, the output should be 221, and if the input is 312211, the output should be 1.
Note that if the previous term is the same as the current term, as in the case of 22, it is considered the first term.

- Input
The input consists of multiple test cases. Each line contains an integer n with up to 100 digits. The input ends with a 0.

- Output
For each n, print the first term of the sequence on a new line in the required format.

- Example
Input :
2221
312211
22
0
Output :
Test 1: 221
Test 2: 1
Test 3: 22
*/

/* English Comment
This problem involves finding the first term of the sequence based on the given term and following the rules outlined in the problem.
Since only the conditions provided in the problem need to be considered, there is no need to worry about additional constraints.

Although the input could be processed as a number, in this case, it was handled as a string.

The conditions for the first term are either that the previous term does not exist, or the term is a repeating one.
First, a term has no previous term if the string has an odd length or if the repeating digits at the front and back of the term are the same (e.g., 2212).
If no previous term exists, the term is printed as it is.
If a previous term exists, a new term is generated based on the given rules. If the newly generated term is a repeating one, it is also considered the first term and is printed.
If not, the process is repeated to find the first term.

In this problem, it is more convenient to implement a user-defined function rather than writing the logic directly in the main() function.
*/

#include<iostream>
#include<string>

using namespace std;

// Check if there is a previous term. If there is no previous term, return true.
bool isFirstTerm(string str) {
	// If string length is odd, it's the first term.
	if (str.size() % 2 == 1)
		return true;

	// Check for cases like 2212 where there's no valid previous term
	for (int i = 0; i < str.size(); i += 2) {
		if (i + 3 < str.size() && str[i + 1] == str[i + 3]) {
			return true;
		}
	}

	return false;
}

// Make previous term
string makePreviousTerm(string str) {
	string result;

	for (int i = 0; i < str.size(); i += 2) {
		int cnt = str[i] - '0';
		char c = str[i + 1];
		while (cnt--) {
			result.push_back(c);
		}
	}

	return result;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	for (int i = 1; str != "0"; i++) {
		string newStr;
		while (true) {
			//First Term : a term of odd size, a term without previous term
			if (isFirstTerm(str)) {
				cout << "Test " << i << ": " << str << "\n";
				break;
			}
			else {
				newStr = makePreviousTerm(str);
				//First Term : repeat term
				if (newStr == str) {
					cout << "Test " << i << ": " << str << "\n";
					break;
				}
				str = newStr;
			}
		}
		cin >> str;
	}
}

//Finish