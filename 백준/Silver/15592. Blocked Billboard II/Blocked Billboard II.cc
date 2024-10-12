/*
- Title : 15592 - Blocked Billboard II
- Start Time : 24-10-11, 23:27, 24-10-12, 00:50
- End Time :   24-10-12, 00:04, 24-10-12, 01:07
- Try : 3(1 : Typo, 1 : special case)
- Category : geometry
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
두 개의 바닥과 평행한 직사각형 광고판이 있다. 하나는 소 사료를 광고하고 있고, 다른 하나는 잔디깎기를 광고하고 있다.
소 사료 광고판은 잔디깎이 광고판 보다 앞에 배치되어 있다.
정면에서 잔디깎기 광고판이 보이지 않게 직사각형의 방수포 하나를 광고판과 평행하게 붙이려고 한다.(즉, 기울일 수 없음.)
이 때 소 사료 광고판이 이미 잔디깎기 광고판을 가리고 있으면 가려지지 않은 부분만 가리면 된다.

두 광고판의 위치가 주어질 때, 필요한 방수포의 최소 면적을 구하시오.

- 입력
첫 번째 줄에는 잔디깎기 광고판의 위치가 두 번째 줄에는 소 사료 광고판의 위치가 다음과 같이 주어진다.
x1, y1, x2, y2
(x1, y1)은 왼쪽 아래 (x2, y2)는 오른쪽 위의 좌표이다.
소 사료 광고판은 잔디깎기 광고판의 전부, 일부를 가리거나 전혀 가리지 않을 수 있다.
모든 좌표는 -1000에서 +1000 범위이다.

- 출력
잔디깎기 광고판을 보이지 않게 덮는 데 필요한 방수포의 최소 면적을 출력하시오.

- 예제
입력 :
2 1 7 4
5 -1 10 3
출력 : 
15

- 힌트
위 예제에서는 소 사료 광고판이 잔디깎기 광고판의 오른쪽 아래 모서리를 가린다.
하지만 하나의 직사각형 방수포를 사용해야 하기 때문에 잔디깎기 광고판 전체 크기와 같은 크기의 방수포를 사용해야 한다.
*/

/* 한국어 주석
이 문제는 좌표평면에서 생각해야 하는 문제이다.

소 사료 광고판을 cowFeed, 잔디깎기 광고판을 lawnmower라고 하자.
두 광고판의 위치와 크기에 따라 다양한 경우가 발생할 수 있다.

1. cowFeed가 lawnmower를 완벽히 가리는 경우 : 이때는 방수포가 필요하지 않다.
2. cowFeed가 lawnmower에 대해서 X축 혹은 Y축 하나에 대해서 가리는 경우
이 경우 cowFeed가 lawnmower에 대해서 사이에 껴있는 경우를 먼저 제외해야 한다. 이 경우에는 lawnmower과 같은 넓이의 방수포가 필요하다.
만약 사이에 껴있지 않다면 cowFeed는 방수포의 크기를 줄일 수 있다.
이때 그림을 그려서 확인해가며 코드를 작성하면 편리하다.
3. 위의 경우에 해당하지 않은 경우 : lawnmower과 같은 넓이의 방수포가 필요하다.
*/

/* English Problem Summary
- Question
There are two rectangular billboards, both parallel to the ground. One advertises cattle feed, and the other advertises lawnmowers.
The cattle feed billboard is positioned in front of the lawnmower billboard.
To completely cover the lawnmower billboard from a front view, a waterproof tarp, parallel to the billboards, will be placed over it. (The tarp cannot be tilted.)
If the cattle feed billboard already partially or fully obscures the lawnmower billboard, only the remaining visible parts need to be covered.

- Input
The first line contains the coordinates of the lawnmower billboard, and the second line contains the coordinates of the cattle feed billboard in the following format:
x1, y1, x2, y2
where (x1, y1) is the bottom-left corner, and (x2, y2) is the top-right corner.
The cattle feed billboard may fully, partially, or not cover the lawnmower billboard at all.
All coordinates are within the range -1000 to +1000.

- Output
Print the minimum area of the tarp required to completely cover the lawnmower billboard.

- Example
Input :
2 1 7 4
5 -1 10 3
Output :
15

- Hint
In this example, the cattle feed billboard covers the bottom-right corner of the lawnmower billboard.
However, a single rectangular tarp must be used, meaning a tarp as large as the lawnmower billboard itself is required.
*/

/* English Comment
This problem requires reasoning on a coordinate plane.

Let cowFeed represent the cattle feed billboard and lawnmower represent the lawnmower billboard.
Various cases may arise depending on the positions and sizes of the two billboards.

1. When cowFeed completely covers lawnmower: In this case, no tarp is needed.
2. When cowFeed partially overlaps lawnmower along either the X-axis or Y-axis:
In this case, first check if cowFeed is fully enclosed within lawnmower along one axis. If it is, the tarp needs to cover the entire area of lawnmower.
If cowFeed does not fall completely within lawnmower, then it can reduce the required tarp area. Drawing the configuration may help when writing the code for these conditions.
3. In any other cases: A tarp of the same size as lawnmower is needed.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int lawnmowerX1, lawnmowerX2;
	int lawnmowerY1, lawnmowerY2;
	cin >> lawnmowerX1 >> lawnmowerY1 >> lawnmowerX2 >> lawnmowerY2;

	int cowFeedX1, cowFeedX2;
	int cowFeedY1, cowFeedY2;
	cin >> cowFeedX1 >> cowFeedY1 >> cowFeedX2 >> cowFeedY2;

	bool bigX = false;
	bool bigY = false;

	if (cowFeedX1 <= lawnmowerX1 && cowFeedX2 >= lawnmowerX2)
		bigX = true;
	
	if (cowFeedY1 <= lawnmowerY1 && cowFeedY2 >= lawnmowerY2)
		bigY = true;

	// cowFeed completely cover lawnmower
	if (bigX && bigY)
		cout << 0;

	// cowFeed cover lawnmower in X-axis.
	else if (bigX) {
		// In-between Case
		if (lawnmowerY2 > cowFeedY2 && lawnmowerY1 < cowFeedY1)
			cout << (lawnmowerX2 - lawnmowerX1) * (lawnmowerY2 - lawnmowerY1);
		else if (lawnmowerY2 > cowFeedY2) {
			cout << (lawnmowerX2 - lawnmowerX1) * (lawnmowerY2 - max(lawnmowerY1, cowFeedY2));
		}
		else {
			cout << (lawnmowerX2 - lawnmowerX1) * (min(lawnmowerY2, cowFeedY1) - lawnmowerY1);
		}
	}

	// cowFeed cover lawnmower in Y-axis.
	else if (bigY) {
		// In-between Case
		if (lawnmowerX2 > cowFeedX2 && lawnmowerX1 < cowFeedX1)
			cout << (lawnmowerX2 - lawnmowerX1) * (lawnmowerY2 - lawnmowerY1);
		else if (lawnmowerX2 > cowFeedX2) {
			cout << (lawnmowerX2 - max(lawnmowerX1, cowFeedX2)) * (lawnmowerY2 - lawnmowerY1);
		}
		else {
			cout << (min(lawnmowerX2, cowFeedX1) - lawnmowerX1) * (lawnmowerY2 - lawnmowerY1);
		}
	}

	else {
		cout << (lawnmowerX2 - lawnmowerX1) * (lawnmowerY2 - lawnmowerY1);
	}
}

//Finish