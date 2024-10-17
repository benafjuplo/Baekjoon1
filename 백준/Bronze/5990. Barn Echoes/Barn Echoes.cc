/*
- Title : 5990 - Barn Echoes
- Start Time : 24-10-17, 19:17
- End Time : 24-10-17, 19:33
- Try : 1
- Category : string, brute force
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
소의 울음소리와 메아리가 각각 문자열로 주어진다.
메이리는 소의 울음소리와 다를 수 있다.

소의 울음소리와 메아리가 두 줄의 입력(a..z의 문자들, 전체 길이는 범위 1..80 이다)으로 주어질 때 두 문자열이 서로 가장 많이 겹치는 문자 수를 구하는 프로그램을 작성하라.

예를 들어 다음과 같은 입력이 주어지면 다음과 같이 해결한다.
moyooyoxyzooo
yzoooqyasdfljkamo
첫 번째 문자열의 마지막 부분의 'yzooo'와 두 번째 문자열의 첫 번째 부분과 겹친다. 두 번째 문자열의 마지막 부분의 'mo'와 첫 번째 문자열의 첫 번째 문자열과 겹친다.
따라서 가장 많이 겹치는 부분은 'yzooo'로 길이는 5가 된다.

- 입력
1~2 행 : 각 행에는 소의 울음소리와 메아리가 주어진다.

- 출력
두 문자열이 가장 길게 겹치는 부분의 길이를 나타내는 단일 정수를 출력한다.

- 예제
입력 : 
abcxxxxxabcxabcd
abcdxabcxxxxabcx
출력 : 
11

- 힌트
'abcxxxxxabcx'는 첫 번째 문자열의 접두사이고 두 번째 문자열의 접미사이다.
*/

/* 한국어 주석
이 문제는 문자열의 최대 겹침 길이를 찾는 문제이다.

다양한 해결 방법이 가능하지만, 이 프로그램에서는 슬라이딩 윈도우와 find() 함수를 사용하여 구현하였다.

우선 문자열 두 개를 길이가 짤은 문자열을 str1이라고 하고 구하고자 하는 결과 값, maxSize를 str1의 길이로 초기화한다.
이 후 길이가 긴 문자열 str2에서 find()함수를 이용하여 str1을 슬라이딩 윈도우 느낌으로 maxSize길이 만큼 substr() 함수로 나눈 서브 문자열이 있는지 확인하다.
만약 찾았으면 출력하고 그렇지 않으면 masSize 값을 줄여가면서 0이 될 때 까지 계속해서 확인하다. 0이 되면 그대로 0을 출력한다.
*/

/* English Problem Summary
- Question
Given two strings representing a cow's moo and its echo, determine the maximum overlap in characters between the two strings.
The echo may differ from the cow's original moo.

For example, given the input:
moyooyoxyzooo
yzoooqyasdfljkamo
The longest overlap is 'yzooo' with a length of 5, occurring at the end of the first string and the beginning of the second string.

- Input
Two lines, each containing the cow's moo and echo (only lowercase letters a..z), with a total length between 1 and 80 characters.

- Output
Output a single integer representing the length of the longest overlapping substring between the two input strings.

- Example
Input :
abcxxxxxabcxabcd
abcdxabcxxxxabcx
Output :
11

- Hint
The substring 'abcxxxxxabcx' appears as a prefix in the first string and as a suffix in the second string.
*/

/* English Comment
This problem involves finding the maximum overlap length between two strings.

While multiple approaches are possible, this program uses a sliding window technique with the find() function.

First, the two strings are assigned such that the shorter string is str1, and the result variable, maxSize, is initialized to the length of str1.
Then, using find() on the longer string str2, check if any substring of str1 of length maxSize exists in str2 by gradually reducing maxSize from its initial length down to zero if no overlap is found.
If an overlap is found, it is printed, and if not, the program outputs zero when maxSize reaches zero.
*/

#include<iostream>

using namespace std;

int findMaxOverlapSize(string str1, string str2) {
	// Swap the strings if str1 is longer than str2 to ensure that str1 is shorter.
	if (str1.size() > str2.size()) {
		string temp = str1;
		str1 = str2;
		str2 = temp;
	}

	// Set maxSize to str.size() + 1 to use as the while loop condition in a top-down approach.
	int maxSize = str1.size()+1;

	while (--maxSize > 0) {
		bool loopBreakKey = false;	// Condition for breaking the while loop
		for (int i = 0; i+maxSize-1 < str1.size(); i++) {
			// If a case of the current size is found
			if (str2.find(str1.substr(i, maxSize)) != string::npos) {
				loopBreakKey = true;
			}
		}
		if (loopBreakKey)
			break;
	}

	return maxSize;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	string moo1;
	cin >> moo1;
	string moo2;
	cin >> moo2;

	cout << findMaxOverlapSize(moo1, moo2);
}

//Finish