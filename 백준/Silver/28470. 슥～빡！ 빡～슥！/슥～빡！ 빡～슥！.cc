/*
- Title : 28470 - Swish~Whack! Whack~Swish!
- Start Time : 24-09-20, 04:53
- End Time : 24-09-20, 05:36
- Try : 5(1:int Size, 1 : Question Understanding, 2 : Floating-point error)
- Category : Floating-point, mathematics, comparison, Floating-point error
*/

/* 한국어 문제 요약
- 문제
복서는 항상 공격과 회피를 연속적으로 수행한다.
복서는 총 N번의 공격-회피 연속 동작을 통해 경기할 예정이다.

각 공격-회피 연속 동작에서 체내 아드레날린 변화량은 다음과 같은 규칙으로 정해진다.
i번째 공격-회피 연속 동작 상황에서, 공격 시에는 체내 아드레날린이 Ai만큼 증가하고, 회피 시에는 체내 아드레날린이 Bi만큼 감소한다.
만약 공격을 먼저 한다면, 공격 시 체내 아드레날린 증가량이 Ai에서 floor(Ai * Ki)로 바뀌고,
만약 회피를 먼저 한다면, 회피 시 체내 아드레날린 감소량이 Bi에서 floor(Bi * Ki)로 바뀐다.

경기 종료 시 최대 체내 아드레날린 양을 구하라. 경기 시작 시 복서의 체내 아드레날린 양은 0이다.

- 입력
첫째 줄에 연속 동작의 횟수 N이 주어진다. (1 <= N <= 100,000)
둘째 줄에 공격 시 체내 아드레날린 증가량을 나타내는 정수 Ai들이 공백으로 구분되어 주어진다. (10 <= Ai <= 1,000)
셋째 줄에 회피 시 체내 아드레날린 감소량을 나타내는 정수 Bi들이 공백으로 구분되어 주어진다. (10 <= Bi <= 1,000)
넷째 줄에 아드레날린 증가량과 감소량의 변화를 나타내는 실수인 Ki들이 공백으로 구분되어 소수점 아래 첫째 자리까지 주어진다. (0 < Ki <= 1,000)

- 출력
첫째 줄에 복서의 경기 종료 시 최대 체내 아드레날린 양을 출력한다.

- 예제
입력 1 : 
3
30 30 30
40 40 40
3.4 3.4 3.4
출력 1 :
186
입력 2 : 
5
11 22 33 44 55
111 99 88 77 66
1.1 1.2 1.3 1.4 1.5
출력 2 : 
-218
*/

/* 한국어 주석
이 문제는 구조가 간단하지만 몇 가지 함정이 있다.
먼저 문제를 해결하기 위해 필요한 변수를 한 번에 입력받아야 하므로, 메모리를 반드시 사용해야 한다.
이후 각 동작에서 현재 아드레날린 변화는 공격이 먼저인지, 회피가 먼저인지에 따라 다르게 계산된다.
공격 먼저 : floor(Ai * Ki) - Bi, 회피 먼저 : Ai - floor(Bi * Ki)
백준의 문제에서는 floor 표기가 대괄호처럼 보일 수 있으므로 주의한다.
또한, Ki가 1보다 작으면 Ai 또는 Bi가 작아지므로, 각 동작에서 <algorithm> 헤더의 max()함수를 사용하거나 회피를 먼저하는 식으로 코드를 작성한다.
두 가지 모두 테스트 해본 결과 max() 함수를 사용한 경우가 약간 더 빠른 성능을 보였다.

아레에서는, 문제에서 주의해야 할 함정들을 설명한다.
먼저 결과 값이 매우 커질 수 있으므로 long long 자료형이 필요하다.
두 번째로 Ki를 소수로 직접 받아서 계산하는 경우 부동소수점 오류가 발생 수 있다.
따라서 이 문제에서는 소수점 첫째 자리까지 필요하므로 10을 곱한 후 int 자료형에 저장하여 소수점 오류를 방지하고, 이후 계산할 때 다시 10으로 나누어 준다.
*/

