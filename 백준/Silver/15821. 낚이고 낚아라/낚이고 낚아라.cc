/*
- Title : 15821 - Catch and Be Caught
- Start Time : 24-12-15, 20:35
- End Time : 24-12-15, 22:54
- Try : 2(1 : Decimal Point Output)
- Category : sorting, geometry, decimal point output
- Language : C++20
*/

/* 한국어 문제 요약
- 문제
고인물 낚시는 넓은 강가나 바닷가가 아닌 작은 호수나 연못에서 낚시를 하는 방식이다. 낚시꾼은 육지의 한 위치에 자리를 고정하고 낚싯대의 긴 길이를 이용해 주변의 물가에 살고 있는 물고기를 잡아야 한다.
당연히 더 먼 거리에 낚시줄을 보낼 수 있는 좋은 낚싯대가 있을 수록 유리하다는 사실을 알 수 있다.
낚싯줄을 최대한 멀리 보낼 수 있는 거리를 낚시 거리라고 하며, 낚시 거리를 반지름으로 원을 그렸을 때 모든 영역이 원의 내부에 포함되는 낚시터를 유효 낚시터라고 한다.
만족스러운 낚시를 위해 낚싯대를 업그레이드하려고 한다. 하지만 예산이 한정적이므로, 자기 자리에서 최소 k개의 유효 낚시터를 확보할 수 있는 만큼만 업그레이드하려고 한다.
현재 위치를 Z(0, 0)이라고 하자. 다각형 모양으로 생긴 각 낚시터들의 외곽선 정보가 입력으로 주어질 때, K개 이상의 유효 낚시터를 확보하기 위한 최소의 낚시 거리를 계산하라.

- 입력
첫 줄에는 현재 존재하는 낚시터의 수를 나타내는 자연수 N과 요구하는 최소의 유효 낚시터의 수 K가 주어진다. N과 K는 모두 10만 이하의 자연수며 K는 항상 N이하의 값을 가진다.
이후 총 N개의 낚시터에 대한 정보가 차례로 주어진다. 각 낚시터의 정보는 두 줄로 구성되어 있다.
첫 줄에는 낚시터를 나타내는 도형의 꼭짓점 수를 나타내는 자연수 Pi가 입력으로 주어진다.
두 번째 줄에는 해당 낚시터의 꼭짓점들의 좌표가 공백으로 구분되어 주어지며, 각 좌표는 x y형식으로 주어진다. 모든 좌표는 첫 번째 점을 기준으로 시계방향 혹은 반시계방향으로 주어진다. 모든 좌표는 정수이다.
각 낚시터가 서로 겹치는 경우는 없으며, 각 낚시터는 항상 넓이가 0보다 큰 다각형이며 서로 교차하지 않는다.

- 출력
최소 k개의 유효 낚시터를 확보할 수 있는 최소의 낚시 거리를 계산한 후, 이를 제곱한 값을 출력한다. 소수점 세 번째 자리에서 반올림하여 두 번째 자리까지 출력한다.

- 제한
Small (50점)
1 ≤ K ≤ N ≤ 100
3 ≤ Pi ≤ 10
-100 ≤ x, y ≤ 100
모든 낚시터는 볼록 다각형이다. 볼록 다각형이란, 도형의 모든 내각이 항상 180도 이하가 되는 다각형이다.

Large (50점)
1 ≤ K ≤ N ≤ 100,000
3 ≤ Pi ≤ 20
-100,000 ≤ x, y ≤ 100,000

- 예제
입력 1 : 
1 1
4
1 1 1 2 2 2 2 1
출력 1 : 
8.00
입력 2 : 
3 2
3
1 1 4 1 2 3
3
-2 -1 -3 -2 1 -4
3
-2 1 -1 4 -1 0
출력 2 : 
17.00
입력 3 : 
6 5
5
-14 8 -11 7 -11 5 -13 4 -15 5
4
-5 3 -7 1 -3 -6 -3 -1
6
0 2 3 4 6 2 6 0 4 -2 2 -3
4
-2 -4 0 -8 -3 -10 -6 -8
4
-4 8 -3 7 -5 6 -7 8
6
0 11 2 8 0 9 -2 6 -2 8 -1 9
출력 3 : 
121.00
*/

