/*
- Title : 30796 - gahui and sousenkyo 4
- Start Time : 24-11-02, 22:13
- End Time : 24-11-02, 22:33
- Try : 1
- Category : mathematics, greedy algorithm
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
캐릭터 투표가 진행되었다. 이 투표에 대한 조건은 다음과 같다.

1. 두 캐릭터 사이에 k 투표 차이가 나는 경우는 없다.
2. 각 캐릭터의 투표수는 모두 다르다.
3. 모든 캐릭터는 최소한 1개의 투표수를 가져야 한다.
4. 1위를 차지한 캐릭터는 v 투표수를 갖는다.

이때 투표에 참여한 캐릭터의 최대 수를 구하는 프로그램을 작성하라.

- 입력
v와 k가 공백으로 구분되어 주어진다.

- 출력
첫 번째 줄에 투표에 참여한 캐릭터의 수 n을 출력한다.
이어지는 n개의 줄에 대해여 각 캐릭터가 얻은 득표 수를 출력한다.
여러 개의 가능한 답이 있는 경우, 그중 하나를 출력할 수 있다.

- 제한
1 <= v <= 250,000
1 <= k <= 100,000

- 예제
입력 :
5 3
출력 :
3
5
3
1
*/

/* 한국어 주석
이 문제는 주어진 규칙에 따라 가능한 경우를 찾는 문제이다.

예제의 출력 형태는 전혀 도움이 되지 않으므로 처음부터 생각해봐야 한다.
예로 10 1, 10 2, 10 3에 대해서 직접 결과값을 생각해보면 간단하게 해결 가능하다.

해결 방법은 v부터 k번 선택하고 k번 선택하지 않고를 1까지 반복하는 것이다.
문제에서 n을 먼저 출력하라고 되어있기에 규칙을 분석하여 미리 계산하면 된다.
*/

/* English Problem Summary
- Question
Character voting has taken place, with the following conditions:

There is no case where the difference in votes between any two characters is exactly k.
Each character has a unique vote count.
Every character has at least 1 vote.
The character that ranks first has v votes.

Given these conditions, write a program to find the maximum number of characters that can participate in the vote.

- Input
v and k are given, separated by a space.

- Output
Print the total number of participating characters, n, on the first line.
On the following n lines, print the number of votes each character received.
If there are multiple possible answers, any one of them can be printed.

- Constraint
1 <= v <= 250,000
1 <= k <= 100,000

- Example
Input :
5 3
Output :
3
5
3
1
*/

/* English Comment
This problem requires finding possible outcomes based on the given rules.

The format of the output examples does not help much, so the solution needs to be derived from scratch.
By analyzing specific cases like 10 1, 10 2, and 10 3, an effective solution can be found more easily.

The solution method involves iterating from v, selecting every k until reaching 1.
Since the problem specifies that n should be output first, analyzing the pattern to calculate it in advance is necessary.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int v, k;
	cin >> v >> k;
	
	int start = v;

	cout << (v / (k * 2)) * k + min(v % (k * 2), k) << "\n";

	for (int i = v; i > 0; --i) {
		if (start - i < k) {
			cout << i << "\n";
		}
		else {
			i -= k;
			start = i;
			i++;
		}
	}

	return 0;
}

//Finish