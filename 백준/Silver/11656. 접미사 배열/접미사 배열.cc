/*
- Title : 11656 - Suffix Array
- Start Time : 24-11-17, 18:44
- End Time : 24-11-17, 18:48
- Try : 1
- Category : string, sort, substr
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
접미사 배열은 문자열 S의 모든 접미사를 사전순으로 정렬해 놓은 배열이다.
baekjoon의 접미사는 baekjoon, aekjoon, ekjoon, kjoon, joon, oon, on, n 으로 총 8가지가 있고, 이를 사전순으로 정렬하면, aekjoon, baekjoon, ekjoon, joon, kjoon, n, on, oon이 된다.
문자열 S가 주어졌을 때, 모든 접미사를 사전순으로 정렬한 다음 출력하는 프로그램을 작성하시오.

- 입력
첫째 줄에 문자열 S가 주어진다. S는 알파벳 소문자로만 이루어져 있고, 길이는 1,000보다 작거나 같다.

- 출력
첫째 줄부터 S의 접미사를 사전순으로 한 줄에 하나씩 출력한다.

- 예제
입력 : 
baekjoon
출력 : 
aekjoon
baekjoon
ekjoon
joon
kjoon
n
on
oon
*/

/* 한국어 주석
이 문제는 주어진 문자열의 접미사들을 정렬하여 출력하는 문제이다.

<string> 라이브러리의 substr() 멤버 함수를 사용해 접미사를 추출한 뒤, 이를 string 자료형의 vector에 저장한다. 이후 <algorithm> 라이브러리의 sort() 함수를 사용해 정렬하고 출력하면 된다.
*/

/* English Problem Summary
- Question
A suffix array is an array of all suffixes of a string S sorted in lexicographical order.
For the string "baekjoon", the suffixes are baekjoon, aekjoon, ekjoon, kjoon, joon, oon, on, n.
When sorted lexicographically, the result is aekjoon, baekjoon, ekjoon, joon, kjoon, n, on, oon.
Given a string S, write a program that outputs all suffixes sorted in lexicographical order.

- Input
The first line contains the string S. S consists of lowercase English letters and its length is less than or equal to 1,000.

- Output
Print each suffix of S, sorted lexicographically, one per line.

- Example
Input :
baekjoon
Output :
aekjoon
baekjoon
ekjoon
joon
kjoon
n
on
oon
*/

/* English Comment
This problem involves sorting and outputting the suffixes of a given string.

The substr() member function from the <string> library can be used to extract suffixes of the string. Store these suffixes in a vector of strings. Then, use the sort() function from the <algorithm> library to sort them lexicographically and print the results.
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	vector<string> suffixVector(str.size());

	// Extract suffix
	for (int i = 0; i < str.size(); i++) {
		suffixVector[i] = str.substr(i);
	}

	// Sort suffixes
	sort(suffixVector.begin(), suffixVector.end());

	// Print
	for (int i = 0; i < str.size(); i++) {
		cout << suffixVector[i] << "\n";
	}

	return 0;
}

//Finish