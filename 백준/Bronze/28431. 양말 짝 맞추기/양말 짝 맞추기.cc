/*
- Title : 28431 - Matching socks
- Start Time : 24-14,18, 19:20
- End Time : 24-14,18, 19:26
- Try : 1
- Category : sort, counting sort
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
양말 5개가 주어진다. 각 양말에는 숫자가 하나씩 쓰여있다. 같은 숫자가 쓰인 양말 두 개를 모으면 양말 한 쌍이 된다.
쌍을 만들 수 있는 양말을 두 개씩 두 쌍 빼면 남는 양말에 쓰인 숫자는 무엇인지 알아내는 프로그램을 작성하라.

- 입력
각 양말에 쓰인 숫자 5개가 한 줄에 하나씩 주어진다. 입력으로 주어지는 모든 숫자는 0 이상 9 이하이다. 항상 양말을 두 개씩 두 쌍 만들 수 있는 입력만 주어진다.

- 출력
첫 줄에 남는 양말에 쓰인 숫자를 출력한다.

- 예제
입력 1 : 
6
8
6
3
8
출력 1 : 
3
입력 2 : 
9
9
9
0
0
출력 2 : 
9
*/

/* 한국어 주석
이 문제는 5개의 숫자 중 짝이 없는 숫자 하나를 찾는 문제이다.

정렬 기능을 사용하거나 카운팅 정렬을 사용하여 해결할 수 있다.
문제 조건이 매우 간단하기에 추가 설명은 생략한다.
*/

/* English Problem Summary
- Problem
There are 5 socks. Each sock has a number written on it. A pair of socks can be made by matching two socks with the same number.
Write a program to determine the number on the sock that remains after forming two pairs of socks.

- Input
The numbers written on the 5 socks are given, one per line. All numbers are between 0 and 9 inclusive.
The input always guarantees that exactly two pairs of socks can be formed.

- Output
Print the number written on the remaining sock in the first line.

- Example
Input 1 :
6
8
6
3
8
Output 1 :
3
Input 2 :
9
9
9
0
0
Output 2 :
9
*/

/* English Comment
This problem is about finding the one unmatched number among five numbers.

You can solve it by using sorting functionality or counting sort.
Since the problem is very simple, no additional explanation is provided.
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	const int N = 5;

	vector <int> v(5);

	for (int i = 0; i < 5; ++i) cin >> v[i];
	
	sort(v.begin(), v.end());

	while (v.size() != 1) {
		if (v[0] == v[1]) {
			v.erase(v.begin());
			v.erase(v.begin());
		}
		else {
			v.erase(v.begin()+1);
			v.erase(v.begin()+1);
		}
	}

	cout << v[0];

	return 0;
}

//Finish