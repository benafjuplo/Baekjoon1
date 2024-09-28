/*
- Title : 1015 - Sequence Sorting
- Start Time : 24-09-28, 18:??
- End Time : 24-09-28, 19:05
- Try : 1
- Category : sorting
*/

/* 한국어 문제 요약
- 문제
P[0], P[1], ..., P[N-1]은 0부터 N-1까지(포함)의 수를 한 번씩 포함하고 있는 수열이다.
수열 P를 길이가 N인 배열 A에 적용하면 길이가 N인 배열 B가 된다. 적용하는 방법은 B[P[i]] = A[i]이다.
배열 A가 주어졌을 때, 수열 P를 적용한 결과가 비내림차순이 되는 수열을 찾는 프로그램을 작성하시오.
비내림차순이란, 각각의 원소가 바로 앞에 있는 원소보다 크거나 같을 경우를 말한다.
만약 그러한 수열이 여러개라면 사전순으로 앞서는 것을 출력한다.

- 입력
첫째 줄에 배열 A의 크기 N이 주어진다. 둘째 줄에는 배열 A의 원소가 0번부터 차례대로 주어진다.
N은 50보다 작거나 같은 자연수이고, 배열의 원소는 1,000보다 작거나 같은 자연수이다.

- 출력
첫째 줄에 비내림차순으로 만드는 수열 P를 출력한다.

- 예제
입력 1 : 
3
2 3 1
출력 1 : 
1 2 0
입력 2 : 
4
2 1 3 1
출력 2 :
2 0 3 1
입력 3 : 
8
4 1 6 1 3 6 1 4
출력 3 : 
4 0 6 1 3 7 2 5
*/

/* 한국어 주석
이 문제는 문제의 의미를 해석하면 쉽게 해결할 수 있다.

먼저 수열 A가 주어진다.
이 수열 A를 비내림차순(같은 값를 포함한 오름차순)으로 정렬하고 sorted A(혹은 B)라고 하자.
B[P[i]]가 A[i]가 되게 하는 수열을 찾아야 한다. 즉 정렬된 A를 원래 상태로 만드는 수열 P를 찾는 문제이다.

일단 sorted A는 A를 <algorithm> 헤더의 sort()함수를 사용하여 정렬한다.
이 후 이중 반복문을 사용하여 선형 탐색으로 원래 순서로 변경하기 위한 위치를 찾아서 P[i]에 저장한다.
이 때 사용된 위치를 표시하기 위하여 해당 값을 -1로 변경한다.

마지막으로 수열 P를 출력한다.
*/

/* English Problem Summary
- Question
P[0], P[1], ..., P[N-1] is a sequence that contains all numbers from 0 to N-1 exactly once.
When the sequence P is applied to an array A of length N, it results in an array B of the same length. The application is done by setting B[P[i]] = A[i].
Given an array A, write a program to find a sequence P such that the resulting sequence B is non-decreasing.
A non-decreasing sequence means that each element is greater than or equal to the previous one.
If there are multiple such sequences, output the lexicographically smallest one.

- Input
The first line contains an integer N, the size of array A.
The second line contains the elements of array A in order, from index 0 to N-1.
N is a natural number less than or equal to 50, and the elements of the array are integers less than or equal to 1,000.

- Output
Print the sequence P that makes the resulting array B non-decreasing.

- Example
Input 1 :
3
2 3 1
Output 1 :
1 2 0
Input 2 :
4
2 1 3 1
Output 2 :
2 0 3 1
Input 3 :
8
4 1 6 1 3 6 1 4
Output 3 :
4 0 6 1 3 7 2 5
*/

/* English Comment
This problem can be easily solved by interpreting the meaning of the problem.

First, the sequence A is given.
Sort this sequence A in non-decreasing order (ascending order including equal values) and call the sorted version sorted A (or B).
The task is to find a sequence P such that B[P[i]] = A[i], i.e., to find the sequence P that rearranges the sorted A back into the original sequence A.

First, sorted A is obtained by using the sort() function from the <algorithm> header to sort A.
Then, a nested loop is used to perform a linear search to find the positions required to restore the original order and store them in P[i].
To mark the used positions, the corresponding values are changed to -1.

Finally, the sequence P is printed.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	vector<int> A(N);	// A

	//Input
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}

	vector<int> sortedA = A;			// sorted A, B
	sort(sortedA.begin(), sortedA.end());

	vector<int>result(N);	// P

	// Linear Search
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N;++j) {
			if (A[i] == sortedA[j]) {
				result[i] = j;
				sortedA[j] = -1;
				break;
			}
		}
	}

	//Output
	for (int i = 0; i < N; ++i) {
		cout << result[i] << " ";
	}
}

//Finish