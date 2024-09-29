/*
- Title : 11916 - Throwing Balls
- Start Time : 24-09-29, 08:??
- End Time : 24-09-29, 08:38
- Try : 1
- Category : conditional statement, simulation
*/

/* 한국어 문제 요약
- 문제
한 투수가 있다. 그는 스트라이크를 던지지 못한다. 그는 경기 중에 '볼', '몸에 맞는 공', '폭투' 이렇게 3가지 종류의 공을 던진다.
그를 상대하는 타자는 배트를 휘두르지 않는다.

한 타자를 상대로 '볼'을 4번 던지거나 '몸에 맞는 공'을 던질 경우, 타자는 1루로 간다.
기존 주자는 아래 조건에 따라 이동한다.
1루 주자는 무조건 2루로 간다.
2루 주자는 1루에 주자가 있는 경우에만 3루로 간다.
3루 주자는 1, 2루에 주자가 있는 경우에만 한해서 홈으로 간다. 이때 3루 주자는 1득점을 한다.

한편, '폭투'를 던지면 주자는 아래 조건에 의하여 이동한다.
1, 2루에 있던 주자는 각각 2, 3루로 간다.
3루 주자는 홈으로 들어오면서 1득점을 한다.

'폭투'도 '볼'의 한 종류이므로, '볼'-'폭투'-'볼'-'볼'도 4개의 '볼'로 인정이 되며, 4번째 '볼'이 폭투라면 타자도 1루로 간다.

이 투수는 1회 초에 N개의 공을 던지고 다른 투수로 교체되었다. 
해당 투수가 던진 공의 종류가 주어질 때 해당 투수의 총 실점을 구하는 프로그램을 작성하여라.
단, 한 타자를 상대하는 도중에 이 투수가 다른 투수로 교체될 수도 있음에 유의하여라.

- 입력
첫 번째 줄에는 해당 투수가 강판당할 때까지 던진 공의 수 N이 주어진다. (1 ≤ N ≤ 50,000)
두 번째 줄에는 해당 투수가 던진 공의 종류가 주어진다. '볼', '몸에 맞는 공', '폭투'는 각각 1, 2, 3으로 주어진다.

- 출력
해당 투수의 총 실점을 출력한다.

- 예제
입력 :
16
1 1 2 1 3 3 1 2 1 1 3 1 1 1 3 3
출력 :
3

- 힌트
1번 타자 : 볼-볼-몸에 맞는 공 (주자 1루)

2번 타자 : 볼-폭투(주자 2루)-폭투(주자 3루)-볼 (주자 1, 3루)

3번 타자 : 몸에 맞는 공 (주자 1, 2, 3루)

4번 타자 : 볼-볼-폭투(1실점, 주자 2, 3루)-볼 (주자 1, 2, 3루)

5번 타자 : 볼-볼-폭투(1실점, 주자 2, 3루)-폭투(1실점, 주자 1, 3루)
*/

