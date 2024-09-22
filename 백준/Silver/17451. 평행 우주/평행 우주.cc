/*
- Title : 17451 - Parallel Universe
- Start Time : 24-09-23, 05:13
- End Time : 24-09-23, 05:44
- Try : 1
- Category : greedy algorithm, mathematics
*/

/* 한국어 문제 요약
- 문제
현재 행성 0에 있다. 행성 0, 행성 1, 행성 2, ..., 행성 (n-1)을 순서대로 확인하고 행성 n에 가야한다.
출발 속도는 원하는 만큼 올릴 수 있다. 행성 0을 벗어나면 속도를 떨어뜨릴 수 있을 뿐 높일 수는 없다.
다음 지역에 가기 위해서는 원칙적으로는 필요한 속도를 정확히 맞춰야 하지만, 다행히도 일정한 간격을 두고 있기 때문에 필요한 속도의 양의 정수 배로도 다음 지역으로 이동할 수 있다.
어떤 행성이든 도달한 뒤 속도를 유지한 채 다음 행성으로 이동할 수 있다.

모든 1 ≤ i ≤ n에 대해, 행성 (i-1)에서 행성 i로 이동하는 데 필요한 (최소) 속도 vi가 주어진다. 행성 0에서 올려야 하는 속도를 최소화하시오.

- 입력
첫째 줄에 n(1 ≤ n ≤ 3*10^5)이 주어진다.
둘째 줄에 n개의 정수 v1, v2, ..., vn이 공백을 사이에 두고 주어진다. 모든 정수 1 ≤ i ≤ n에 대해 1 ≤ vi ≤ 10^9을 만족한다.

- 출력
수 하나를 출력한다. 이 수는 행성 0에서 올려야 하는 속도의 최솟값이다.

- 예제
입력 1:
5
300 400 500 400 300
출력 1:
900
*/

/* 한국어 주석
이 문제는 그리디 알고리즘으로 해결할 수 있다.
뒤에서부터 순서대로 이전 행성으로 이동하며, 조건에 맞춰 필요한 출발 속도를 증가시킨다.

먼저 출발 속도가 현재 행성에서 필요한 속도와 같다면 특별한 처리없이 넘어간다.

만약 출발 속도가 현재 행성에서 필요한 속도보다 작다면 현재 행성에서 필요한 속도만큼 출발 속도를 증가시킨다.

만약 출발 속도가 현재 행성에서 필요한 속도보다 크다면 정수 배인지 확인하기 위하여 모듈러 연산을 사용하여 나머지를 확인한다.
나머지가 없으면 이미 정수 배이므로 특별한 처리없이 넘어간다.
나머지가 있으면 정수배를 맞추기 위하여 숫자를 필요한 만큼 증가시킨다.

숫자의 범위가 매우 크므로 long long 자료형을 사용하여 프로그램을 작성한다.
*/

/* English Problem Summary
- Question
You are currently on Planet 0. You need to check Planet 0, Planet 1, Planet 2, ..., up to Planet (n-1), and eventually reach Planet n.
You can increase your departure speed as much as you want. However, once you leave Planet 0, you can only reduce your speed; you cannot increase it again.
To move to the next planet, you must match the required speed exactly.
But fortunately, the planets are spaced evenly, so you can also move to the next planet at any positive integer multiple of the required speed.
After reaching a planet, you can move to the next one while maintaining your speed.

For all 1 ≤ i ≤ n, the (minimum) speed required to travel from Planet (i-1) to Planet i is given as vi. Minimize the speed you need to set when departing from Planet 0.

- Input
The first line contains an integer n (1 ≤ n ≤ 3*10^5).
The second line contains n integers v1, v2, ..., vn separated by spaces. For all integers 1 ≤ i ≤ n, 1 ≤ vi ≤ 10^9.

- Output
Print a single number, the minimum speed required when departing from Planet 0.

- Example
Input 1:
5
300 400 500 400 300
Output 1:
900
*/

/* English Comment
This problem can be solved using a greedy algorithm.
Starting from the last planet, move backward to the previous planet, adjusting the departure speed as needed.

First, if the departure speed matches the required speed for the current planet, no special action is needed, and move on to the next one.

If the departure speed is less than the required speed for the current planet, increase the departure speed to match the required speed.

If the departure speed is greater than the required speed, use modular arithmetic to check if the current speed is an integer multiple of the required speed.
If there is no remainder, it is already a multiple, so no additional action is needed.
If there is a remainder, increase the speed by the necessary amount to make it an integer multiple.

Since the number range is very large, the program should use the long long data type.
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

	vector<long long> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	long long startVelocity = v[n - 1];

	for (int i = n-2; i >= 0; --i) {
		if (v[i] > startVelocity) {
			startVelocity = v[i];
		}
		else if (v[i] < startVelocity) {
			//Avoid modular
			long long k = (startVelocity + v[i] - 1) / v[i];
			startVelocity = k * v[i];

			//long long modSV = startVelocity % v[i];
			//// check integer multiple
			//if (modSV != 0)
			//	// if not, make the integer multiple
			//	startVelocity += v[i] - modSV; 			
		}
	}

	cout << startVelocity;
}

//Finish