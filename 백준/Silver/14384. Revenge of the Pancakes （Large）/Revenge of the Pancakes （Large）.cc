/*
- Title : 14384 - Revenge of the Pancakes (Large)
- Start Time : 24-10-14, 22:35
- End Time : 24-10-14, 22:41
- Try : 1
- Category : greedy algorithm, string
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
팬케이크가 접시 위에 올여 있으며, 행복한 면은 +로, 반대편은 -로 표시된다.
모든 팬케이크를 +면이 위로 오도록 만드려 한다.

팬케이크가 접시 위에 올라간 형태를 스택처럼 본 팬캐이크 스택에서 원하는 층까지 들어올려 그 부분을 각각 뒤집는 것을 하나의 동작으로 본다.
이 동작을 반복하여 모든 팬케이크가 +면을 위로 향하게 할 때 필요한 최소 동작 횟수를 구하는 프로그램을 작성하라.

- 입력
첫 번째 줄에 테스트 케이스의 수 T가 주어진다. 
그 뒤에 T개의 테스트 케이스가 주어진다. 각 줄에는 문자열 S가 있는데, 각 문자는  + 또는  - 이다.
문자열은 왼쪽에서 오른쪽으로 읽을 때 위에서 아래로 볼 때 스택을 나타낸다.

- 출력
각 테스트 케이스마다, Case #x: y를 출력한다. 여기서 x는 테스트 케이스 번호(1부터 시작)이고, y는 모든 팬케이크가 +가 되기 위한 최소 동작 횟수이다.

- 제한
1 ≤ T ≤ 100.
문자열 S의 모든 문자는 + 또는 - 이다.
1 ≤ S의 길이 ≤ 100.

- 예제
입력 : 
5
-
-+
+-
+++
--+-
출력 : 
Case #1: 1
Case #2: 1
Case #3: 2
Case #4: 0
Case #5: 3
*/

/* 한국어 주석
이 문제는 문자열을 이용하는 문제이다.

문제에서 설명한 형태로 스택을 만들어 직접 시뮬레이션 할 수도 있지만, 문자열을 활용하면 더 쉽고 빠르게 구현할 수 있다.
각 케이스의 문자열 S에 대해, '+' 와 '-'로 이루어진 연속된 묶음들을 찾고 개수를 샌다.
문자열의 마지막의 +인 경우 그 개수를 하나 뺀다.

실제로 묶음을 직접 세지 않고, <string> 라이브러리의 find_first_not_of() 함수를 사용하는 것이 좋다.
*/

/* English Problem Summary
- Question
There is a stack of pancakes on a plate. Each pancake has a happy side marked with + and an unhappy side marked with -.
The goal is to make all pancakes face the + side up.
Consider the stack of pancakes as a stack where each layer can be flipped, from the top down to a desired level, in one move.
Write a program to determine the minimum number of moves required to make all pancakes face the + side up.

- Input
The first line contains the number of test cases, T.
Each of the following T lines contains a string S representing a stack of pancakes, where each character is either + or -.
When reading the string S from left to right, it represents a stack of pancakes viewed from top to bottom.

- Output
For each test case, output Case #x: y, where x is the test case number (starting from 1), and y is the minimum number of moves required to make all pancakes face the + side up.

- Constraint
1 ≤ T ≤ 100
Each character in S is either + or -.
1 ≤ length of S ≤ 100

- Example
Input :
5
-
-+
+-
+++
--+-
Output :
Case #1: 1
Case #2: 1
Case #3: 2
Case #4: 0
Case #5: 3
*/

/* English Comment
This problem involves working with a string.

While it is possible to simulate the pancake stack as described in the problem, using a string directly is simpler and faster.
For each test case, find and count the contiguous groups of + and - characters in the string S.
If the last character in the string is +, subtract one from the count.

Rather than counting groups manually, using the <string> library function find_first_not_of() is recommended for efficiency.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		string line;
		cin >> line;

		size_t pos = line.find_first_not_of(line[0]);

		int cnt = 1;
		while (pos != string::npos) {
			pos = line.find_first_not_of(line[pos], pos);
			cnt++;
		}

		if (line.back() == '+')
			cnt--;

		cout << "Case #" << i << ": " << cnt << "\n";
	}
}

//Finish