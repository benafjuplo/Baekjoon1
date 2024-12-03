/*
- Title : 26574 - Copier
- Start Time : 24-12-04, 00:15
- End Time : 24-12-04, 00:17
- Try : 1
- Category : string, simple, basic
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
N개의 줄이 있고, 각 줄에 숫자가 하나씩 있다. 각 줄에 대하여 숫자와 공백을 출력한 다음, 숫자 복사본을 출력한다.

- 입력
첫 번째 줄에는 뒤에 나올 숫자의 개수를 나타내는 단일 정수 n이 주어지며, 다음 n개의 줄에는 각각 숫자가 하나씩 주어진다.

- 출력
n개 줄 각각에 원래 숫자와 숫자 복사본을 한 칸 공백으로 구분하여 출력한다.

- 예제
입력 1 :
3
7
3
10
출력 1 :
7 7
3 3
10 10
*/

/* 한국어 주석
문자열을 이용해서 간단히 출력을 반복한다.
숫자로 받아서 구현할 수도 있지만 조건이 주어지지 않았으므로 안전하게 문자열을 사용한다.
*/

/* English Problem Summary
- Problem
There are N lines, and each line contains a single number. For each line, print the number followed by a space and a copy of the number.

- Input
The first line contains a single integer n, which indicates the number of numbers that follow. The next n lines each contain a single number.

- Output
Print n lines, where each line contains the original number followed by a space and a copy of the number.

- Example
Input 1 :
3
7
3
10
Output 1 :
7 7
3 3
10 10
*/

/* English Comment
Use strings to easily repeat the output.
While it is possible to implement using numbers, strings are a safer choice as no specific constraints are provided.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	while (N--) {
		string str;
		cin >> str;
		cout << (str + " " + str) << "\n";
	}

	return 0;
}

//Finish