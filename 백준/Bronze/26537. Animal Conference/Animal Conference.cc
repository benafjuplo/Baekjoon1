/*
- Title : 26537 - Animal Conference
- Start Time : 24-09-28, 02:18
- End Time : 24-09-28, 02:24
- Try : 1
- Category : mathematics, sorting, geometry
*/

/* 한국어 문제 요약
- 문제
여러 좌표가 주어진다. 이 좌표들 중 가장 가까운 좌표 쌍들을 찾는 프로그램을 작성하라.

- 입력
첫 번째 줄에는 뒤에 오는 데이터 세트의 수를 나타내는 단일 정수 n이 주어진다.

각 데이터 세트는 좌표의 수를 나타내는 단일 정수 z로 시작한다.
다음 z줄은 각 좌표의 x 및 y좌표를 나타내는 두 개의 음이 아닌 정수 x 및 y가 주어진다.

- 출력
각 테스트 케이스에 대해 가장 가까운 두 좌표의 위치를 출력한다.
두 좌표는 x로 정렬한 다음, 동일한 경우 y로 정렬한다.

가장 가까운 두 쌍의 점이 있는 경우 가장 작은 정렬 쌍을 선택한다.
즉, 첫 번째 점 x, 첫 번째 점의 y, 두 번째 점의 x, 마지막으로 두 번째 점의 y에 대해 정렬합니다.

- 예제
입력 :
2
11
90 60
80 30
12 94
13 43
24 40
26 86
30 60
32 63
70 50
60 96
34 20
5
2 0
1 0
0 0
1 1
0 1
출력 :
30 60 32 63
0 0 0 1
*/

/* 한국어 주석
이 문제는 좌표들 사이의 거리들을 비교하여 가장 가까운 좌표 쌍을 찾는 문제이다.
먼저 좌표들을 정렬하여 출력 조건을 만족시킨다. 이 후 이중 반복문으로 두 점 사이의 거리 공식을 이용하여 거리를 비교한다.

이 문제에서는 변수들의 범위가 명시되지 않았기 때문에, 매우 큰 범위를 다룰 수 있는 자료형을 사용해야 한다.
*/

/* English Problem Summary
- Question
Several coordinates are given. Write a program to find the closest pair of coordinates.

- Input
The first line contains a single integer n, representing the number of datasets that follow.

Each dataset starts with a single integer z, representing the number of coordinates.
The next z lines each contain two non-negative integers x and y, representing the x and y coordinates of each point.

- Output
For each test case, print the positions of the two closest coordinates.
The coordinates should be sorted by x, and if the x values are the same, by y.

If there are multiple closest pairs, select the smallest sorted pair.
That is, sort by the first point's x, then the first point's y, followed by the second point's x, and finally the second point's y.

- Example
Input :
2
11
90 60
80 30
12 94
13 43
24 40
26 86
30 60
32 63
70 50
60 96
34 20
5
2 0
1 0
0 0
1 1
0 1
Output :
30 60 32 63
0 0 0 1
*/

/* English Comment
This problem involves finding the closest pair of coordinates by comparing the distances between them.
First, the coordinates should be sorted to satisfy the output conditions.
Then, using a nested loop, the distance between two points is calculated using the distance formula and compared.

Since the range of variables is not specified in this problem, a data type capable of handling very large ranges should be used.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long T;
	cin >> T;

	while (T--) {
		long long z;
		cin >> z;

		vector<pair<long long, long long>> v(z);

		for (int i = 0; i < z; i++) {
			cin >> v[i].first >> v[i].second;
		}

		
		long long x[2], y[2];
		long long minDist = LLONG_MAX;

		sort(v.begin(), v.end(),
			[](pair<long long, long long>& a, pair<long long, long long>& b){
				if (a.first != b.first) {
					return a.first < b.first;
				}
				else
					return a.second < b.second;
			}
		);

		for (int i = 0; i < z; i++) {
			for (int j = i + 1; j < z; j++) {
				long long dist = sqrt((v[j].first - v[i].first)* (v[j].first - v[i].first) + (v[j].second - v[i].second) * (v[j].second - v[i].second));
				if (dist < minDist) {
					minDist = dist;
					x[0] = v[i].first;
					x[1] = v[j].first;
					y[0] = v[i].second;
					y[1] = v[j].second;
				}
			}
		}

		cout << x[0] << " " << y[0] << " " << x[1] << " " << y[1] << "\n";
	}
}

//Finish