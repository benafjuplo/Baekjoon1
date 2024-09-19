/*
- Title : 28255 - Triple Layer Chocolate Ice Cream
- Start Time : 24-09-19, 19:00
- End Time : 24-09-19, 19:20
- Try : 1
- Category : string, substr, reverse
*/

/* 한국어 문제 요약
- 문제
초콜릿 아이스크림 탑은 알파벳 대문자로 이루어진 문자열로 나타낼 수 있다.

길이 n인 아이스크림 문자열 S가 주어졌을 때, 길이가 ceil(n/3)인 S의 접두사 S'이라고 한다.
S1+S2는 두 문자열을 순서대로 이어붙인 것, rev(S)는 S의 글자의 순서를 뒤집은 것이고, tail(S)는 S의 첫 글자를 제거한 것을 의미한다.

다음 중 적어도 하나를 만족하면 S는 3단 아이스크림이다.
S = S' + rev(S') + S'
S = S' + tail(rev(S')) + S'
S = S' + rev(S') + tail(S')
S = S' + tail(rev(S')) + tail(S')

예를 들어, DOTTODOT은 DOTTODOT = DOT + TOD + OT이므로 3단 아이스크림이다.

각각의 문자열이 3단 아이스크림 문자열인지 판별하라.

- 입력
첫 줄에는 테스트 케이스의 수 T가 주어진다. (1 <= T <= 1000)

다음 T개의 줄 각각에는 알파벳 대문자로 이루어진 문자열이 주어진다. 문자열의 길이는 6 이상 30 이하이다.

- 출력
각각의 테스트 케이스에 대해, 주어진 문자열이 3단 아이스크림 문자열이면 1, 아니면 0을 출력한다.

- 예제
입력 : 
8
XYYXXY
BANABAN
DOTTODOT
DADADADADA
RANDOM
HOTSHOT
CHOCOLATE
DADADADADADA
출력 : 
1
1
1
1
0
0
0
0
*/

/* 한국어 주석
이 문제는 문자열을 다루는 문제이다.
주어진 문제의 조건에 맞추기 위하여 문자열 이어붙이기(+), 문자열 뒤집기, 그리고 서브문자열 추출의 세 가지 작업이 필요하다.
문자열 붙이기는 <string> 헤더의 자료형인 string에서 '+'  연산자를 사용한다.
문자열 뒤집기는 <algorithm> 헤더의 reverse() 함수를 사용한다.
서브문자열 추출은 <string> 헤더의 substr() 함수를 사용한다.
이들을 적절히 조합하면 간단하게 문제를 해결할 수 있다.
*/

/* English Problem Summary
- Question
A chocolate ice cream tower can be represented by a string consisting of uppercase letters.

Given an ice cream string S of length n, define its prefix S' as a substring of S with length ceil(n/3).
S1+S2 represents the concatenation of two strings S1 and S2 in order, rev(S) represents the reverse of string S, and tail(S) represents the string obtained by removing the first character of S.

S is considered a 3-layer ice cream if it satisfies at least one of the following conditions:
S = S' + rev(S') + S'
S = S' + tail(rev(S')) + S'
S = S' + rev(S') + tail(S')
S = S' + tail(rev(S')) + tail(S')

For example, DOTTODOT is a 3-layer ice cream because DOTTODOT = DOT + TOD + OT.

Determine whether each string is a 3-layer ice cream string.

- Input
The first line contains the number of test cases T. (1 <= T <= 1000)

Each of the next T lines contains a string consisting of uppercase letters. The length of each string is between 6 and 30.

- Output
For each test case, print 1 if the given string is a 3-layer ice cream string, otherwise print 0.

- Example
Input :
8
XYYXXY
BANABAN
DOTTODOT
DADADADADA
RANDOM
HOTSHOT
CHOCOLATE
DADADADADADA
Output :
1
1
1
1
0
0
0
0
*/

/* English Comment
This problem involves manipulating strings.
To meet the conditions of the given problem, three operations are required: string concatenation (+), string reversal, and substring extraction.
For string concatenation, the '+' operator can be used with the string data type from the <string> header.
For string reversal, the reverse() function from the <algorithm> header can be used.
Substring extraction can be done using the substr() function from the <string> header.
By combining these operations appropriately, the problem can be easily solved.
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		string str;
		cin >> str;
		int cut =  str.size() / 3;
		if (str.size() % 3 > 0)
			cut++;
		string strPrime = str.substr(0, cut);
		string strPrimeReverse = strPrime;
		reverse(strPrimeReverse.begin(), strPrimeReverse.end());

		bool isTriple = false;

		if (str == strPrime + strPrimeReverse + strPrime)
			isTriple = true;
		else if (str == strPrime + strPrimeReverse.substr(1) + strPrime)
			isTriple = true;
		else if (str == strPrime + strPrimeReverse + strPrime.substr(1))
			isTriple = true;
		else if (str == strPrime + strPrimeReverse.substr(1) + strPrime.substr(1))
			isTriple = true;

		if (isTriple)
			cout << "1\n";
		else
			cout << "0\n";
	}
}

//Finish