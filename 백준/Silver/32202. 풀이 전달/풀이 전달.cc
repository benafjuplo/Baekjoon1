/*
- Title : 32202 - Solution Delivery
- Start Time : 24-10-15, 19:22
- End Time : 24-10-15, 20:00
- Try : 1
- Category : dynamic programming, modular arithmetic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
교실에 2N명의 학생들이 있다. 한 줄에 두 명씩 짝을 지어 앞뒤로 총 N줄로 앉아 있다.
교사는 학생들에게 문제의 풀이를 전달하려고 한다.
모든 학생들은 교사 또는 짝꿍으로부터 풀이를 들어야 하며, 연속된 두 줄 중 적어도 한 줄에서는 짝꿍에게의 풀이 전달이 일어나야 한다.
이 조건을 만족할 때 교사가 학생을 부를 수 있는 경우의 수를 구하는 프로그램을 작성하라.
값이 클 수 있으니 10^9 + 7로 나눈 나머지를 출력한다.

- 입력
첫 번째 줄에 자연수 N이 주어진다.

- 출력
교사가 학생을 부를 수 있는 경우의 수를 10^9 + 7로 나눈 나머지를 출력한다.

- 제한
N은 정수이다.
1 <= N <= 1,000,000

- 예제
입력 1 :
1
출력 1 :
3
입력 2 : 
2
출력 2 :
8
*/

/* 한국어 주석
이 문제는 다이나믹 프로그래밍을 이용해 경우의 수를 구하는 문제이다.

우선 풀이 방법은 크게 두 가지이다.

첫 번째 방법은 각 짝궁들의 상태를 O와 T으로 구분한다.
O는 교사가 학생 한 명에게 알려 준 경우이다. 각각 한명 씩 부를 수 있으므로 2가지 경우이다.
T는 교사가 학생 두 명을 모두 부른 경우이다. 한 가지의 경우의 수 밖에 없다.
이전의 O와 T에 대해서 prevO, prevT라고 하고 현재의 O와 T를 currO, currT라고 하자.
currO는 이전이 prevP와 prevT인 경우 모두에서 가능하고 2가지 경우가 있을 수 있다. 그러므로 currO = (prevP + prevT) * 2가 된다.
currT는 이전이 prevO인 경우에만 가능하다. 따라서 currO = prevO이다.
이 때 1의 경우에 맞추기 위하여 prevO = 1, prevT = 0으로 초기값을 정한다.

두 번째 방법은 각 아무 규칙 없이 교사가 학생들을 부르는 경우의 수에다가 규칙에 의해 제외되어야 하는 경우를 빼는 것이다.
우선 아무 규칙 없이 교사가 학생들을 부르는 경우는 3^N이다.
규칙에 의해 제외되어야 하는 경우를 notAllowed, 규칙에 의해 부를 수 있는 경우를 allowed라고 하자.
이전의 상태를 prev 접두사를 붙이고 현재의 상태를 curr 접두사를 붙여서 표현하자.
currNotAllowed는 prevNotAllowed 앞에 새로운 짝들이 불리는 모든 경우가 포함된다. 즉 currNotAllowed = prevNotAllowed * 3
추가로 currNotAllowed는 처음 두 짝꿍 쌍들이 모두 불리는 경우(총 4명) 이후 학생 한 명이 오고 다음에 prevPrevPrevAllowed인 경우의 수가 포함된다.
이것을 정리하면 2 * prevPrevPrevAllowed이다
따라서 currNotAllowed = prevNotAllowed * 3 + 2 * prevPrevPrevAllowed이다.
현재 상태는 다음과 같이 구할 수 있다. currAllowed = 3^N - currNotAllowed;

숫자가 작다면 이대로 바로 구현가능하겠지만 두 방법 모두 모듈러 연산의 분배법칙을 잘 활용하여 수식에 포함해야 한다.

두 방법 중 첫 번째 방법이 두 번째 방법보다 약간 효율적이다.
특히 두 번째 방법은 3^N을 <cmath> 라이브러리를 사용하지 않고 직접해야 한다.
두 번째 방법은 프로그램 뒤에 주석으로 남겨두었다.
*/

