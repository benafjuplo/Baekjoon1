/*
- Title : 19941 - Hamburger Distribution
- Start Time : 24-10-06, 12:11, 13:??
- End Time : 24-10-06,   12:50, 13:41
- Try : 2(1 : Wrong approach)
- Category : greedy algorithm
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
기다란 벤치 모양의 식탁에 사람들과 햄버거가 아래와 같이 단위 간격으로 놓여 있다. 사람들은 자신의 위치에서 거리가 K 이하인 햄버거를 먹을 수 있다.
식탁의 길이 N, 햄버거를 선택할 수 있는 거리 K, 사람과 햄버거의 위치가 주어졌을 때, 햄버거를 먹을 수 있는 사람의 최대 수를 구하는 프로그램을 작성하시오.

- 입력
첫 줄에 두 정수 N과 K가 있다. 그리고 다음 줄에 사람과 햄버거의 위치가 문자 P(사람)와 H(햄버거)로 이루어지는 길이 N인 문자열로 주어진다.

- 출력
첫 줄에 햄버거를 먹을 수 있는 최대 사람 수를 나타낸다.

- 제한
1 <= N <= 20,000
1 <= K <= 10

- 예제
입력 1:
20 1
HHPHPPHHPPHPPPHPHPHP
출력 1:
8
입력 2:
20 2
HHHHHPPPPPHPHPHPHHHP
출력 2:
7
*/

/* 한국어 주석
이 문제는 식탁의 상태가 주어질 때, 햄버거를 먹을 수 있는 사람의 최대 수를 구하는 문제이다.

문제의 해결법은 식탁을 왼쪽에서 오른쪽으로 탐색하며 사람인 경우 K범위 내에 있는 햄버거를 왼쪽부터 찾아서 먹도록 한다. 이때, 먹은 것을 표기하기 위하여 'E'로 바꾸어준다.

문자열을 사용하면 입력이 간단해지고 가독성이 좋다.
대신에 char자료형 vector를 사용하면 메모리 사용이 감소한다.

잘못된 접근법을 주석으로 남겨 두었다.
*/

/* English Problem Summary
- Question
A long, bench-shaped table has people and hamburgers placed at unit intervals as follows.
People can eat a hamburger if the distance between their position and a hamburger's position is less than or equal to K.
Given the length of the table N, the maximum distance K within which a person can choose a hamburger,
and the positions of people and hamburgers, write a program to find the maximum number of people who can eat a hamburger.

- Input
The first line contains two integers N and K.
The next line contains a string of length N consisting of characters 'P' (person) and 'H' (hamburger) representing the positions of people and hamburgers.

- Output
Print the maximum number of people who can eat a hamburger.

- Constraint
1 <= N <= 20,000
1 <= K <= 10

- Example
Input 1:
20 1
HHPHPPHHPPHPPPHPHPHP
Output 1:
8
Input 2:
20 2
HHHHHPPPPPHPHPHPHHHP
Output 2:
7
*/

/* English Comment
This problem requires finding the maximum number of people who can eat a hamburger, given the state of the table.

The solution involves scanning the table from left to right.
When encountering a person, search for a hamburger within the range K, starting from the leftmost available one, and mark it as eaten by replacing it with 'E'.

Using a string makes the input simple and improves readability.
Alternatively, using a char vector reduces memory usage.

A wrong approach has been commented out for reference.
*/

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
//#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	// N : Length of table, K : Selectable distance
	int N, K;
	cin >> N >> K;
	
	// Better memory usage than string, but decrease readability
	vector<char> table(N);
	for (int i = 0; i < N; i++) {
		cin >> table[i];
	}

	//string table;
	//cin >> table;
		
	int cnt = 0;	// Maximum number of people who can eat

	for (int i = 0; i < N; i++) {
		if (table[i] == 'P') {
			int start = max(i - K, 0);
			int condition = min(i + K, N - 1);
			// Search K range
			for (int j = start; j <= condition; j++) {
				if (table[j] == 'H') {
					table[j] = 'E';	// Mark as eaten
					cnt++;
					break;	// Move to the next person
				}
			}

			/* Wrong Approach
			bool eaten = false;
			//Left side
			for (int j = max(i-K,0); j < i; j++) {
				if (table[j] == 'H') {
					table[j] = 'E';
					cnt++;
					eaten = true;
					break;
				}
			}
			
			//Right side
			if (!eaten) {
				for (int j = min(i + K, N - 1); j > i; j--) {
					if (table[j] == 'H') {
						table[j] = 'E';
						cnt++;
						break;
					}
				}
			}
			*/
		}
	}
	
	//debug
	//cout << table << "\n";

	cout << cnt;
}

//Finish