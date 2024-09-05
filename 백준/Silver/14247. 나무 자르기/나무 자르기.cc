/*
- Title : 14247 - Cutting Trees
- Start Time : 24-09-05, 23:47
- End Time : 24-09-06, 00:04
- Try : 3(1 : Typo, 1 : Size of int)
- Category : long long, sorting, greedy algorithm
*/

/* 한국어 문제 요약
- 문제
산에는 n개의 나무가 있는며, 매일 하루에 한 나무씩 n일 동안 산에 오르며 나무를 자른다.
나무들은 밤만 되면 매우 빠른 속도로 자라며, 자라는 길이는 나무마다 다르다.
나무의 처음 길이와 하루에 자라는 양이 주어졌을 때, 얻을 수 있는 최대 나무 양을 구하시오.
자른 이후에도 나무는 0부터 다시 자라기 때문에 같은 나무를 여러 번 자를 수는 있다.

- 입력
첫째 줄에는 나무의 개수 n이 주어진다.
다음 줄에는 첫날 올라갔을 때 나무의 길이들 Hi가 n개 순서대로 주어진다.
그 다음 줄에는 나무들이 자라는 길이 Ai가 n개 순서대로 주어진다.

- 출력
나무를 잘라서 구할 수 있는 최대 양을 출력하시오.

- 제한
1 <= n <= 100,000
1 <= Hi <= 100,000
1 <= Ai <= 10,000

- 예제
입력 :
5
1 3 2 4 6
2 7 3 4 1
출력 : 
64
*/

/* 한국어 주석
이 문제는 문제의 예제를 이용하여 힌트를 얻을 수도 있다. 아래의 설명과 함께 직접 예제의 결과를 얻어보면 쉽게 이해할 수 있다.

문제의 조건을 잘 생각해보자. 우리는 N일 동안 매일 나무를 한 그루씩 자를 것이다. 또한 나무의 개수는 N개이다. 그렇기에 모든 나무를 자를 수 있다.
문제에서 같은 나무를 여러 번 자를 수 있다고 언급되었지만 모든 나무는 최소 '1'만큼 자라기에 '0'이된 나무를 다시 자를 이유는 없다.
만약 그 나무가 매우 큰 성장폭을 가지고 있다고 하여도 마찬가지이다. 그 이유는 아래에서 설명한다.

문제를 단순화해서 생각해보자. 3개의 나무가 있다. 처음 나무 길이는 1 2 100  성장폭은 100 2 1이다. 그러면 무엇을 먼저 잘라야 할까? 간단히 생각해보면 알 수 있듯이 성장폭이 큰 나무를 나중에 잘라야 한다.
왜냐하면 자를 수 있는 나무 양의 차이는 성장폭의 차이로 인한 것이기 때문이다.
성장폭이 큰 나무를 계속해서 자르는 것이 가장 커 보일 순 있지만 다시 생각해보면 그 성장폭이 큰 나무를 마지막에 자르면 한번에 그 성장폭을 얻을 수 있다.
그렇기에 첫 날에는 성장폭이 가장 작은 나무를 그 다음 날에는 그 다음으로 성작폭이 작은 나무를 자르고 이를 마지막 날까지 반복하면 된다.

이를 구현하는 것은 여러 방법이 있다.
방법에 따라 다양한 컨테이너가 가능하고, 여기선 pair<int, int>의 벡터를 사용하여 pair의 첫 번째 요소에는 나무의 시작 길이로 두 번째 요소에는 나무의 성장폭을 입력받았다.
이를 <algorithm>의 헤더로 정렬하였는데 pair<int, int>는 사용자 정의 함수를 정렬 기능에 넣어 주어야 한다. 간단히 람다 함수(익명 함수)를 사용하였다.
이후 정렬된 벡터를 위의 규칙을 이용하여 더하여 출력하면 된다.

문제의 제한 범위가 넓어 숫자가 매우 커질 수 있으므로 long long 자료형이 필요하다.
*/

/* English Problem Comment
- Question
There are n trees on a mountain, and you climb the mountain for n days, cutting one tree each day.
The trees grow very quickly overnight, but the growth rate differs for each tree.
Given the initial height of each tree and the amount it grows daily, calculate the maximum amount of wood you can obtain.
Since trees grow back from zero after being cut, you can cut the same tree multiple times.

- Input
The first line contains the number of trees n.
The second line contains the initial heights of the trees Hi in order.
The third line contains the daily growth rates of the trees Ai, also in order.

- Output
Print the maximum amount of wood you can obtain by cutting the trees.

- Constraints
1 <= n <= 100,000
1 <= Hi <= 100,000
1 <= Ai <= 10,000

- Example
Input :
5
1 3 2 4 6
2 7 3 4 1
Output :
64
*/

/* English Comment
This problem can also provide hints by utilizing the example provided.
By obtaining the result of the example directly and following the explanation below, you can understand the problem more easily.

Think carefully about the conditions of the problem.
We will cut down one tree each day for N days. Additionally, there are N trees, so we can cut all the trees.
Although the problem mentions that the same tree can be cut multiple times, there is no reason to cut a tree again once it reaches '0' because every tree grows by at least 1.
Even if the tree has a significant growth rate, the reasoning remains the same, which I will explain below.

Let's simplify the problem. Suppose there are 3 trees. The initial heights of the trees are 1, 2, and 100, and their growth rates are 100, 2, and 1, respectively.
So, which tree should be cut first? As you can easily guess, the tree with the largest growth rate should be cut last.
This is because the difference in the amount of wood you can obtain is due to the difference in growth rates.

While it might seem like continuously cutting the tree with the largest growth rate would yield the most wood,
if you reconsider, cutting the tree with the largest growth rate last allows you to get that full growth amount in one cut.
Therefore, on the first day, you should cut the tree with the smallest growth rate, then the next tree with the next smallest growth rate on the following day, and so on until the last day.

There are several ways to implement this.
Various containers are possible depending on the approach, but here I used a vector of pair<int, int>,
where the first element of the pair represents the initial height of the tree, and the second element represents the tree's growth rate.
This vector is sorted using the <algorithm> header. Since pair<int, int> requires a custom comparison function for sorting, I used a simple lambda function (anonymous function).

After sorting the vector, you can sum up the results according to the above rules and output the final result.

Due to the wide range of the problem's constraints, the numbers can become very large, so using the long long data type is necessary.
*/


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int numberOfTrees;
	
	cin >> numberOfTrees;

	int numberOfDays = numberOfTrees;

	vector<pair<int, int>> trees(numberOfTrees, { -1,-1 });	// pair's first is height of trees and pair's second is growth of trees

	for (int i = 0; i < numberOfTrees; i++) {
		cin >> trees[i].first;
	}

	for (int i = 0; i < numberOfTrees; i++) {
		cin >> trees[i].second;
	}

	sort(trees.begin(), trees.end(), [](pair<int, int>& a, pair<int, int>& b) {return a.second > b.second; });		// We don't need to consider cases where a.second equals b.second, because the number of trees is equal to the number of days in this problem.

	long long choppedTree = 0;

	for (int i = 0; i < numberOfDays; i++) {
		choppedTree += (long long)trees[i].first + (long long)trees[i].second * ((long long)numberOfDays - i - 1);		// The reason for '-1' is that growth only occurs for up to the number of days - 1.
	}

	cout << choppedTree;
}

//Finish