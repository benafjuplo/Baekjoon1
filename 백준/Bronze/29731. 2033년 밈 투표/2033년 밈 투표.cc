/*
- Title : 29731 - 2033 Meme Poll
- Start Time : 24-12-18, 00:05
- End Time : 24-12-18, 00:13
- Try : 1
- Category : string, unordered_set, getline
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
다음과 같은 기준 공약들이 있다.
Never gonna give you up
Never gonna let you down
Never gonna run around and desert you
Never gonna make you cry
Never gonna say goodbye
Never gonna tell a lie and hurt you
Never gonna stop

여러 공약들이 입력으로 주어질 때, 주어진 공약 중 하나라도 기준 공약에 속하지 않으면 공약이 바뀐 것으로 본다. 단, 대소문자를 구분한다.
공약이 바뀌었는지 확인하는 프로그램을 작성하라.

- 입력
첫 번째 줄에 정수 N이 주어진다. (1 <= N <= 100)
두 번째 줄부터 N+1 번째 줄까지 영문 대소문자 및 공백으로 이루어진 공약 Si 가 주어진다. 이때, Si는 공백으로 시작하거나 공백으로 끝나지 않는다. (1 <= |Si| <= 50)

- 출력
모든 문장이 기준 공약에 속한다면 No를, 하나라도 속하지 않는다면 Yes를 출력한다.

- 예제
입력 : 
3
Never gonna give you up
Never gonna say goodbye
Let you down
출력 : 
Yes
*/

/* 한국어 주석
이 문제는 입력으로 주어진 문장들이 기존에 미리 정해놓은 문장들에 포함이 되는지 확인하는 문제이다.

입력 범위가 매우 적기 때문에 반복문을 이용하여 비교해도 되고 unordered_set 등의 자료구조를 사용하여도 된다.
단 getline()을 사용 전에 N을 입력받은 후 cin.ignore()를 사용하여 개행 문자를 없애주어야 하는 것에 주의한다.
*/

/* English Problem Summary
- Problem
There are the following standard pledges:
Never gonna give you up
Never gonna let you down
Never gonna run around and desert you
Never gonna make you cry
Never gonna say goodbye
Never gonna tell a lie and hurt you
Never gonna stop

When several pledges are given as input, if any of the pledges does not belong to the standard pledges, it is considered that the pledges have changed. Note that uppercase and lowercase letters are distinguished.
Write a program to check whether the pledges have changed.

- Input
The first line contains an integer N. (1 <= N <= 100)
From the second line to the (N+1)-th line, a pledge Si consisting of English uppercase and lowercase letters and spaces is given. Here, Si does not start or end with a space. (1 <= |Si| <= 50)

- Output
If all sentences belong to the standard pledges, print "No". If at least one does not belong, print "Yes".

- Example
Input :
3
Never gonna give you up
Never gonna say goodbye
Let you down
Output :
Yes
*/

/* English Comment
This problem checks whether the input sentences are included in a predefined set of sentences.

Since the input size is very small, you can use a loop for comparison, or use data structures like unordered_set.
Note that after reading N, you need to use cin.ignore() to remove the newline character before using getline().
*/

#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	unordered_set<string> s;
	s.insert("Never gonna give you up");
	s.insert("Never gonna let you down");
	s.insert("Never gonna run around and desert you");
	s.insert("Never gonna make you cry");
	s.insert("Never gonna say goodbye");
	s.insert("Never gonna tell a lie and hurt you");
	s.insert("Never gonna stop");
	
	int N;
	cin >> N;
	cin.ignore();	// for getline

	while (N--) {
		string line;
		getline(cin, line);
		if (s.count(line) != 1) {
			cout << "Yes";
			return 0;
		}
	}

	cout << "No";

	return 0;
}

//Finish