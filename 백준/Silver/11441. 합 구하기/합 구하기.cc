/*
- Title : 11441 - Calculating the Sum
- Start Time : 24-10-19, 23:01
- End Time : 24-10-19, 23:10
- Try : 1
- Category : prefix sum
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
N개의 수 A1, A2, ..., AN이 입력으로 주어진다. 총 M개의 구간 i, j가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.

- 입력
첫째 줄에 수의 개수 N이 주어진다. (1 ≤ N ≤ 100,000) 둘째 줄에는 A1, A2, ..., AN이 주어진다. (-1,000 ≤ Ai ≤ 1,000)
셋째 줄에는 구간의 개수 M이 주어진다. (1 ≤ M ≤ 100,000) 넷째 줄부터 M개의 줄에는 각 구간을 나타내는 i와 j가 주어진다. (1 ≤ i ≤ j ≤ N)

- 출력
총 M개의 줄에 걸쳐 입력으로 주어진 구간의 합을 출력한다.

- 예제
입력 1 : 
5
10 20 30 40 50
5
1 3
2 4
3 5
1 5
4 4
출력 1 :
60
90
120
150
40
입력 2 :
3
1 0 -1
6
1 1
2 2
3 3
1 2
2 3
1 3
출력 2 : 
1
0
-1
1
-1
0
*/

/* 한국어 주석
이 문제는 주어진 수열에서 특정 구간의 합을 효율적으로 구하는 문제이다.

요구하는 구간들의 수가 매우 크므로 매번 직접 구하면 시간 초과가 발생할 수 있다.

따라서 구간 합 배열을 미리 계산해두고 i~j까지의 구간 합을 1~j까지의 구간 합에서 1~i-1까지의 구간 합을 빼는 방식으로 계산할 수 있다.
이 방식을 사용하면 따로 원래 수열을 보관할 필요가 없다.

구현 시 엣지 케이스인 1에 대해서 주의한다.

문제에서 주어진 값들은 모두 int 범위 내이므로 자료형은 int를 사용해도 된다.
*/

/* English Problem Summary
- Question
Given N numbers A1, A2, ..., AN as input, the task is to compute the sum of the numbers between the i-th and j-th number for a total of M intervals i, j.

- Input
The first line contains the number of elements, N. (1 ≤ N ≤ 100,000)
The second line contains the numbers A1, A2, ..., AN. (-1,000 ≤ Ai ≤ 1,000)
The third line contains the number of intervals, M. (1 ≤ M ≤ 100,000)
From the fourth line onward, M lines follow, each containing the interval i and j. (1 ≤ i ≤ j ≤ N)

- Output
For each of the M intervals, output the sum of the numbers in the specified range.

- Example
Input 1 :
5
10 20 30 40 50
5
1 3
2 4
3 5
1 5
4 4
Output 1 :
60
90
120
150
40
Input 2 :
3
1 0 -1
6
1 1
2 2
3 3
1 2
2 3
1 3
Output 2 :
1
0
-1
1
-1
0
*/

/* English Comment
This problem involves efficiently calculating the sum of elements in specific intervals of a given sequence.

Since the number of required intervals is large, directly calculating the sum for each interval would likely result in a time limit exceeded error.

To solve this, a prefix sum array can be precomputed.
Using this array, the sum of elements from i to j can be found by subtracting the prefix sum of elements from 1 to i-1 from the prefix sum of elements from 1 to j.
This eliminates the need to traverse the array repeatedly for each interval.

Edge cases, particularly for the first element (i=1), should be handled carefully.

Given the problem's constraints, all values will remain within the bounds of the int type, so no additional precautions regarding data types are necessary.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	
	vector<int> prefixSums(N+1,0);						// 1-base indexing, initialized to 0
	for (int i = 1; i <= N; i++) {
		int A;
		cin >> A;
		prefixSums[i] = A + prefixSums[i - 1];			// Compute prefix sum on the fly
	}

	int M;
	cin >> M;

	while (M--) {
		int i, j;
		cin >> i >> j;
		cout << prefixSums[j] - prefixSums[i-1] << "\n";	// Answer queries using prefix sums
	}
}

//Finish