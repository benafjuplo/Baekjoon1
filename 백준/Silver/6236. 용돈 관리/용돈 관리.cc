/*
- Title : 6236 - Allowance Management
- Start Time : 24-09-07, 02:53
- End Time : 24-09-07, 03:29
- Try : 1
- Category : binary search, parametric search
*/

/* 한국어 문제 요약
- 문제
N일 동안 사용할 금액이 주어진다. 통장에는 무한한 돈이 있다고 가정한다. 시작할 때 남은 돈은 없다.
현재 돈으로 하루를 보낼 수 있으면 그대로 사용하고, 모자라게 되면 남은 금액은 통장에 집어넣고 새로 K원을 인출한다.
정확히 M번 인출하고 싶을 때 인출해야 할 최소 금액 K를 구하시오.
단, 인출 횟수를 맞추기 위해 남은 금액이 그날 사용할 금액보다 많더라도 남은 금액을 통장에 넣고 다시 인출할 수 있다.

- 입력
1번째 줄에는 N과 M이 공백으로 주어진다. (1 <= N <= 100,000, 1 <= M <= N)
2번째 줄부터 총 N개의 줄에는 i번째 날에 이용할 금액이 주어진다. (1 <= 금액 <= 10000)

- 출력
첫 번째 줄에 통장에서 인출해야 할 최소 금액 K를 출력한다.

- 예제
입력 : 
7 5
100
400
300
100
500
101
400
출력 : 
500
*/

/* 한국어 주석
이 문제는 수학적 원리보다는 이진 탐색을 사용하는 문제이다.
주어진 문제에서 돈은 많아도 10000 * 100000 = 10^9이 최대이다(int 범위 내). 따라서 0 ~ 10^9의 범위를 이진 탐색하여 최소값을 찾는다.
하지만 단순 이진 탐색이 아니라 탐색하고자 하는 값이 조건에 맞는지 확인할 판별 함수가 필요하다.
판별 함수는 문제의 조건에 맞게 선형적으로 만들 수 있다.
여기서는 판별 함수를 간단하게 만들기 위해 이진 탐색의 범위를 제한하였다. 이 때 매일의 지출 중 최댓값이 필요한 데 이때 비교연산 혹은 max_element()를 사용해야 한다.
만약 지출 중 최댓값을 사용하지 않고 모든 경우에 대하여 0, 10^9 범위의 이진 탐색을 하는 코드를 작성하더라도 크게 성능이 개선될 것이라고 생각되지 않는다.
*/

/* English Problem Summary
- Question
You are given the amounts of money you need to spend over N days. Assume there is unlimited money in the bank, but you start with no money.
If you have enough money to cover a day's expenses, you simply use it. If you don't have enough, you deposit the remaining money back into the bank and withdraw a new amount K.
You want to withdraw money exactly M times. Determine the minimum amount K you need to withdraw.
Note that even if you have leftover money that exceeds the amount needed for a day, you can still deposit the remaining money and make a new withdrawal to meet the required number of withdrawals.

- Input
The first line contains N and M, separated by a space. (1 <= N <= 100,000, 1 <= M <= N)
The next N lines contain the amount of money needed for each of the N days. (1 <= amount <= 10,000)

- Output
Print the minimum withdrawal amount K in the first line.

- Example
Input :
7 5
100
400
300
100
500
101
400
Output :
500
*/

/* English Comment
This problem is not about applying a mathematical principle but rather about using binary search.
In the given problem, the maximum amount of money is 10000 * 100000 = 10^9 (within the integer range).
Therefore, we perform a binary search over the range from 0 to 10^9 to find the minimum value.
However, instead of a simple binary search, a decision function is required to check if the current value being searched meets the conditions.
This decision function can be constructed linearly to match the conditions of the problem.
To simplify the decision function, the range of the binary search is restricted.
In this case, you need the maximum of the daily expenses, which can be obtained using comparison operations or the max_element() function.
Even if we were to write a code that performs binary search over the entire range from 0 to 10^9 without using the maximum of the expenses, it's unlikely that the performance would improve significantly.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool calculateMoney(const vector<int>& expense, const int& N, const int& M, const int& money) {
	int count = 0;	// count of withdrawal
	int currentMoney = 0;
	for (int i = 0; i < N; i++) {
		// if current money is less than today's expense, withdraw a new amount of K
		if (currentMoney < expense[i]) {
			count++;
			currentMoney = money;
		}
		// if count is already more than M, break
		if (count > M)
			break;
		currentMoney -= expense[i];
	}
	// If count is equal or less than M, we can make M.
	if (count <= M)
		return true;
	else
		return false;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<int> expense(N);

	int maxExpense = 0;

	for (int i = 0; i < N; i++) {
		cin >> expense[i];
		maxExpense = max(expense[i], maxExpense);
	}

	int left = maxExpense;
	int right = maxExpense * N;		// The int type can handle this problem (maximum result = 10^9)
	int mid = (left + right) / 2;

	//Binary Search
	while (left <= right) {
		mid = (left + right) / 2;

		//Debug
		//cout << "left : " << left << ", right : " << right << ", mid : " << mid << "\n";

		if (calculateMoney(expense, N, M, mid)) {
			if (right == mid)
				break;
			right = mid;
		}

		else {
			left = mid + 1;
		}
	}
	
	cout << mid;
}

//Finish