/*
- Title : 3733 - Shares
- Start Time : 24-11-24, 19:26
- End Time : 24-11-24, 19:26
- Try : 1
- Category : EOF, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
N명의 사람들과 ACM 수석 판사가 S 주식을 동등하게 나누어 가진다(반드시 전부 나누지 않아도 됨). x는 각 사람이 취득한 주식 수이며, x는 정수여야 한다. 이 문제는 x의 최대값을 계산하는 것이다.
입력 텍스트 파일에서 정수 쌍을 읽는 프로그램을 작성하라. 각 쌍에는 1 ≤ N ≤ 10000과 1 ≤ S ≤ 10^9 의 값이 순서대로 포함된다.
입력 데이터는 공백으로 구분되고, 파일 끝(EOF)으로 끝난다. 각 숫자 쌍에 대해 프로그램은 x의 최대값을 계산하고 아래 예제와 같이 줄의 시작 부분에서 표준 출력에 해당 값을 출력한다.

- 예제
입력 : 
1 100
2 7
10 9
10 10
출력 : 
50
2
0
0
*/

/* 한국어 주석
이 문제는 N과 S를 EOF가 입력될 때까지 입력받아, S/(N+1)을 출력하는 단순한 문제이다.
아래와 같이 구현하면 간단하게 해결할 수 있다.
단, EOF의 특성상 직접 예제를 입력하면 프로그램이 종료되지 않을 수 있다.
*/

/* English Problem Summary
- Problem
Each of the N people and the ACM Chief Judge shares S stocks equally (it’s not necessary to divide them all).
x is the number of stocks acquired by each person, and x must be an integer. This problem is to calculate the maximum value of x.
Write a program that reads pairs of integers from an input text file. Each pair contains values of N and S in order, where 1 ≤ N ≤ 10,000 and 1 ≤ S ≤ 10^9.
The input data is space-separated and ends with EOF. For each pair, the program should calculate the maximum value of x and output it at the beginning of each line, as shown in the example.

- Example
Input :
1 100
2 7
10 9
10 10
Output :
50
2
0
0
*/

/* English Comment
This problem is a simple one where N and S are input continuously until EOF, and the output is S/(N+1).
It can be easily solved with the implementation below.
However, due to the nature of EOF, directly inputting examples may cause the program to not terminate.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);
	
	int N, S;

	while (cin >> N >> S) {
		cout << S / ++N << "\n";
	}

	return 0;
}

//Finish