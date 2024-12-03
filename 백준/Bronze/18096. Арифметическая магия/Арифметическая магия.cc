/*
- Title : 18096 - Arithmetic Magic
- Start Time : 24-12-04, 01:28
- End Time : 24-12-04, 01:29
- Try : 1
- Category : mathematics
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
연산 마술이 있다. 관객은 두 숫자를 생각하고, 두 숫자에 각각 1씩 더한 수를 서로 곱한 다음, 첫 번째로 떠올린 수만큼 빼고,
두 번째로 떠올린 수만큼 빼고, 또 처음 떠올렸던 두 수의 곱만큼 뺀 후에, 그 결과를 N제곱한다.
N이 주어질 때 관객이 만들어낸 최종 수를 출력하는 프로그램을 작성하라.

- 입력
입력으로는 하나의 정수 N (1 <= N <= 1000)이 주어진다.

- 출력
관객이 생각하는 숫자를 출력한다.

- 예제
입력 :
3
출력 :
1
*/

/* 한국어 주석
이 문제는 수학적으로 문제를 해석하여 답을 찾는 문제이다.

관객이 생각한 두 숫자를 각각 a, b라고 하자. 문제에 따라서 최종 숫자는 ((a + 1)(b + 1) - a - b - ab)^N이다.
우선 (a + 1)(b + 1) = ab + a + b + 1이다.  따라서 최종 숫자는 1^N이고 결과는 a와 b에 상관없이 항상 1이다.
따라서 입력을 무시하고 1을 출력한다. 실제로 입력을 받지 않고 1을 출력하여도 정답 처리가 되고 TEXT로 1을 제출하여도 정답 처리된다.
*/

/* English Problem Summary
- Problem
There is an arithmetic trick. The audience thinks of two numbers, adds 1 to each, multiplies them, subtracts the first number, subtracts the second number, subtracts the product of the two numbers, and finally raises the result to the Nth power.
Given N, write a program to calculate the final number created by the audience.

- Input
The input consists of a single integer N (1 <= N <= 1000).

- Output
Print the number the audience calculates.

- Example
Input :
3
Output :
1
*/

/* English Comment
This problem involves interpreting the mathematical operation described in the problem statement to find the answer.

Let the two numbers the audience thinks of be a and b. According to the problem: Final Number = ((a + 1)(b + 1) - a - b - ab)^N
First, calculate (a + 1)(b + 1): (a + 1)(b + 1) = ab + a + b + 1
Thus, the expression simplifies to: (ab + a + b + 1) - a - b - ab = 1
Therefore, the result is 1^N = 1, regardless of the values of a, b, or N. The final number is always 1.
Consequently, regardless of the input N, the output is always 1. The program can simply output 1 without needing to process the input.
For example, even submitting just 1 as text would result in a correct solution.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	cout << 1;

	return 0;
}

//Finish