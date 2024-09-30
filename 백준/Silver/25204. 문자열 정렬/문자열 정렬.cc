/*
- Title : 25204 - Sorting Strings
- Start Time : 24-09-30, 09:??, 10:45
- End Time : 24-09-30,   09:39, 10:50
- Try : 2(1 : Mistake in Problem Interpretation)
- Category : string, sorting
*/

/* 한국어 문제 요약
- 문제
이 문제에 한해, 서로 다른 두 문자열 X, Y의 "사전식" 순서는 아래 규칙에 따라 정한다:
1. X가 Y의 접두사인 (prefix) 경우 X가 Y보다 앞선다. 반대로, Y가 X의 접두사인 경우 Y가 X보다 앞선다.
2. 위 경우에 해당하지 않을 경우: 첫번째 문자부터 시작하여 X, Y가 처음으로 달라지는 부분이 i번째 문자라 하자. X의 i번째 문자를 Xi, Y의 i번째 문자를 Yi라 했을 때:
 a. 둘 중 하나만 붙임표 ('-')인 경우, 붙임표가 들어간 문자열이 사전순에서 뒤진다. 예를 들어, Xi가 붙임표이고 Yi가 붙임표가 아닌 경우, Y가 앞선다.
 b. 둘 다 알파벳인 경우, 대소문자를 무시했을 때 서로 다른 알파벳이라면, 알파벳 순서를 따른다. 만약 같은 알파벳이지만 하나만 대문자인 경우 대문자가 들어간 문자열이 사전순에서 앞선다.

예를 들어, 아래와 같은 문자열 쌍은 다음과 같다.
X = "Santa-Mar"과 Y = "Santa-Maria": 이 경우 규칙 1에 따라 X가 앞선다. X가 Y의 접두사이기 때문이다.
X = "San-Francisco" 와 Y = "Santa-Clara": 이 경우 처음 3개의 문자는 같지만 4번째 문자가 '-'와 't'로 다르다. 규칙 2-1에 따라 X가 Y에 뒤진다.
X = "Seoul"과 Y = "seoul": 이 경우 규칙 2-2에 따라 "Seoul"이 앞선다.

입력으로 n개의 문자열이 주어졌을 때, 위 규칙에 따라 사전식 정렬 후 출력하는 문자열 정렬기를 만들어라.

- 입력
첫 줄에 테스트 케이스의 수 T가 주어진다.
각 테스트 케이스의 첫 줄에는 n이 주어진다. 다음 n줄에 걸쳐 각 줄에 문자열이 하나씩 주어진다.

- 출력
각 테스트 케이스의 정답을 n줄에 걸쳐 출력한다. 각 줄에는 사전순으로 정렬된 문자열 하나씩을 순서대로 출력한다.

- 제한
1 ≤ T ≤ 10
1 ≤ n ≤ 15,000
각 테스트 케이스의 입력으로 주어지는 n개의 문자열에 대하여:
1 ≤ 문자열의 길이 ≤ 50
문자열은 영문 대문자 ('A'-'Z'), 영문 소문자 ('a'-'z'), 그리고 붙임표 ('-') 만을 포함한다.

- 예제
입력 : 
4
3
Aa-
a-A
Aa-
7
San-Francisco
Santa-Clara
Santa-Clarita
San-Luis-Obispo
San-Pedro
Saint-Paul
Saint-Louis
2
Santa-mar
Santa-Mar
3
-
--
---
출력 : 
Aa-
Aa-
a-A
Saint-Louis
Saint-Paul
Santa-Clara
Santa-Clarita
San-Francisco
San-Luis-Obispo
San-Pedro
Santa-Mar
Santa-mar
-
--
---

- 힌트
예제 1: "Aa-" 문자열이 두 번 주어졌으므로 두 번 출력해야 한다. "Aa-" 와 "a-A"를 비교하면 첫 글자가 다르므로 규칙 2-2에 따라 "Aa-"가 사전순으로 앞선다.
예제 2: "Saint-Louis" 와 "Saint-Paul" 의 경우 'L' 이 'P' 보다 앞선다.
예제 3: "Santa-Mar" 과 "Santa-mar"의 경우 'M' 이 'm' 보다 앞선다.
예제 4: 추가 설명 없음 (규칙 1 참고)
*/

