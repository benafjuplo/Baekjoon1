/*
- Title : 22351 - Math is a P.E. Subject 3
- Start Time : 24-10-30, 13:20, 18:46, 24-10-31, 11:47
- End Time :   24-10-30, 13:30, 19:30, 24-10-31, 12:03
- Try : 3(2 : Difficult Approach)
- Category : string, parsing, substr, stoi
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
A 이상 B 이하의 정수를 공백없이 덧붙여 만든 문자열이 있다.
예를 들어 A = 4, B = 21 일 경우, 문자열은 456789101112131415161718192021이 된다.
A와 B는 모두 1 이상 999 이하의 정수이고, A는 B보다 작거나 같다.

위의 규칙에 따라 생성된 문자열이 주어질 때 A와 B를 구하는 프로그램을 작성하라.

- 입력
문제의 규칙대로 구성된 문자열 S가 주어진다. S는 숫자(0123456789)로만 이루어져 있으며, 길이는 1 이상 2,889 이하이다.

- 출력
두 정수 A와 B를 공백으로 구분하여 출력하라. 만약 가능한 답이 두 가지 이상이라면, 그중 A가 가장 작은 것을 출력하라.
항상 문제의 조건을 만족하는 답이 존재하는 입력만이 주어진다.

- 예제
입력 1 :
9101112
출력 1 :
9 12
입력 2 : 
12
출력 2 : 
1 2
입력 3 :
999
출력 3 :
999 999
입력 4 :
456789101112131415161718192021
출력 4 :
4 21
*/

/* 한국어 주석
이 문제는 문자열과 숫자를 적절히 서로 변환하여 조건에 맞는지 확인하는 문제이다.

문제 조건이 매우 까다롭다면 직접 변환하지 않고 수학적으로 접근하는 것이 더 나을 수 있다.
하지만 매우 복잡하게 구현 방식이 필요하고, 이 문제의 조건에서는 필요하지 않다.

이 문제의 경우 주어진 조건이 경우의 수를 매우 줄여주고 있다.
일단 정답이 없는 경우는 없고 1~999 사이의 숫자이다.
따라서 문자열 길이로 따지면 1, 2, 3인 경우 밖에 없다.
만약 문자열 길이가 1, 2인 경우를 모두 탐색한다면 자동으로 정답은 문자열 길이가 3인 경우로 정해진다.

구현 방법은 조금 복잡하기에 주의가 필요하다.
*/

/* English Problem Summary
- Question
A string is formed by concatenating integers from A to B without spaces.
For example, if A = 4 and B = 21, the resulting string is 456789101112131415161718192021.
Both A and B are integers between 1 and 999, with A less than or equal to B.

Given this string, write a program to determine values of A and B.

- Input
The input is a string S that was created according to the rule above. S consists of digits (0123456789) and has a length between 1 and 2,889.

- Output
Print the two integers A and B separated by a space. If there is more than one possible answer, output the smallest possible A.
Only inputs that satisfy the problem's conditions will be given.

- Example
Input 1 :
9101112
Output 1 :
9 12
Input 2 :
12
Output 2 :
1 2
Input 3 :
999
Output 3 :
999 999
Input 4 :
456789101112131415161718192021
Output 4 :
4 21
*/

/* English Comment
This problem involves verifying a range of numbers concatenated into a single string to identify values that match a specific rule.

The complexity of conditions could suggest a mathematical approach rather than direct conversions, but with the given constraints, direct verification suffices.

In this case, conditions limit possible values significantly.
There is always a solution within the 1 to 999 range, meaning each number length is constrained to either 1, 2, or 3 digits.
Checking all cases for numbers with 1 or 2 digits will naturally limit valid answers to cases where numbers are 3 digits long.

The implementation requires careful planning due to the complexity of managing number concatenations and matching against various lengths, so attention to detail is essential.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	int strSize = str.size();

	int resultA = 0;
	int resultB = 0;

	// Case : A is 1~99 and strSize is not 1 or 2
	for (int baseSize = 1; baseSize <= 2;++baseSize) {
		int A = stoi(str.substr(0, baseSize));
		resultA = A;
		int usedSize = baseSize;
		while (true) {
			if(++A>999)
				break;
			int newASize = to_string(A).size();
			usedSize += newASize;

			if (usedSize > strSize)
				break;

			if (A != stoi(str.substr(usedSize-newASize, newASize)))
				break;
			
			if (usedSize == strSize) {
				resultB = A;
				break;
			}
		}
		if (resultB != 0)
			break;
	}

	if (resultB == 0) {
		if (strSize == 1) {
			cout << stoi(str.substr(0, 1)) << " " << stoi(str.substr(0, 1));
			return 0;
		}
		if (strSize == 2) {
			cout << stoi(str.substr(0, 2)) << " " << stoi(str.substr(0, 2));
			return 0;
		}
		cout << stoi(str.substr(0, 3)) << " " << stoi(str.substr(strSize-3, 3));
		return 0;
	}
	else {
		cout << resultA << " " << resultB;
		return 0;
	}

	return 0;
}

//Finish