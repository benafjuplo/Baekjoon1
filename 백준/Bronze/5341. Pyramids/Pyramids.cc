/*
- Title : 5341 - Pyramids
- Start Time : 24-12-08, 04:58
- End Time : 24-12-08, 05:01
- Try : 1
- Category : mathematics, simple, basic, sum of arithmetic sequence, elementary arithmetic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
바닥이 n개인 블록 피라미드는 맨 아래층에 n개의 블록, 그 위층에 n-1개의 블록이 쌓이며, 이러한 방식으로 위로 올라가며 꼭대기가 1개 블록으로 구성된다.
n이 주어질 때, 해당 블록 피라미드를 만드는 데 필요한 총 블록의 개수를 계산하라.

- 입력
입력은 한 줄에 하나의 정수가 주어진다. 입력의 끝은 정수 0으로 표시되며, 피라미드의 밑면을 나타내지 않는다. 마지막 0을 제외한 모든 정수는 양수이다.

- 출력
각 양의 정수에 대해, 해당 밑면 크기를 가진 피라미드를 만드는 데 필요한 총 블록의 개수를 한 줄씩 출력한다.

- 힌트
예를 들어, 바닥 크기가 4인 피라미드는 총 10개의 블록이 필요하다.

- 예제
입력 : 
4
6
0
출력 : 
10
21
*/

/* 한국어 주석
이 문제는 주어진 밑면 크기에 따라 피라미드에 필요한 블록의 개수를 계산하는 문제이다.
반복문을 사용하여 합을 구할 수도 있지만, 등차수열의 합 공식을 사용하는 것이 더 효율적이다.

등차수열의 합 공식은 S = n * (n + 1) / 2이다.
이를 이용하면 밑면이 n인 피라미드에 필요한 블록의 총 개수를 빠르게 계산할 수 있다.

문제에서 입력 범위가 명시되지 않았지만, 주어진 조건에서는 int 자료형으로 해결 가능하다.
*/

/* English Problem Summary
- Problem
A pyramid of blocks with a base of n consists of n blocks on the bottom layer, n-1 blocks on the layer above, and so on, up to the top layer with 1 block.
Given n, calculate the total number of blocks required to construct such a pyramid.

- Input
The input consists of a series of integers, each on a new line.
The input ends with a single 0, which does not represent a pyramid base. All other integers are positive.

- Output
For each positive integer, output the total number of blocks required to construct a pyramid with that base size, each on a new line.

- Hint
For example, a pyramid with a base size of 4 requires a total of 10 blocks.

- Example
Input :
4
6
0
Output :
10
21
*/

/* English Comment
This problem involves calculating the number of blocks needed to construct a pyramid based on the given base size.
A loop can be used to compute the sum, but using the formula for the sum of an arithmetic sequence is more efficient.

The formula for the sum of an arithmetic sequence is S = n * (n + 1) / 2.
Using this formula allows for a quick calculation of the total number of blocks required for a pyramid with a base size of n.

Although the input range is not explicitly stated, the problem can be solved using the int data type under the given conditions.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	while (n != 0) {
		cout << n * (1 + n) / 2 << "\n";
		cin >> n;
	}

	return 0;
}

//Finish