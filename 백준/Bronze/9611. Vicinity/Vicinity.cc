/*
- Title : 9611 - Vicinity
- Start Time : 24-10-25, 15:13
- End Time : 24-10-25, 15:38
- Try : 1
- Category : mathematics, geometry, pair, brute force
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
좌표평면에 n개의 점이 주어질 때, 특정 점 근처에 어떤 점들이 근처에 있는지 찾아야 한다.
점 집합 P = {p1 , p2 , …, pn}이 있고, 여기서 pi 의 좌표는 (xi, yi)이다.
두 점 사이의 거리를 나타내기 위해 d(pi ,pj)를 사용한다. 점 pj 는 d ( pi ,pj ) ≤ dv 일 때 점 pi 의 근처에 있고, dv를 근처 거리라고 한다.
점 집합 P, 점 pi , dv 가 주어졌을 때, 점 pi 의 근처에 있는 점의 수를 계산하는 프로그램을 작성하라.

- 입력
첫 번째 줄에는 점의 개수를 결정하는 정수 n (2 ≤ n ≤ 1000)이 주어진다. 그 다음 n개 줄에는 각 점의 좌표 (xi, yi)에 해당하는 두 개의 정수가 주어진다 (-10^6  ≤ xi , yi ≤ 10^6).
그 다음 줄에는 테스트 케이스의 개수를 나타내는 t (1≤ t ≤ 50)가 주어진다.
그 뒤에 t개의 줄이 이어지고 각 줄에는 각각 점 pi 와 그 주변 거리를 나타내는 두 개의 양의 정수 i (1≤ i ≤ n)와 dv (1 ≤ dv ≤ 100)가 주어진다.

- 출력
각 테스트 케이스에 대해 해당 지점 근처의 지점의 개수를 한 줄로 출력한다.

- 예제
입력 : 
5
0 0
0 1
1 1
3 -3
2 2
3
1 1
5 3
4 1
출력 : 
1
3
0
*/

/* 한국어 주석
이 문제는 좌표평면에서 두 점 사이의 거리를 구해 비교하는 문제이다.

우선, 특별한 최적화 방법이 없으므로 브루트포스 방식으로 모든 점을 비교해야 한다.
이때 수학적인 공식처럼 구하려면 <cmath> 라이브러리의 sqrt() 함수가 필요하다.
하지만, 비교 기준 거리도 제곱하면 sqrt() 함수를 사용할 필요가 없어지고 메모리 소모가 줄어든다.

문제에서 주어지는 입력은 거리 계산 시 long long 자료형을 요구한다.
*/

/* English Problem Summary
- Question
Given n points on a coordinate plane, the task is to identify which points are close to a specific point.
The set of points is defined as P = {p1, p2, ..., pn}, where each point pi has coordinates (xi, yi).
The distance between two points is represented as d(pi, pj). Point pj is considered near point pi if d(pi, pj) <= dv, where dv is the "nearby distance."
Given the set P, a specific point pi, and dv, write a program that counts how many points are within the specified nearby distance of pi.

- Input
The first line contains an integer n (2 <= n <= 1000), representing the number of points.
The following n lines each contain two integers representing the coordinates (xi, yi) of each point pi (where -10^6 <= xi, yi <= 10^6).
The next line contains an integer t (1 <= t <= 50), representing the number of test cases.
Each of the following t lines contains two positive integers, i (1 <= i <= n) and dv (1 <= dv <= 100), representing a point pi and the nearby distance.

- Output
For each test case, output a single line with the number of points that are within the specified nearby distance of the given point.

- Example
Input :
5
0 0
0 1
1 1
3 -3
2 2
3
1 1
5 3
4 1
Output :
1
3
0
*/

/* English Comment
This problem involves calculating and comparing distances between points on a coordinate plane.

Since no special optimization is given, a brute-force approach to compare all points is necessary.
To simplify the calculations, instead of using the sqrt() function from the <cmath> library for the Euclidean distance formula,
squaring both the comparison distance and the calculated distance avoids the need for sqrt(). This approach reduces memory usage and can make calculations faster.

For this problem, inputs involve large coordinate values, so using the long long data type for distance calculations is recommended.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	vector<pair<int, int>> points(n);
	
	for (int i = 0; i < n; i++) {
		cin >> points[i].first >> points[i].second;
	}

	int T;
	cin >> T;

	while (T--) {
		int index, distanceV;
		cin >> index >> distanceV;
		index--;
		distanceV *= distanceV;
		int cnt = 0;
		// Calcuate distance and count
		for (int i = 0; i < n; i++) {
			long long diffX = points[index].first - points[i].first;
			diffX *= diffX;
			long long diffY = points[index].second - points[i].second;
			diffY *= diffY;
			
			if (diffX + diffY <= distanceV)
				cnt++;
		}
		cnt--;	// Remove self-distance

		cout << cnt << "\n";
	}
}

//Finish