/* English Problem Summary
- Question
A boxer always performs a combination of attack and dodge consecutively.
The boxer is scheduled to perform a total of N attack-dodge combinations in the match.

In each attack-dodge combination, the change in adrenaline levels follows these rules:
During the i-th attack-dodge combination, the adrenaline increases by Ai during the attack and decreases by Bi during the dodge.
If the boxer attacks first, the adrenaline increase during the attack changes from Ai to floor(Ai * Ki).
If the boxer dodges first, the adrenaline decrease during the dodge changes from Bi to floor(Bi * Ki).

Find the maximum adrenaline level at the end of the match. The boxer starts with an adrenaline level of 0.

- Input
The first line contains an integer N, the number of attack-dodge combinations. (1 <= N <= 100,000)
The second line contains integers Ai, representing the adrenaline increase during the attack, separated by spaces. (10 <= Ai <= 1,000)
The third line contains integers Bi, representing the adrenaline decrease during the dodge, separated by spaces. (10 <= Bi <= 1,000)
The fourth line contains floating-point numbers Ki, representing the changes in adrenaline increase and decrease, given to one decimal place and separated by spaces. (0 < Ki <= 1,000)

- Output
Print the maximum adrenaline level at the end of the match on the first line.

- Example
Input 1 :
3
30 30 30
40 40 40
3.4 3.4 3.4
Output 1 :
186
Input 2 :
5
11 22 33 44 55
111 99 88 77 66
1.1 1.2 1.3 1.4 1.5
Output 2 :
-218
*/

/* English Comment
This problem has a simple structure but includes a few pitfalls.
First, since the necessary variables must be input all at once to solve the problem, memory must be used.
Next, the adrenaline change in each action depends on whether the attack or dodge happens first.
If the attack happens first: floor(Ai * Ki) - Bi.
If the dodge happens first: Ai - floor(Bi * Ki).
Be careful when using floor in the problem, as in Baekjoon, it might be represented like brackets.
Additionally, if Ki is less than 1, Ai or Bi will decrease, so the code should either use the max() function from the <algorithm> header or handle dodging first.
After testing both approaches, using the max() function resulted in slightly better performance.

Below are some pitfalls to watch out for in this problem.
First, the result can be very large, so the long long data type is needed.
Second, when receiving Ki as a floating-point number and performing calculations, floating-point errors may occur.
Since the problem only requires one decimal place of precision, multiplying by 10 and storing the value as an integer can prevent floating-point errors,
and then dividing by 10 during calculations solves the issue.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;	// Number of rounds
	cin >> N;

	long long adrenaline = 0;

	vector<int> A(N);	// Adrenaline gain for attacking
	vector<int> B(N);	// Adrenaline loss for dodging
	vector<int> K(N);	// Modifier for switching actions

	// Input the values for A (attack gains)
	for (int i = 0; i < N; i++) 
		cin >> A[i];

	// Input the values for B (dodge losses)
	for (int i = 0; i < N; i++)
		cin >> B[i];

	// Input the values for K (modifiers)
	for (int i = 0; i < N; i++) {
		float k;
		cin >> k;
		K[i] = k * 10;	// To delete floating-point error
	}

	//for (int i = 0; i < N; i++) {
	//	//first attack
	//	if (K[i] >= 10)
	//		adrenaline += (A[i] * K[i]) / 10 - B[i];
	//	//first dodge
	//	else
	//		adrenaline += A[i] - (B[i] * K[i]) / 10;
	//}

	for (int i = 0; i < N; i++) {
		int firstAttack = (A[i] * K[i]) / 10 - B[i];
		int firstDodge = A[i] - (B[i] * K[i]) / 10;

		adrenaline += max(firstAttack, firstDodge);
	}

	cout << adrenaline;
}

//Finish