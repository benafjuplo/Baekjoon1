/*
- Title : 18674 - The Minions Quiz
- Start Time : 24-11-23, 23:51
- End Time : 24-11-23, 23:58
- Try : 1
- Category : greedy algorithm, bitwise operation
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
A개의 AND(&) 연산자, B개의 OR(|) 연산자, 그리고 (A + B + 1)개의 정수가 주어진다.
주어진 음이 아닌 정수 사이에 '&'와 '|' 연산자를 삽입하여 순서를 변경하지 않고 얻을 수 있는 최대 숫자를 찾는 프로그램을 작성하라.
단, 연산은 왼쪽에서 오른쪽으로 처리해야 한다.

- 입력
입력의 첫 번째 줄에는 단일 정수 T가 주어진다. T는 테스트 케이스의 개수(1 ≤ T ≤ 100)이고, 그 뒤에 T개의 테스트 케이스가 입력된다.
각 테스트 케이스는 두 줄로 구성된다. 첫 번째 줄에는 각각 AND(&)와 OR(|) 연산자의 개수를 나타내는 두 정수 A와 B(0 ≤ A, B ≤ 10,000)가 포함된다.
두 번째 줄에는 공백으로 구분된 (A + B + 1)개의 64비트 음이 아닌 정수가 주어진다.

- 출력
각 테스트 케이스에 대해 주어진 정수 사이에 연산자를 삽입하여 얻을 수 있는 최대 숫자를 한 줄에 출력한다.

- 예제
입력 :
2
1 1
1 4 5
2 2
2 3 11 4 5
출력 : 
5
7
*/

/* 한국어 주석
이 문제는 AND와 OR 연산자를 주어진 숫자들의 사이에 삽입하여 얻을 수 있는 최대 계산 값을 찾는 문제이다.

AND와 OR 연산자의 특징을 생각해보면 AND 연산은 결과값이 원래 숫자보다 같거나 줄어들고, OR 연산은 원래 숫자보다 같거나 커진다.
따라서 AND 연산자를 모두 처리한 후 OR 연산자를 처리하면 된다.

또한 64비트 음이 아닌 정수가 주어지므로 unsigned long long을 사용해야 한다.
하지만 int 자료형으로 제출했을 때 정답처리 되었으므로 작성 시점 기준으로 문제에 대한 적절한 테스트 케이스가 포함되지 않은 것으로 보인다.
*/

/* English Problem Summary
- Problem
Given A AND(&) operators, B OR(|) operators, and (A + B + 1) non-negative integers, determine the maximum number that can be obtained by inserting the operators between the integers without rearranging them. The operations must be performed from left to right.

- Input
The first line of input contains a single integer T, the number of test cases (1 ≤ T ≤ 100). This is followed by T test cases.
Each test case consists of two lines:
The first line contains two integers, A and B, representing the number of AND(&) and OR(|) operators respectively (0 ≤ A, B ≤ 10,000).
The second line contains (A + B + 1) 64-bit non-negative integers separated by spaces.

- Output
For each test case, output a single line containing the maximum number that can be obtained.

- Example
Input :
2
1 1
1 4 5
2 2
2 3 11 4 5
Output :
5
7
*/

/* English Comment
This problem involves finding the maximum computed value by inserting AND and OR operators between given numbers.

Considering the properties of the AND and OR operators:
The AND operator results in a value less than or equal to the original numbers.
The OR operator results in a value greater than or equal to the original numbers.

Thus, applying all the AND operators first and then applying the OR operators yields the maximum value.

Since the input consists of 64-bit non-negative integers, the unsigned long long data type should be used.
However, when the int data type was used during submission, the solution was accepted. This suggests that at the time of writing, the problem's test cases may not adequately cover edge cases.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		int numberAND, numberOR;
		cin >> numberAND >> numberOR;

		unsigned long long result;

		cin >> result;

		// first, process AND operation
		while (numberAND--) {
			unsigned long long n;
			cin >> n;
			result = result & n;
		}

		// second, process OR operation
		while (numberOR--) {
			unsigned long long n;
			cin >> n;
			result = result | n;
		}
		
		cout << result << "\n";
	}
	
	return 0;
}

//Finish