/* English Problem Summary
- Question
There are 2N students in a classroom, seated in N rows with two students per row (one in front and one behind).
The teacher wants to pass down the solution to a problem to all students.
Every student must receive the solution either directly from the teacher or from their partner, and in every pair of consecutive rows,
at least one row should have students passing the solution between partners.
Write a program to count the number of ways the teacher can deliver the solution while meeting these conditions.
The result may be large, so output the remainder of the count when divided by 10^9 + 7.

- Input
The first line contains a natural number N.

- Output
Print the number of ways the teacher can call on students, modulo 10^9 + 7.

- Constraint
N is an integer.
1 ≤ N ≤ 1,000,000

- Example
Input 1 :
1
Output 1 :
3
Input 2 :
2
Output 2 :
8
*/

/* English Comment
This problem requires calculating combinations using dynamic programming.

There are two main approaches to solve it.

Approach 1: Define each pair of students' states as O and T.

O represents the case where the teacher has told one student in the pair, so there are 2 ways (since each can be called individually).
T represents the case where the teacher has called both students, which has only 1 way.
Using prevO and prevT to represent the previous states and currO and currT for the current ones:

currO can occur if the previous states were either prevO or prevT, with 2 possible ways for each. Thus, currO = (prevO + prevT) * 2.
currT can occur only if the previous state was prevO, so currT = prevO.
To handle the initial case for 1 student pair, set prevO = 1 and prevT = 0.

Approach 2: Subtract the combinations that do not meet the conditions from the total possible cases without constraints.

First, the total number of ways to call students without constraints is 3^N.
Define notAllowed for invalid cases and allowed for valid cases, using prev and curr prefixes to track the states.
currNotAllowed combines all possible ways where the previous sequence was prevNotAllowed with 3 new possibilities: currNotAllowed = prevNotAllowed * 3.
Additionally, if all initial pairs of students are called (4 students), and a new student joins followed by valid configurations (prevPrevPrevAllowed),
then currNotAllowed includes this by adding 2 * prevPrevPrevAllowed.
Thus, currNotAllowed = prevNotAllowed * 3 + 2 * prevPrevPrevAllowed.
The current state is then calculated as currAllowed = 3^N - currNotAllowed.

With smaller numbers, either approach can be implemented directly. However, for large inputs, incorporate modular arithmetic efficiently into each formula.
The first approach is slightly more efficient than the second, particularly because 3^N would need to be calculated directly without <cmath> functions.
An implementation of the second approach is included in the code comments.
*/

#include <iostream>

using namespace std;

const int MOD = 1000000007;

int main() {
	int N;
	cin >> N;

	// Initialize dp variables
	long long prevO = 1; // dp[0][O]
	long long prevT = 0; // dp[0][T]
	long long currO, currT;

	for (int i = 1; i <= N; ++i) {
		// Calculate current dp values
		currO = (prevO + prevT) * 2 % MOD;
		currT = prevO % MOD;

		// Update previous dp values for the next iteration
		prevO = currO;
		prevT = currT;
	}

	// Total ways is sum of dp[N][O] and dp[N][T]
	long long totalWays = (prevO + prevT) % MOD;
	cout << totalWays << '\n';

	return 0;
}

//Finish

//Solution 2

//#include<iostream>
//
//using namespace std;
//
//int main() {
//	cin.tie(0);
//	cout.tie(0);
//	ios_base::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	const unsigned int MOD = 1'000'000'000 + 7;
//
//	if (N == 1) {
//		cout << 3;
//		return 0;
//	}
//	
//	if (N == 2) {
//		cout << 8;
//		return 0;
//	}
//
//	int prevNotAllowed = 1;
//	int currNotAllowed = 1;
//
//	int prevPrevPrevAllowed = 1;
//	int prevPrevAllowed = 3;
//	int prevAllowed = 8;
//	int currAllowed = 1;
//
//	long long exponential3 = 3 * 3;
//
//	for (int i = 3; i <= N; i++) {
//		currNotAllowed = (3 * prevNotAllowed % MOD);								// 3(left 1, right 1, both) * notAllowed[i - 1]
//		currNotAllowed += (2 * prevPrevPrevAllowed) % MOD;							// 1(both * 2) * 2(left 1, right 1) * Allowed[i-3]
//		currNotAllowed %= MOD;
//
//		exponential3 *= 3;
//		exponential3 %= MOD;
//		currAllowed = (exponential3 - currNotAllowed + MOD) % MOD;
//
//		prevNotAllowed = currNotAllowed;
//		
//		prevPrevPrevAllowed = prevPrevAllowed;
//		prevPrevAllowed = prevAllowed;
//		prevAllowed = currAllowed;
//	}
//
//	cout << currAllowed;
//}