/* 한국어 주석
이 문제는 문자열을 사전순으로 정렬하는 문제이다. 실제로 문제에서 요구하는 정렬 규칙은 일반적인 사전 순서와 같다.
하지만 C++에서 <algorithm> 헤더의 sort() 함수를 사용하면 다른 규칙은 모두 지키고 있지만, 다른 점은 사전순이 아닌 아스키코드 순서로 정렬하고 하이픈(붙임표)에 대해서 정렬이 반대된다.
사전순과 아스키코드 순서를 예를 들어 설명하면 apple, Apple, banana, Banana가 있다고 하자.
문제에서 설명한 규칙으로 정렬하면 Apple, apple, Banana, banana이지만 sort()함수는 Apple, Banana, apple, banana로 정렬한다.

이 상황에서 해결책은 2가지가 있다.
첫 번째는 사용자 정의 비교로 sort()함수의 정렬 기준을 변경하는 것이다.
이 방법은 구현을 잘 하였다고 가정하면 성능면에서 유리할 수 있다.
하지만 모든 규칙을 직접 구현해야 하므로 난이도와 구현 시간이 단점이 된다.

두 번째는 sort()함수은 변경하지 않고 문자열을 변형한 후 정렬하는 트릭을 사용하는 것이다.
위에서 설명하였듯이 이미 sort() 함수는 대부분의 규칙을 따르고 있다.
그렇기에 아스키코드 순서를 사전순으로 바꿔주는 것과 히이픈에 대해서만 집중할 수 있기에 복잡한 구현을 피하고 쉽게 문제를 해결할 수 있다.
이 프로그램에서는 두 번째 방법을 사용하여 구현하였다.

아스키코드는 'A' ~ 'Z' = 65 ~ 90 그리고 'a' ~ 'z' = 97 ~ 122, '-' = 45 이다.
즉 '-' -> 'A' ~ 'Z' -> 'a' ~ 'z' 순서이다.

이 아스키코드의 숫자를 원하는 순서로 직접 다시 매핑하여 sort()함수를 사용하면 원하는 방식으로 정렬될 것이다.
즉 'A', 'a' ~ 'Z', 'z' -> '-' 순서로 변경해 줘야 한다.

글로 설명하기에는 복잡하기에 주석 아래의 코드와 직접 비교하면서 읽으면 이해하기 쉬울 것이다.
'A' = 65를 시작으로 'a' = 66, 'B' = 67, ...으로 변경하고 마지막에 '-'를 배치한다.
변경하고자 하는 문자를 ch라고 하자.
대문자의 경우 ch = 'A' + 2 * (ch - 'A')로 변경 가능하다.
소문자의 경우 ch = 'A' + 2 * (ch - 'a') + 1로 변경 가능하다.
하이픈의 경우는 적당히 ch = 'z' + 1로 변경한다.

위를 함수로 만들어 프로그램에 적절히 배치한다.

마지막으로 변경된 문자열과 원본 문자열 모두를 가지고 있어야 마지막에 출력이 가능하므로 vector<pair<string, string>>으로 프로그램의 문자열들을 관리하였다.
(다시 변경하는 함수를 작성하여도 되지만 약 2배의 시간 소모보다 메모리 사용이 낫다고 판단함)
sort() 함수를 pair의 vector에 사용하면 pair의 first element를 기준으로 우선 정렬한 후 second element를 비교한다.
따라서 first에는 정렬을 위하여 사용자 매핑된 문자열을 second에는 원본 문자열을 저장한다.
*/



/* English Problem Summary
- Question
For this problem only, the "lexicographic" order of two different strings X and Y is defined by the following rules:
1. If X is a prefix of Y, then X comes before Y. Conversely, if Y is a prefix of X, then Y comes before X.
2. If neither of the above applies: starting from the first character, let i be the position where X and Y first differ. Let Xi be the i-th character of X, and Yi be the i-th character of Y:
 a. If one of Xi or Yi is a hyphen ('-'), the string containing the hyphen is considered lexicographically larger. For example, if Xi is a hyphen and Yi is not, then Y comes before X.
 b. If both Xi and Yi are alphabetic characters and differ, they are compared alphabetically, ignoring case.
 If they are the same letter but one is uppercase, the string containing the uppercase letter comes first in lexicographic order.

 For example:
X = "Santa-Mar" and Y = "Santa-Maria": In this case, according to rule 1, X comes before Y because X is a prefix of Y.
X = "San-Francisco" and Y = "Santa-Clara": The first three characters are the same, but the fourth character differs ('-' and 't'). According to rule 2a, X comes after Y.
X = "Seoul" and Y = "seoul": According to rule 2b, "Seoul" comes before "seoul" because the uppercase letter has precedence.

Given n strings, create a sorting program that sorts them in lexicographic order based on the rules above and outputs the sorted strings.

- Input
The first line contains the number of test cases T.
For each test case, the first line contains an integer n. The next n lines each contain one string.

- Output
For each test case, output the n strings in lexicographic order, one per line.

- Constraint
1 ≤ T ≤ 10
1 ≤ n ≤ 15,000
For each test case, the n strings consist of:
1 ≤ string length ≤ 50
The strings consist of uppercase letters ('A'-'Z'), lowercase letters ('a'-'z'), and hyphens ('-').

- Example
Input :
4
3
Aa-
a-A
Aa-
7
San-Francisco
Santa-Clara
Santa-Clarita
San-Luis-Obispo
San-Pedro
Saint-Paul
Saint-Louis
2
Santa-mar
Santa-Mar
3
-
--
---
Output :
Aa-
Aa-
a-A
Saint-Louis
Saint-Paul
Santa-Clara
Santa-Clarita
San-Francisco
San-Luis-Obispo
San-Pedro
Santa-Mar
Santa-mar
-
--
---

- Hint
Example 1: Since the string "Aa-" appears twice, it should be printed twice. Comparing "Aa-" and "a-A", the first characters differ, so according to rule 2b, "Aa-" comes before "a-A" in lexicographic order.
Example 2: For "Saint-Louis" and "Saint-Paul", 'L' comes before 'P', so "Saint-Louis" is printed first.
Example 3: In the case of "Santa-Mar" and "Santa-mar", 'M' comes before 'm', so "Santa-Mar" is printed first.
Example 4: No additional explanation (refer to rule 1).
*/

