/*
- Title : 25305 - Cutoff Line
- Start Time : 24-09-24, 23:07
- End Time : 24-09-24, 23:41
- Try : 1
- Category : sorting
*/

/* 한국어 문제 요약
- 문제
시험에 N명의 학생들이 응시했다.
이들 중 점수가 가장 높은 k명은 상을 받는다. 이 때, 상을 받는 커트 라인이 몇 점인지 구하라.
커트 라인이란 상을 받는 사람들 중 점수가 가장 낮은 사람의 점수를 말한다.

- 입력
첫째 줄에는 응시자의 수 N과 상을 받는 사람의 수 k가 공백을 사이에 두고 주어진다.
둘째 줄에는 각 학생의 점수 x가 공백을 사이에 두고 주어진다.

- 출력
상을 받는 커트라인을 출력하라.

- 제한
1 <= N <= 1,000
1 <= k <= N
0 <= x <= 10,000

- 예제
입력 : 
5 2
100 76 85 93 98
출력 : 
98
*/

/* 한국어 주석
이 문제는 정렬을 사용하면 간단히 구현할 수 있다. 문제의 크기가 매우 작기에 어떤 정렬 방법이든 가능하다.
*/

/* English Problem Summary
- Question

- Input

- Output

- Constraint
1 <= N <= 1,000
1 <= k <= N
0 <= x <= 10,000

- Example
Input :
5 2
100 76 85 93 98
Output :
98
*/

/* English Comment
This problem can be easily implemented using sorting. Since the problem size is very small, any sorting method will work.
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, k;
	cin >> N >> k;

	vector<int> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	cout << v[v.size() - k];
}

//Finish