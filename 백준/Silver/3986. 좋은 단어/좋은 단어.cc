/*
- Title : 3986 - Nice Words(ESEJ)
- Start Time : 24-09-06, 19:44, 22:47
- End Time : 24-09-06,   20:22, 22:55
- Try : 3(2 : Wrong Problem Approach)
- Category : stack
*/

/* 한국어 문제 요약
- 문제
'A'와 'B'만으로 구성된 단어들이 주어졌을 때, 각 단어 위로 아치형 곡선을 그어 같은 글자끼리(A는 A끼리, B는 B끼리) 쌍을 이룰 수 있는다고 하자.
만약 선끼리 교차하지 않으면서 각 글자를 정확히 한 번씩 다른 위치에 있는 같은 글자와 짝을 지을수 있다면, 그 단어는 '좋은 단어'이다.
'좋은 단어' 개수를 구하시오.

- 입력
첫째 줄에 단어의 수 N이 주어진다. (1 <= N <= 100)
다음으로 N개 줄에 걸쳐 A와 B로만 이루어진 단어가 한 줄에 하나씩 주어진다.
각 단어의 길이는 2와 100,000사이이며, 모든 단어 길이의 합은 1,000,000을 넘지 않는다.

- 출력
첫째 줄에 '좋은 단어'의 수를 출력한다.

- 예제
입력 1 : 
3
ABAB
AABB
ABBA
출력 1 : 
2

입력 2 : 
3
AAA
AA
AB
출력 2:

입력 3:
1
ABBABB
출력 3:
1
*/

/* 한국어 문제 요약
이 문제는 대표적인 기본 자료구조인 스택을 사용한 문제이다. 유사한 문제로는 괄호의 쌍을 찾는 문제가 있다.
C++에서는 <stack> 헤더를 사용하면 쉽게 구현할 수 있다.
만약 프로그램의 성능을 좀 더 개선하고 싶다면, 문자열로 한 번 받은 후 스택으로 계산하지 않고, 문자 하나씩 불러들일 수도 있다.
하지만 코드의 구현 난이도가 올라가고 가독성이 떨어질 수 있다.
*/

/* English Problem Summary
- Question
Given words consisting only of 'A' and 'B', we can draw an arched curve over the word to pair identical letters (A with A, B with B).
If it's possible to pair all the letters exactly once with a matching letter at a different position without the lines crossing each other, the word is called a "nice word".
Count the number of "nice words".
- Input
The first line contains an integer N, the number of words. (1 <= N <= 100)
The next N lines each contain a word made up of only 'A' and 'B'.
The length of each word is between 2 and 100,000, and the total length of all the words combined does not exceed 1,000,000.

- Output
Print the number of "nice words" on the first line.

- Example
Input 1 :
3
ABAB
AABB
ABBA
Output 1 :
2

Input 2 :
3
AAA
AA
AB
Output 2:

Input 3:
1
ABBABB
Output 3:
1
*/

#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int numberOfNiceWords = 0;

	while (N--) {
		string word;
		cin >> word;

		stack<char> s;
		for (int i = 0; i < word.size(); i++) {
			char ch = word[i];
			if (!s.empty() && s.top() == ch) {
				s.pop();
			}
			else {
				s.push(ch);
				continue;
			}

			while (s.size()>=2) {
				int c1 = s.top();
				s.pop();
				int c2 = s.top();
				if (c1 == c2)
					s.pop();
				else {
					s.push(c1);
					break;
				}
			}
		}

		if (s.empty())
			numberOfNiceWords++;
	}

	cout << numberOfNiceWords;
}

//Finish