/*
- Title : 5364 - Escape Route
- Start Time : 24-09-11, 19:??
- End Time : 24-09-11, 20:11
- Try : 1
- Category : no constraint, geometry
*/

/* 한국어 문제 요약
- 문제
현재 위치의 좌표 x,y가 주워지고,이후 n-1의 만큼의 위치가 주어진다.
현재 위치에서 가장 가까운 위치를 찾아라.
두 지점 (x1, y1)과 (x2, y2) 사이의 거리는 다음과 같은 공식으로 구할 수 있다.
거리 = ((x1 - x2)^2 + (y1 - y2)^2)^1/2

- 입력
양의 정수 n뒤에 n쌍의 정수 (x,y)가 주어진다.
각 쌍은 별도의 줄에 있고 x와 y 사이에 공백이 있다.
첫 번째 쌍은 현재 위치의 좌표이고 그 이후의 모든 쌍은 다른 위치의 좌표이다.

- 출력
현재 위치의 좌표, 가장 가까운 다른 위치의 좌표, 그리고 가장 가까운 다른 위치까지의 거리를 소수점 두 자리까지 출력한다.

- 예제
입력 : 
7
5 4
-80 9
100 89
67 -40
10 20
15 -5
34 0
출력 : 
5 4
15 -5
13.45
*/

/* 한국어 주석
이 문제는 주어진 공식을 이용하면 간단하게 구현할 수 있다.
다만, 각 좌표와 좌표의 개수 n에 대한 정보가 각각 정수와 양의 정수라는 것 외에 별다른 제약이 없다.
또한, 좌표가 겹칠 수 있는지에 대한 정보도 제공되지 않으므로, 이 부분을 적절히 처리하여 구현할 필요가 있다.

백준의 질문 게시판에 제한을 명시해달라는 요청이 있었지만, 1년 전의 요청이라 수정될지는 확실하지 않다.
*/

/* English Problem Summary
- Question
The coordinates (x, y) of a current position are given, followed by the coordinates of n-1 other locations.
Find the location closest to the current position.
The distance between two points (x1, y1) and (x2, y2) can be calculated using the following formula:
Distance = ((x1 - x2)^2 + (y1 - y2)^2)^1/2

- Input
A positive integer n is provided, followed by n pairs of integers (x, y).
Each pair is provided on a separate line, with a space between x and y.
The first pair represents the coordinates of the current position, and all subsequent pairs represent the coordinates of other locations.

- Output
Print the coordinates of the current position, the coordinates of the closest location, and the distance to the closest location, rounded to two decimal places.

- Example
Input :
7
5 4
-80 9
100 89
67 -40
10 20
15 -5
34 0
Output :
5 4
15 -5
13.45
*/

/* English Comment
This problem can be easily implemented using the given formula.
However, there are no specific constraints provided other than the fact that the coordinates are integers and the number of coordinates, n, is a positive integer.
Additionally, since there is no information about whether the coordinates can overlap, it is necessary to handle this possibility appropriately during the implementation.

There was a request on the Baekjoon Q&A board to specify the constraints, but since the request was made a year ago, it's uncertain whether it will be updated.
*/

#include<iostream>
#include<iomanip>
#include<climits>
#include<cmath>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	long long n;
	cin >> n;

	long long currentX, currentY;
	cin >> currentX >> currentY;

	long long closestX = 0;
	long long closestY = 0;

	double distance = 10'000'000;	// There is no constraint. Thus, use a moderately large number.

	for (long long i = 0; i < n - 1; i++) {
		long long x, y;
		cin >> x >> y;
		
		double currentDistance = (x - currentX) * (x - currentX) + (y - currentY) * (y - currentY);
		currentDistance = sqrt(currentDistance);

		//debug
		//cout << "x : " << x << ", y : " << y << " distance : " << currentDistance << "\n";

		if (currentDistance < distance) {
			closestX = x;
			closestY = y;
			distance = currentDistance;
		}
	}

	cout << currentX << " " << currentY << "\n";
	cout << closestX << " " << closestY << "\n";
	cout << fixed << setprecision(2) << distance << "\n";
}

//Finish