/*
- Title : 24262 - Algorithm Class - Execution Time of Algorithms 1
- Start Time : 24-09-18, 01:01
- End Time : 24-09-18, 01:01
- Try : 1
- Category : simple, basid, running time
*/

/* 한국어 문제 요약
- 문제
입력의 크기 n이 주어질 때, MenOfPassion 알고리즘의 수행 시간을 예제 출력과 같은 방식으로 출력하시오.
MenOfPassion 알고리즘은 다음과 같다.
MenOfPassion(A[], n) {
	i = floor(n / 2);
	return A[i]; # 코드1
}

- 입력
첫째 줄에 입력의 크기 n(1 <= n <= 500,000)이 주어진다.

- 출력
첫째 줄에 코드1의 수행 횟수를 출력한다.
둘째 줄에 코드1의 수행 횟수를 다항식으로 나타내었을 때, 최고차항의 차수를 출력한다.
단, 다항식으로 나타낼 수 없거나 최고차항의 차수가 3보다 크면 4를 출력한다.

- 예제
입력 :
1
출력 : 
1
0
*/

/* 한국어 주석
이 문제는 주어진 알고리즘의 실행 횟수를 구하는 문제이다.
알고리즘은 입력 값과 상관없이 항상 1번만 실행된다.
따라서 입력 값과 상관없이 코드1의 수행 횟수는 1이고 최고차항의 차수는 0이다.
*/

/* English Problem Summary
- Question
Given the input size n, output the execution time of the MenOfPassion algorithm in the same format as the example output.
The MenOfPassion algorithm is defined as follows:
MenOfPassion(A[], n) {
	i = floor(n / 2);
	return A[i]; # Code1
}

- Input
The first line contains an integer n (1 ≤ n ≤ 500,000), representing the input size.

- Output
On the first line, print the number of times Code1 is executed.
On the second line, print the degree of the highest term in the polynomial that represents the number of executions of Code1.
If the polynomial cannot be expressed or the degree of the highest term is greater than 3, print 4.

- Example
Input :
1
Output :
1
0
*/

/* English Comment
This problem involves calculating the number of executions of the given algorithm.
The algorithm always executes exactly once, regardless of the input size.
Therefore, the number of executions of Code1 is 1, regardless of the input, and the degree of the highest term is 0.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int n;
	cin >> n;

	cout << 1 << "\n" << 0;
}

//Finish