/* 한국어 주석
이 문제는 N번의 투수가 던지는 야구공에 대해 조건에 맞게 시뮬레이션하여 실점을 계산하는 문제이다.
구현 자체는 간단하지만, 문제의 조건이 굉장히 복잡하므로 주의가 필요하다.

우선, 기본적인 야구 규칙과 달리 투수는 스트라이크를 던지지 않고, 타자는 배트를 휘두르지 않는다.
투수는 야구공을 던지면 '볼', '몸에 맞는 공', '폭투' 이렇게 3가지 종류의 공을 던지고 각각 1, 2, 3으로 주어진다.

여기서 중요한 점은 볼과 폭투는 모두 볼이기에 볼 카운트를 증가시킨다.
베이스에 타자가 존재하는 것은 bool 자료형 벡터로 구현하면 간단하다.
항상 3루부터 확인하여 시뮬레이션을 진행한다.

먼저 볼인 경우는(입력이 1인 경우) 우선 현재 볼 카운트를 증가시킨다.
만약 볼 카운트가 4인 경우, 볼 카운트를 0으로 변경한다. 베이스 3이 true인 경우 실점(lostPoint)를 증가시키고 베이스 3을 false로 변경한다.
베이스 2와 베이스 1이 모두 true인 경우 베이스 3을 true로 설정하고 베이스 2를 false로 변경한다.
베이스 1이 true인 경우 베이스 2를 true로 설정하고 베이스 1을 false로 변경한다.
베이스 1은 true로 설정한다.

하지만 위의 시뮬레이션을 보면 베이스 1을 마지막에 true로 설정하므로 베이스 1을 false로 변경하는 작업은 유의미한 작업이 아니다.
따라서 다시 정리하면 아래와 같다.

볼인 경우(입력이 1인 경우), 현재 볼 카운트를 증가시킨다.
만약 볼 카운트가 4인 경우, 
볼 카운트를 0으로 변경한다. 베이스 3이 true인 경우 실점(lostPoint)를 증가시키고 베이스 3을 false로 변경한다.
베이스 2와 베이스 1이 모두 true인 경우 베이스 3을 true로 설정하고 베이스 2를 false로 변경한다.
베이스 1이 true인 경우 베이스 2를 true로 설정한다. 베이스 1은 true로 설정한다.

몸에 맞는 공인 경우(입력이 2인 경우)는 위의 과정에서 "만약 볼 카운트가 4인 경우"의 조건을 확인하지 않고 진행하면 된다.

정리하면 몸에 맞는 공인 경우(입력이 2인 경우)는
볼 카운트를 0으로 변경한다. 베이스 3이 true인 경우 실점(lostPoint)를 증가시키고 베이스 3을 false로 변경한다.
베이스 2와 베이스 1이 모두 true인 경우 베이스 3을 true로 설정하고 베이스 2를 false로 변경한다.
베이스 1이 true인 경우 베이스 2를 true로 설정한다. 베이스 1은 true로 설정한다.

마지막으로 폭투인 경우(입력이 3인 경우), 현재 볼 카운트를 증가시킨다.
베이스 3이 true인 경우 실점(lostPoint)를 증가시키고 베이스 3을 false로 변경한다.
베이스 2이 true인 경우 베이스 3을 true로 설정하고 베이스 2를 false로 변경한다.
베이스 1이 true인 경우 베이스 2를 true로 설정한다. 베이스 1을 false로 변경한다.
만약 볼 카운트가 4인 경우 볼 카운트를 0으로 변경하고 베이스 1을 true로 설정한다.

위와 같이 투구를 N번 처리한 후의 실점(lostPoint)를 출력한다.
*/

/* English Problem Summary
- Question
There is a pitcher who cannot throw strikes. During the game, he throws three types of pitches: 'Ball', 'Hit by Pitch', and 'Wild Pitch'.
The batter facing him does not swing the bat.
If the pitcher throws 4 'Balls' or hits the batter with a 'Hit by Pitch', the batter walks to first base.
The existing base runners move according to the following conditions:

A runner on first base always advances to second base.
A runner on second base only advances to third base if there is a runner on first.
A runner on third base only advances to home if there are runners on both first and second base. In this case, the runner on third scores 1 run.
Meanwhile, when a 'Wild Pitch' is thrown, the base runners move according to the following conditions:

The runners on first and second base advance to second and third, respectively.
The runner on third base advances to home and scores 1 run.
A 'Wild Pitch' also counts as a 'Ball'.
Therefore, a sequence such as 'Ball-Wild Pitch-Ball-Ball' is considered 4 'Balls', and if the 4th 'Ball' is a wild pitch, the batter still walks to first base.

This pitcher throws N pitches in the top of the first inning before being replaced by another pitcher.
Given the types of pitches thrown by the pitcher, write a program to calculate the total number of runs allowed by this pitcher.
Note that the pitcher can be replaced while facing a batter.

- Input
The first line contains an integer N, the number of pitches thrown by the pitcher until being replaced (1 ≤ N ≤ 50,000).
The second line contains the types of pitches thrown by the pitcher, represented as '1' for 'Ball', '2' for 'Hit by Pitch', and '3' for 'Wild Pitch'.

- Output
Print the total number of runs allowed by the pitcher.

- Example
Input :
16
1 1 2 1 3 3 1 2 1 1 3 1 1 1 3 3
Output :
3

- Hint
1st batter: Ball-Ball-Hit by Pitch (runner on 1st base)
2nd batter: Ball-Wild Pitch (runner on 2nd base)-Wild Pitch (runner on 3rd base)-Ball (runners on 1st and 3rd)
3rd batter: Hit by Pitch (runners on 1st, 2nd, and 3rd)
4th batter: Ball-Ball-Wild Pitch (1 run, runners on 2nd and 3rd)-Ball (runners on 1st, 2nd, and 3rd)
5th batter: Ball-Ball-Wild Pitch (1 run, runners on 2nd and 3rd)-Wild Pitch (1 run, runners on 1st and 3rd)
*/

