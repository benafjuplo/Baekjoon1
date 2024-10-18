/*
- Title : 2890 - Kayak
- Start Time : 24-10-17, 23:11
- End Time : 24-10-17, 23:40
- Try : 1
- Category : string, tuple, sorting
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
카약 대회가 위성 사진으로 촬영되었다.
사진은 R행 C열 구성되며, 각 줄의 첫 글자는 'S'는 출발선을, 마지막 글자 'F'는 결승선을 의미한다.

대회에 참가한 팀은 총 9팀이고, 각 팀은 1부터 9까지 번호가 매겨져 있다.
각 팀은 항상 열에 대해 연속하는 세 칸을 차지하며, 팀 번호로 표시한다. 물은 '.'로 나타난다.

각 팀의 순위는 결승선과의 거리가 가까울수록 높다. 동일한 거리의 팀들은 같은 등수로 취급된다.

위성 사진이 주어졌을 때 현재 순위를 계산하는 프로그램을 작성하라.

- 입력
첫째 줄에 R과 C가 주어진다.
다음 R개 줄에는 '.', 'S', 'F', '1'~'9'로 구성된 위성 지도가 주어진다.
한 줄에는 최대 한 개의 카약만 있고, 위성 사진에 있는 카약은 항상 9개이다. (10 ≤ R, C ≤ 50)

- 출력
출력은 총 9줄을 해야 한다. i번째 줄에는 i번 팀의 등수를 출력한다. (i=1~9)

- 예제
입력 1 : 
10 10
S.....111F
S....222.F
S...333..F
S..444...F
S.555....F
S666.....F
S.777....F
S..888...F
S...999..F
S........F
출력 1 :
1
2
3
4
5
6
5
4
3
입력 2 :
10 15
S..........222F
S.....111.....F
S...333.......F
S...555.......F
S.......444...F
S.............F
S......777....F
S..888........F
S........999..F
S...666.......F
출력 2 :
5
1
6
3
6
6
4
7
2
*/

/* 한국어 주석
이 문제는 문자열을 분석하여 팀 순위를 계산하는 문제이다.

우선 팀들의 정보를 크기가 3인 tuple로 저장한다. tuple의 원소들은 순서대로 팀 순번, 카약 위치, 팀 순위로 저장된다.
tuple이 아닌 pair벡터 2개와 같이 다른 형태로도 구현 가능하다.

우선 tuple의 팀 순번을 초기화한다.

문자열은 공백을 포함하지 않고 있기에 cin으로 입력받아 line으로 저장한다.
결승선 F를 제외한 문자열에서 '.'으로 지막으로 끝나는 위치를 find_last_not_of() 함수를 이용하여 찾아 tuple에 저장한다.
만약 위치가 0인 경우는 그 줄에 카약이 없는 경우이므로 tuple에 저장하지 않는다.

이후 sort() 함수를 사용하여 정렬하는데 기준은 카약 위치로 내림차순 정렬한다.
이 때 사용자 정의 정렬 함수가 필요한데 여기서는 익명 함수(람다 함수)를 사용하였다.

이후 정렬 순서대로 순위를 매긴다. 이 때 카약 위치가 달라지는 경우 순위를 증가시켜서 동일한 순위를 구현한다.
동일 순위의 개수는 다음 등수를 증가시키지 않는다. 예를 들어 2등이 2명이어도 다음 순위는 3등이다.

마지막으로 다시 팀 순번을 기준으로 오름차순 정렬한다.
이전 처럼 익명 함수를 사용하여 정렬한다.

마지막으로 순서대로 tuple의 세 번째 원소에 저장된 팀 순위를 출력한다.
*/