/* English Comment
This problem involves sorting strings in lexicographic order. In fact, the sorting rules required by the problem are similar to standard lexicographic order.
However, when using the sort() function from the <algorithm> header in C++, the sorting follows ASCII order,
which results in the hyphen ('-') being sorted differently compared to the rules described in the problem.
For example, let's consider the strings apple, Apple, banana, and Banana.
According to the problem's rules, the order should be Apple, apple, Banana, banana, but the sort() function sorts them as Apple, Banana, apple, banana.

There are two possible solutions to this issue:

Use a custom comparator to modify the sorting criteria of the sort() function.
This method can be efficient in terms of performance if implemented well, but it requires manually handling all the sorting rules, which can increase complexity and implementation time.

Instead of modifying the sort() function, use a trick by transforming the strings before sorting.
Since the sort() function already follows most of the rules, we can focus on adjusting the ASCII order to match lexicographic order and handle the hyphen case.
This approach avoids complicated implementation and provides a simple solution.
This program uses the second approach.

In ASCII, the character ranges are:
'A' to 'Z' = 65 to 90
'a' to 'z' = 97 to 122
'-' = 45
So, the order is '-' -> 'A' to 'Z' -> 'a' to 'z'.

By remapping the ASCII values into the desired order and then using the sort() function, we can achieve the desired sorting.
Specifically, the new order should be 'A', 'a' to 'Z', 'z' -> '-'.

The logic can be complex to explain in text, so it will be easier to understand when compared directly with the code and comments.
Starting from 'A' = 65, change 'a' to 66, 'B' to 67, and so on, with the hyphen placed last.
Let ch be the character to be modified.
For uppercase letters, ch = 'A' + 2 * (ch - 'A') can be used.
For lowercase letters, ch = 'A' + 2 * (ch - 'a') + 1.
For hyphens, assign ch = 'z' + 1.

This can be implemented as a function and integrated into the program.

Lastly, since both the transformed strings and the original strings must be stored for output, the program uses vector<pair<string, string>> to manage the strings.
(though writing a reverse transformation function is possible, it's more efficient to store both versions in terms of memory usage)

When the sort() function is applied to a vector of pairs, it first sorts by the first element of the pair and then compares the second element if needed.
Thus, the first element stores the transformed string for sorting, and the second element stores the original string.
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

// convert with custom mapping: '-' -> 'A' ~'Z' -> 'a' ~'z' >>>>>>>> 'A', 'a' ~'Z', 'z' -> '-'
void convertString(string &str) {
	for (int i = 0; i < str.size(); i++) {
		//Uppercase
		if ('A'<= str[i] && str[i] <= 'Z') {
			str[i] = 'A' + 2 * (str[i] - 'A');
		}
		//Lowercase
		else if ('a' <= str[i] && str[i] <= 'z') {
			str[i] = 'A' + 2 * (str[i] - 'a') + 1;
		}
		// Hyphen
		else {
			str[i] = 'z' + 1;
		}
	}
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		vector<pair<string, string>> v(n);	// first element is custom string, second element is original string

		for (int i = 0; i < n; i++) {
			//Input
			cin >> v[i].second;	

			//Convert
			v[i].first = v[i].second;
			convertString(v[i].first);
		}

		sort(v.begin(), v.end());	// Sort by the first element
		
		//Output
		for (int i = 0; i < n; i++) {
			cout << v[i].second << "\n";
		}
	}
}

//Finish