/* English Comment
This problem involves simulating the pitching of N baseball throws and calculating the runs allowed according to the given conditions.
While the implementation itself is simple, careful attention is needed due to the complexity of the problem's conditions.

First, unlike basic baseball rules, the pitcher does not throw strikes, and the batter does not swing.
The pitcher throws one of three types of pitches: 'Ball', 'Hit by Pitch', or 'Wild Pitch', represented by 1, 2, and 3, respectively.

An important point is that both 'Ball' and 'Wild Pitch' count as balls, so they both increase the ball count.
The presence of runners on bases can be efficiently represented using a bool vector. Always check from third base first when simulating the game.

For a 'Ball' (input 1), first increase the current ball count.
If the ball count reaches 4, reset the ball count to 0.
If there is a runner on third base (base 3 is true), increase the run count (lostPoint) and set base 3 to false.
If both bases 1 and 2 are occupied, set base 3 to true and base 2 to false.
If base 1 is occupied, set base 2 to true. Finally, set base 1 to true.

However, in the above simulation, setting base 1 to false is unnecessary since base 1 is always set to true at the end.
Therefore, the process can be simplified as follows:

For a 'Ball' (input 1), increase the ball count.
If the ball count reaches 4, reset the ball count to 0.
If base 3 is occupied, increase lostPoint and set base 3 to false.
If both bases 1 and 2 are occupied, set base 3 to true and base 2 to false.
If base 1 is occupied, set base 2 to true. Finally, set base 1 to true.

For a 'Hit by Pitch' (input 2), the same process is followed, but without checking the ball count.

In summary, for a 'Hit by Pitch' (input 2):
Reset the ball count to 0.
If base 3 is occupied, increase lostPoint and set base 3 to false.
If both bases 1 and 2 are occupied, set base 3 to true and base 2 to false.
If base 1 is occupied, set base 2 to true. Finally, set base 1 to true.

For a 'Wild Pitch' (input 3), increase the ball count.
If base 3 is occupied, increase lostPoint and set base 3 to false.
If base 2 is occupied, move the runner to third base (set base 3 to true and base 2 to false).
If base 1 is occupied, move the runner to second base (set base 2 to true and base 1 to false).
If the ball count reaches 4, reset the ball count and set base 1 to true.

After processing N pitches in this manner, print the total number of runs allowed (lostPoint).
*/

#include<iostream>
#include<vector>

using namespace std;

void hitByPitchOrBall() {

}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int lostPoint = 0;

	vector<bool> base(4, false);	// 1 index base
	//bool base[4] = { false }; // Index 1 to 3

	int balls = 0;

	while (N--) {
		int baseball;
		cin >> baseball;

		// Ball, 볼
		if (baseball == 1) {
			balls++;
			if (balls == 4) {
				balls = 0;
				if (base[3] && base[2] && base[1]) {
					base[3] = false;
					lostPoint++;
				}
				if (base[2] && base[1]) {
					base[3] = true;
					base[2] = false;
				}
				if (base[1]) {
					base[2] = true;
					//base[1] = false;
				}
				base[1] = true;
			}
		}

		// Hit by Pitch, 몸에 맞는 공
		else if (baseball == 2) {
			balls = 0;
			if (base[3] && base[2] && base[1]) {
				base[3] = false;
				lostPoint++;
			}
			if (base[2] && base[1]) {
				base[3] = true;
				base[2] = false;
			}
			if (base[1]) {
				base[2] = true;
				//base[1] = false;
			}
			base[1] = true;
			
		}

		// Wild Pitch, 폭투
		else {
			balls++;
			if (base[3]) {
				base[3] = false;
				lostPoint++;
			}
			for (int i = 2; i > 0; --i) {
				if (base[i]) {
					base[i + 1] = true;
					base[i] = false;
				}
			}
			if (balls == 4) {
				balls = 0;
				base[1] = true;
			}
		}
	}

	cout << lostPoint;
}

//Finish