/* English Problem Summary
- Question
A kayaking race has been captured via satellite imagery.
The image is composed of R rows and C columns. The first character of each row represents the starting line 'S', and the last character 'F' represents the finish line.

A total of 9 teams are participating, each labeled from 1 to 9.
Each team occupies three consecutive columns in the grid and is marked by its team number. Water is represented by ..

Teams are ranked based on their distance to the finish line, with those closer to the finish line ranked higher. Teams at the same distance share the same rank.

Write a program to calculate the current rankings based on the satellite image.

- Input
The first line contains R and C.
The next R lines contain the satellite map composed of characters ., S, F, and digits 1 through 9.
Each line contains at most one kayak team, and there are exactly 9 kayaks in the image. (10 ≤ R, C ≤ 50)

- Output
Output consists of 9 lines, with the i-th line showing the rank of team i (where i=1~9).

- Example
Input 1 :
10 10
S.....111F
S....222.F
S...333..F
S..444...F
S.555....F
S666.....F
S.777....F
S..888...F
S...999..F
S........F
Output 1 :
1
2
3
4
5
6
5
4
3
Input 2 :
10 15
S..........222F
S.....111.....F
S...333.......F
S...555.......F
S.......444...F
S.............F
S......777....F
S..888........F
S........999..F
S...666.......F
Output 2 :
5
1
6
3
6
6
4
7
2
*/

/* English Comment
This problem involves analyzing strings to calculate team rankings.

First, store the information about the teams in a tuple of size 3. The elements of the tuple are, in order: team number, kayak position, and team rank.
It can also be implemented in other forms, such as two pair vectors instead of a tuple.

Start by initializing the team numbers in the tuple.

Since the strings do not contain spaces, use cin to input the line and store it as line.
Using the find_last_not_of() function, find the last non-. character in the string excluding the finish line 'F', and store the position in the tuple.
If the position is 0, it means that there is no kayak on that row, so do not store it in the tuple.

Then, use the sort() function to sort the tuples in descending order based on kayak positions.
A custom sorting function is required for this, which can be implemented using a lambda function.

Next, assign ranks in the sorted order.
If the kayak positions differ, increase the rank to implement the tie condition (teams with the same position share the same rank).
For example, if two teams are ranked 2nd, the next rank will be 3rd.

Finally, sort the tuples again by team number in ascending order.
Like before, a lambda function is used for sorting.

Lastly, output the team rankings stored in the third element of each tuple, in order.
*/

#include<iostream>
#include<vector>
#include<tuple>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	const int TEAMNUMBERS = 9;

	// R = rows, C = columns
	int R, C;
	cin >> R >> C;

	// first element = team number, second element = kayak position, third element = ranking
	vector<tuple<int, int, int>>teams(TEAMNUMBERS);

	for (int i = 0; i < TEAMNUMBERS; i++) {
		// set team number, 0-base index
		get<0>(teams[i]) = i;
	}

	string line;

	for (int i = 0; i < R; i++) {
		cin >> line;	// line for kayak information 
		int kayakPosition = line.substr(0, C - 1).find_last_not_of('.');	// find kayak position

		// If kayakPosition is zero, there is no kayak on this line.
		if(kayakPosition != 0)
			get<1>(teams[line[kayakPosition]-'0'-1]) = kayakPosition;	// set kayak position
	}

	// Sort the teams in descending order based on kayak position. 
	sort(teams.begin(), teams.end(),
		[](tuple<int, int, int>& a, tuple<int, int, int>& b) {
			return get<1>(a) > get<1>(b);
		}
	);
	
	int ranking = 0;
	int kayakPosition = 0;

	// Set team ranking
	for (int i = 0; i < TEAMNUMBERS; i++) {
		// If the kayak position changes
		if (kayakPosition != get<1>(teams[i]))
			ranking++;	// Increase the ranking
		get<2>(teams[i]) = ranking;	// set ranking
		kayakPosition = get<1>(teams[i]);	// previous kayak position
	}

	// Sort the teams by team number in ascending order.
	sort(teams.begin(), teams.end(),
		[](tuple<int, int, int>& a, tuple<int, int, int>& b) {
			return get<0>(a) < get<0>(b);
		}
	);
	
	// Print the ranking
	for (int i = 0; i < TEAMNUMBERS; i++) {
		cout << get<2>(teams[i]) << "\n";
	}
}

//Finish