/*
- Title : 6749 - Next in line
- Start Time : 24-12-21, 21:09
- End Time : 24-12-21, 21:11
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
세 아이의 나이는 산술적 수열을 이룬다. 가운데 아이와 가장 어린 아이의 나이 차이는 가장 나이 많은 아이와 가운데 아이의 나이 차이와 같다.
가장 어린 아이와 가운데 아이의 나이가 주어질 때, 가장 나이 많은 아이의 나이를 구하시오.

- 입력
입력은 두 개의 정수로 구성되며, 각각 별도의 줄에 주어진다.
첫 번째 줄은 가장 어린 아이의 나이 \( Y \)이다. (\( 0 \leq Y \leq 50 \))
두 번째 줄은 가운데 아이의 나이 \( M \)이다. (\( Y \leq M \leq 50 \))

- 출력
가장 나이 많은 아이의 나이를 출력한다.

- 예제
입력 : 
12
15
출력 : 
18
*/

/* 한국어 주석
M+M-Y를 출력한다 문제가 매우 쉬우므로 추가적인 설명은 생략한다.
*/

/* English Problem Summary
- Problem
The ages of three children form an arithmetic sequence.
The age difference between the middle child and the youngest child is equal to the age difference between the oldest child and the middle child.
Given the ages of the youngest child and the middle child, find the age of the oldest child.

- Input
The input consists of two integers, each given on a separate line.
The first line is the age of the youngest child Y (0 <= Y <= 50).
The second line is the age of the middle child M (Y <= M <= 50).

- Output
Print the age of the oldest child.

- Example
Input :
12
15
Output :
18
*/

/* English Comment
Print M + M - Y. The problem is very simple, so no additional explanation is provided.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int Y, M;
	cin >> Y >> M;
	cout << M + M - Y;

	return 0;
}

//Finish