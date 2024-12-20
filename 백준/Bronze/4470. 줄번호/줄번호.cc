/*
- Title : 4470 - Number the lines
- Start Time : 24-12-20, 21:21
- End Time : 24-12-20, 21:28
- Try : 1
- Category : string, getline
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
텍스트에서 줄을 입력받은 뒤, 줄 번호를 출력하는 프로그램을 작성하시오.

- 입력
첫째 줄에 줄의 수 N이 주어진다. 둘째 줄부터 N개의 줄에 각 줄의 내용이 주어진다. 각 줄에 있는 글자의 개수는 50글자를 넘지 않는다.

- 출력
각 문장의 앞에 줄 번호를 추가한 뒤 출력한다. 줄 번호는 1번부터 시작한다. 줄번호를 추가하는 형식은 출력 예제를 참고하면 된다.

- 예제
입력 : 
5
Lionel Cosgrove
Alice
Columbus and Tallahassee
Shaun and Ed
Fido
출력 : 
1. Lionel Cosgrove
2. Alice
3. Columbus and Tallahassee
4. Shaun and Ed
5. Fido
*/

/* 한국어 주석
이 문제는 입력된 문장에 번호를 매겨 출력하는 문제이다.

입력된 문자열은 공백을 포함할 수 있으므로 getline() 함수를 사용하여 구현한다.
getline() 함수를 사용하기 전에 cin.ignore() 함수를 호출해야 한다는 점에 유의한다.
*/

/* English Problem Summary
- Problem
Write a program that reads lines of text from input and echoes those lines to output preceded by a line number starting at 1, a single period, and a single space.

- Input
The input will start with a line containing a single integer value specifying the number of lines of text that will follow. Following the integer will be the specified number of lines.
See the Sample Input section below for clarification. Each line of text will contain no more than 50 characters.

- Output
For each line read, write the line number (starting at one), followed by a period, followed by a single space, and then the text on a single line.
See the Sample Output section below for clarification. Follow the format shown exactly. Failure to do so will result in an ‘Output Format Error’.

- Example
Input : 
5
Lionel Cosgrove
Alice
Columbus and Tallahassee
Shaun and Ed
Fido
Output : 
1. Lionel Cosgrove
2. Alice
3. Columbus and Tallahassee
4. Shaun and Ed
5. Fido
*/

/* English Comment
This problem is about assigning numbers to the input sentences and printing them.

Since the input strings can include spaces, you should use the getline() function to implement it.
Note that you need to call the cin.ignore() function before using getline().
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
	cin.ignore();

	for (int i = 1; i <= N; ++i) {
		string line;
		getline(cin, line);
		cout << i << ". " << line << "\n";
	}

	return 0;
}

//Finish