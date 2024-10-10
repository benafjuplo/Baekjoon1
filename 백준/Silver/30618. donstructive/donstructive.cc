/*
- Title : 30618 - donstructive
- Start Time : 24-10-10, 23:16
- End Time : 24-10-10, 23:30
- Try : 1
- Category : mathematics, greedy algorithm
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
순열은 1부터 N까지 N개의 정수가 각각 한 번씩 나오는 수열이다. 예를 들어, [1], [3, 5, 2, 1, 4], [1, 3, 2]는 순열이지만, [2, 3, 2], [4, 3, 1], [0]은 순열이 아니다.
순열의 점수는 다음과 같은 방법으로 구한다.
1. 순열의 모든 연속 부분 수열 각각에 대해 원소의 합을 구한다.
2. 순열의 점수는 (1)에서 구한 모든 값의 합이다.
길이가 N인 모든 순열 중에서 점수가 가장 높은 순열을 구하는 프로그램을 작성하시오. 만약 점수가 가장 높은 순열이 여러 가지라면 그 중 아무거나 하나를 출력한다.

- 입력
첫째 줄에 구하고자 하는 순열의 길이 N이 주어진다. (1 <= N <= 200,000)

- 출력
첫째 줄에 점수가 가장 높은 순열에 해당하는 N개의 정수를 공백으로 구분해서 출력한다.

- 예제
입력 : 
4
출력 :
2 3 4 1

- 힌트
연속 부분 수열은 수열의 연속한 일부분이다. 예를 들어, 순열[2, 3, 4, 1]은 10개의 연속 부분 수열을 갖고 있으며 이는 다음과 같다.
[2], [2, 3], [2, 3, 4], [2, 3, 4, 1], [3], [3, 4], [3, 4, 1], [4], [4, 1], [1].
*/

/* 한국어 주석
이 문제는 규칙에 맞는 순열을 찾는 문제이다.
이 문제에서 순열은 1부터 N까지 N개의 정수가 각각 한 번씩 나오는 수열을 의미한다.

연속 부분 수열들의 합이 가장 높은 순열을 찾기 위해서 슬라이딩 윈도우처럼 수열에 대해서 크기가 N인 순열의 연속 부분 수열들을 생각해보자.
크기가 1인 연속 부분 수열에 대해서는 모든 원소들이 한 번씩 사용된다.
크기가 2인 연속 부분 수열은 N-1개가 있는데 양쪽 끝의 원소는 다른 원소들과 달리 한 번만 연속 부분 수열에 포함된다.
크기가 3인 경우는 N-2개가 생성되는데 모든 원소가 세 번씩 포함되지만 양쪽 끝의 원소는 한 번, 양쪽 끝에서 한 칸 안쪽의 원소들은 두 번씩 밖에 포함되지 않는다.
결론적으로 연속 부분 수열을 만들 때 중앙에 가까운 원소가 더 많이 사용되고, 양쪽 끝으로 갈수록 점점더 적게 사용된다.
글로 표현하기에는 복잡하지만 슬라이딩 윈도우처럼 생각해보면 간단하게 알 수 있다.

위의 결론에 따라서 연속 부분 수열들의 합이 가장 높은 순열을 만들기 위해서 우리는 큰 숫자를 가운데에 배치하고 양쪽끝으로 갈수록 작은 값들을 배치해야한다.
그래프로 생각하면 가운데가 뾰족한 삼각형 형태가 된다.

이를 구현하기 위해, 가운데에 큰 값을 두고 좌우로 작은 값들이 배치되도록 반복문을 사용하여 왼쪽에는 홀수를 오름차순으로 오른쪽에는 짝수를 내림차순으로 출력하면 된다.
메모리를 별도로 할당하지 않고, 반복문으로 순서대로 출력하는 것이 효율적이다.
*/

/* English Problem Summary
- Question
A permutation is a sequence containing each integer from 1 to N exactly once.
For example, [1], [3, 5, 2, 1, 4], and [1, 3, 2] are permutations, but [2, 3, 2], [4, 3, 1], and [0] are not.
The score of a permutation is calculated as follows:
1. Find the sum of elements for each contiguous subsequence of the permutation.
2. The score of the permutation is the sum of all values obtained in step (1).

Write a program to find the permutation with the highest score among all permutations of length N.
If there are multiple permutations with the highest score, output any one of them.

- Input
The first line contains the length of the permutation N (1 ≤ N ≤ 200,000).

- Output
Print the N integers of the permutation with the highest score, separated by spaces.

- Example
Input :
4
Output : 
2 3 4 1

- Hint
A contiguous subsequence is a consecutive part of a sequence. For example, the permutation [2, 3, 4, 1] has 10 contiguous subsequences:
[2], [2, 3], [2, 3, 4], [2, 3, 4, 1], [3], [3, 4], [3, 4, 1], [4], [4, 1], [1].
*/

/* English Comment
This problem involves finding a permutation that meets specific criteria.
In this problem, a permutation refers to a sequence of N unique integers ranging from 1 to N.

To maximize the sum of contiguous subsequences in a permutation, consider the behavior of sequences similar to a sliding window over all subsequences of length N.
For subsequences of length 1, each element is used exactly once.
For subsequences of length 2, there are N-1 sequences, where the outermost elements are included only once.
For subsequences of length 3, there are N-2 sequences, with the central elements included three times,
while the outermost elements are included once, and the elements one position inside the ends are included twice.
In general, elements closer to the center appear more frequently, and those at the ends appear less frequently.
While this description may seem complex, the pattern becomes clear when visualized as a sliding window.

To create a permutation with the highest possible sum of contiguous subsequences, place larger numbers in the center and smaller numbers toward the ends.
Visualized as a graph, this arrangement resembles a triangle with a peak in the middle.

To implement this, use a loop to arrange larger values in the center, placing smaller values toward the sides.
Placing odd numbers in ascending order to the left and even numbers in descending order to the right maximizes efficiency,
as memory allocation is unnecessary, and values can be output in sequence.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	// Left side : odd - start : 1, end : N(if N is even, then N-1)
	// Output odd numbers in increasing order: 1, 3, 5, ...
	for (int i = 1; i <= N; i+=2) {
		cout << i << " ";
	}

	// Right side : start : N(if N is odd, then N-1), end : 2
	// Determine starting point for even numbers
	int i;
	// If N is even, start from N
	if (N % 2 == 0)
		i = N;
	// If N is odd, start from N - 1
	else
		i = N - 1;

	// Output even numbers in decreasing order: N, N - 2, N - 4, ...
	for (; i > 0; i -= 2) {
		cout << i << " ";
	}
}

//Finish