/* 한국어 주석
이 문제는 기하학적으로 원점을 기준으로 K개의 낚시터가 완전히 포함되는 최소 거리를 구하는 문제이다.
기하학적으로 원점에서 어떤 형태의 낚시터이든 완전히 포함되려면, 그 낚시터의 가장 먼 꼭지점이 포함되는지 확인하면 된다.
따라서 낚시터의 정보를 입력으로 받을 때, 각 꼭지점의 정보를 모두 저장하지 않고, 가장 먼 꼭지점에 대한 거리만 저장하면 된다. 또한 문제에서 거리의 제곱이라고 명시되어 있으므로 루트 연산은 하지 않아도 된다.
이후 낚시터 벡터 `v`에 대해 오름차순 정렬한 후 `v[K-1]`을 답으로 출력한다.
문제에서 소수점 두 자리까지 출력하라고 하였으므로 `<iomanip>` 라이브러리를 이용하여 소수점 출력을 한다.

거리 계산 시 숫자가 매우 커질 수 있으므로 `long long` 자료형을 사용해야 한다.
*/

/* English Problem Summary
- Problem
Fishing in small lakes or ponds, known as static water fishing, requires anglers to use a fixed position on land and a long fishing rod to catch fish in nearby waters.
Naturally, a longer casting distance for the fishing rod provides an advantage. The casting distance of the fishing line is referred to as the fishing range.
When drawing a circle with this distance as the radius, any fishing ground entirely contained within the circle is considered a valid fishing ground.
To ensure satisfactory fishing, anglers aim to upgrade their fishing rod to increase the fishing range.
Given a limited budget, they want to upgrade only enough to cover at least K valid fishing grounds from their fixed position at Z(0, 0).
For a set of fishing grounds defined by their polygonal boundaries, calculate the minimum fishing range required to cover at least K valid fishing grounds.

- Input
The input consists of the following:
1. The first line contains two natural numbers N and K, representing the total number of fishing grounds and the required number of valid fishing grounds, respectively. 1 <= K <= N <= 100,000.
2. The next 2 * N lines provide information about the fishing grounds:
   - The first line contains an integer P_i, the number of vertices for the polygon defining the fishing ground.
   - The second line contains P_i pairs of integers x and y, the coordinates of the polygon's vertices. These vertices are given in either clockwise or counterclockwise order.
All fishing grounds are non-overlapping, convex polygons with areas greater than zero.

- Output
Output the square of the minimum fishing range required to cover at least K fishing grounds. Round the result to two decimal places.

- Constraints
Small (50 points):
  1 <= K <= N <= 100
  3 <= P_i <= 10
  -100 <= x, y <= 100
  All fishing grounds are convex polygons.

Large (50 points):
  1 <= K <= N <= 100,000
  3 <= P_i <= 20
  -100,000 <= x, y <= 100,000

- Example
Input 1 : 
1 1
4
1 1 1 2 2 2 2 1
Output 1 : 
8.00
Input 2 : 
3 2
3
1 1 4 1 2 3
3
-2 -1 -3 -2 1 -4
3
-2 1 -1 4 -1 0
Output 2 : 
17.00
Input 3 : 
6 5
5
-14 8 -11 7 -11 5 -13 4 -15 5
4
-5 3 -7 1 -3 -6 -3 -1
6
0 2 3 4 6 2 6 0 4 -2 2 -3
4
-2 -4 0 -8 -3 -10 -6 -8
4
-4 8 -3 7 -5 6 -7 8
6
0 11 2 8 0 9 -2 6 -2 8 -1 9
Output 3 : 
121.00
*/

/* English Comment
This problem is about geometrically determining the minimum distance required to fully encompass K fishing spots around the origin.
To geometrically ensure that the origin fully contains any shape of a fishing spot, we only need to verify whether its farthest vertex is included.
Thus, when processing input for fishing spots, there is no need to store the details of all vertices.
Instead, only the distance to the farthest vertex should be stored. Furthermore, since the problem specifies using the square of the distance, there is no need to perform square root operations.
Afterward, sort the vector of fishing spots v in ascending order and output v[K-1] as the answer.
As the problem requires outputting the result to two decimal places, use the <iomanip> library to format the output accordingly.

Since the distance calculations can result in very large numbers, the long long data type must be used.
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector<long long> p(N);

	for (int i = 0; i < N; ++i) {
		int pSize;
		cin >> pSize;

		long long x, y;
		long long maxDistance = 0;	// use the temporary variable to reduce time consumption
		for (int j = 0; j < pSize; ++j) {
			cin >> x >> y;
			long long newDistance = x * x + y * y;
			if (maxDistance < newDistance) maxDistance = newDistance;
		}
		p[i] = maxDistance;
	}

	sort(p.begin(), p.end());
	cout << fixed << setprecision(2);
	cout << (double)p[K - 1] << "\n";

	return 0;
}

//Finish