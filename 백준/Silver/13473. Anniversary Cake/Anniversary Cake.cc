/*
- Title : 13473 - Anniversary Cake
- Start Time : 24-11-03, 00:07
- End Time : 24-11-03, 00:33
- Try : 1
- Category : mathematics, geometry
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
정수 좌표로 이루어진 직사각형 모양의 케이크와 두 개의 촛불이 있다.
촛불은 각각 케이크의 다른 정수 지점에 놓여져 있다. 케이크 자르기는 케이크 가장자리의 정수 지점에서 시작하고 끝나야 하며 촛불에 닿아서는 안 된다.
또한 각 조각에는 정확히 하나의 촛불이 있어야 한다. 케이크 자르기의 시작점과 끝점을 찾는 프로그램을 작성하라.

- 입력
한 줄에 여섯 개의 정수가 입력된다.
w, h - 케이크 크기; a x, a y - 첫 번째 촛불의 x 및 y 좌표; b x, b y - 두 번째 촛불의 좌표
(3 ≤ w, h ≤ 10^9 ; 0 < a x, b x < w; 0 < a y, b y < h; a x ≠ b x 또는 a y ≠ b y)

- 출력
네 개의 정수 s x , s y , e x , e y 를 출력한다. 이는 케이크 자르기의 시작 및 종료 좌표이다. 케이크 자르기의 시작 및 종료 지점은 모두 케이크의 가장자리에 속해야 한다.
답이 여러 개 있는 경우, 그 중 하나를 출력한다.

- 예제
입력 :
7 3 2 2 3 2 
출력 : 
0 0 4 3
*/

/* 한국어 주석
이 문제는 좌표 평면에서 두 점을 나누는 선분을 찾는 문제이다.

제한 조건이 해답을 간단히 구성할 수 있게 하므로 여러 방식으로 해결할 수 있다.

좌표 값의 범위가 int 자료형 내에 있으므로 int 자료형으로 처리할 수 있다.
*/

/* English Problem Summary
- Question
A rectangular cake with integer coordinates has two candles placed at different integer locations on it.
The goal is to cut the cake, starting and ending at integer points along the cake's edges, without crossing any candle locations.
Each slice should contain exactly one candle. Write a program to find the start and end points of the cake cut.

- Input
A single line containing six integers:
w, h - the width and height of the cake; a x , a y - the x and y coordinates of the first candle; b x, b y - the x and y coordinates of the second candle
(3 ≤ w, h ≤ 10^9 ; 0 < a x, b x < w; 0 < a y, b y < h; a x ≠ b x or a y ≠ b y)

- Output
Print four integers s x, s y, e x, e y, which represent the starting and ending coordinates of the cake cut.
The starting and ending points must be on the edge of the cake. If there are multiple valid answers, print any one of them.

- Example
Input :
7 3 2 2 3 2
Output :
0 0 4 3
*/

/* English Comment
This problem is about finding a line segment that divides two points on a coordinate plane.

The constraints simplify the solution, allowing multiple methods for finding a solution.

Since the coordinate values are within the range of an int type, it can be handled entirely with int variables.
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int w, h, aX, aY, bX, bY;

	cin >> w >> h >> aX >> aY >> bX >> bY;

	if (aX == bX) {
		cout << 0 << " " << aY << " " << w << " " << bY;
		return 0;
	}

	else {
		cout << aX << " " << 0 << " " << bX << " " << h;
		return 0;
	}

	return 0;
}

//Finish