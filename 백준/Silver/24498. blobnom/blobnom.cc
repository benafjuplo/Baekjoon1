/*
- Title : 24498 - bolbnom
- Start Time : 24-10-31, 15:01
- End Time : 24-10-31, 15:24
- Try : 3(1 : leftmost value, 1 : rightmost value)
- Category : mathematics, greedy algorithm
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
블롭들은 서로를 이용해 N개의 탑을 만들었다. 각 탑의 높이는 그 탑에 있는 블롭의 수와 같다.

다음 행동을 0회 이상 할 수 있다.
1. 처음과 마지막이 아닌 탑 중 하나를 선택한다. 단, 선택한 탑과 인접한 두 탑의 높이가 모두 1 이상이어야 한다.
2. 선택한 탑과 인접한 두 탑에 있는 블롭을 한 마리씩 각각 땅에 내려놓는다. 즉, 인접한 두 탑의 높이가 모두 1만큼 감소한다.
3. 땅에 내려놓은 두 마리의 블롭 중 하나의 블롭만 1.에서 선택한 탑에 쌓는다. 즉, 선택한 탑의 높이가 1만큼 증가한다.

이 과정에서 이전에 인접하지 않았던 두 탑이 새롭게 인접하게 되지는 않는다. 만들 수 있는 가장 높은 탑의 높이를 구하는 프로그램을 작성하라.

- 입력
첫째 줄에 탑의 개수 N이 주어진다.
둘째 줄에 각 탑의 높이 A1, A2, ..., AN이 공백으로 구분되어 주어진다.

- 출력
문제의 정답을 출력한다.

- 제한
1 <= N <= 10^6
1 <= Ai <= 10^9 (1 <= i <= N)

- 예제
입력 1 : 
4
1 3 2 2
출력 1 :
4
입력 2 :
5
2 4 3 5 5
출력 2 :
8

- 힌트
예제 1은 아래와 같은 과정을 거치면 가장 높은 탑의 높이가 4가 된다.
[1, 3, (2), 2]
[1, 2, (3), 1]
[1, 1,  4,  0]
소괄호 친 수는 각 과정에서 선택한 탑의 블롭 수이다.
가장 높은 블롭 탑의 높이를 4로 만드는 다른 방법이 있을 수 있음에 유의하라.
*/

/* 한국어 주석
이 문제는 왼쪽부터 오른쪽까지 차례로 규칙에 맞춰 계산해가며 최댓값을 구하는 문제이다.

우선 맨 왼쪽과 맨 오른쪽은 연산을 수행할 수 없다.
따라서 N이 1 혹은 2인 경우에는 각각 그대로 출력, 왼쪽과 오른쪽 중에 큰 값을 출력한다.

N이 3이상인 경우는 맨 왼쪽과 오른쪽을 제외하고 연산을 수행할 수 있다.
이 연산은 잘 생각해보면 가운데 값에 대해서 계속해서 연산하는 것이 그 가운데 값에서의 최대값이다.
따라서 왼쪽부터 오른쪽까지 mid + min(left, right)를 계산한 후 최댓값을 확인하면 된다.
또한 맨 왼쪽과 맨 오른쪽 값은 연산을 수행하지 못함에도 최댓값일 수도 있기 때문에 비교에 포함해야 한다.

계속해서 최댓값만 찾으면 되므로 메모리 사용은 필요없다.

문제의 범위는 int 자료형 범위 내이므로 int 자료형을 사용하여 해결 가능하다.
*/

/* English Problem Summary
- Question
The blobs have used each other to create N towers. The height of each tower corresponds to the number of blobs in that tower.

The following action can be performed zero or more times:
1. Select any tower that is neither the first nor the last tower. The two towers adjacent to the selected tower must each have a height of at least 1.
2. Remove one blob each from the two adjacent towers, meaning the heights of these adjacent towers each decrease by 1.
3. Place one of the two blobs removed from the ground onto the initially selected tower, increasing its height by 1.

Throughout this process, no two towers that were previously non-adjacent become adjacent. Write a program that finds the maximum possible height of a tower.

- Input
The first line contains the integer N, the number of towers.
The second line provides the heights of the towers,A1, A2, ..., AN, separated by spaces.

- Output
Print the answer to the problem.

- Constraint
1 <= N <= 10^6
1 <= Ai <= 10^9 (1 <= i <= N)

- Example
Input 1 :
4
1 3 2 2
Output 1 :
4
Input 2 :
5
2 4 3 5 5
Output 2 :
8

- Hint
In Example 1, the highest tower can be created with a height of 4 through the following steps:
[1, 3, (2), 2]
[1, 2, (3), 1]
[1, 1,  4,  0]

The numbers in parentheses indicate the height of the selected tower in each step.
Note that there may be other ways to achieve a highest tower of 4.
*/

/* English Comment
This problem involves calculating the maximum value by iterating from left to right according to given rules.

First, note that no operation can be performed on the leftmost and rightmost elements.
Thus, if N is 1 or 2, the answer is simply the value itself or the larger of the two values, respectively.

For N >= 3, operations can be performed on the elements between the leftmost and rightmost elements.
These operations essentially revolve around continuously updating the middle element with the result of mid + min(left, right).
Calculating this from left to right will yield the maximum possible value for the middle element.
Additionally, since the leftmost and rightmost values cannot be modified but might still be the maximum value, they should also be included in the final comparison.


Since only the maximum value needs to be found, additional memory is unnecessary.

The problem constraints fit within the range of the int data type, so int can be used to solve the problem effectively.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int left, mid, right;
	if (N == 1) {
		cin >> left;
		cout << left;
		return 0;
	}
	if (N == 2) {
		cin >> left >> right;
		cout << max(left, right);
		return 0;
	}

	cin >> left >> mid >> right;

	int result = max(max(left, right), mid + min(left, right));

	for (int i = 0; i < N - 3; ++i) {
		left = mid;
		mid = right;
		cin >> right;
		result = max(result, mid + min(left, right));
	}

	result = max(result, right);

	cout << result;

	return 0;
}

//Finish