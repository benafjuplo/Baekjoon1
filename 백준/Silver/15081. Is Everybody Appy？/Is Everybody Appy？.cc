/*
- Title : 15081 - Is Everybody Appy?
- Start Time : 24-11-07, 23:??
- End Time : 24-11-08, 00:04
- Try : 1
- Category : unordered_set, search
- Language : C++14
*/

/* 한국어 문제 요약
- 문제
각 아이는 앱의 선호도가 다르고 각자가 가장 좋아하는(또는 가장 좋아하는 것에 가까운) 앱을 휴대전화에 설치하고 싶어한다.
아이들이 앱을 선택하는 방법은 다음과 같다. 각 아이는 가장 선호하는 앱부터 가장 덜 선호하는 앱까지 목록을 작성한다(관심 없는 앱은 제외).
그런 다음 가장 나이 많은 아이가 목록에서 첫 번째 앱을 선택하여 휴대전화에 설치한다.
가장 나이가 많은 아이부터 차례로, 자신의 목록에서 첫 번째 앱을 설치하고자 하나, 이미 다른 아이가 선택한 경우 목록에서 두 번째 앱을 설치하는 방식으로 진행된다.
이 과정은 모든 아이에 대해 반복되어, 각 아이가 아직 선택되지 않은 가장 선호하는 앱을 설치하게 된다.
아이들의 앱 선호도 목록이 주어졌을 때, 각 아이가 설치할 앱을 결정하라.

- 입력
첫 번째 줄에 양의 정수 n (n≤100)이 주어진다. 이는 아이들의 수를 나타낸다.
이어지는 n개의 줄마다 양의 정수 m (m≤50)이 주어지며, 그 뒤로 m개의 문자열이 이어진다.
m은 목록에 포함된 앱의 개수를 나타내며, 앱 이름들은 가장 선호하는 순서부터 차례로 주어진다.
첫 번째 줄은 가장 나이가 많은 아이의 선호도 목록, 두 번째 줄은 두 번째로 나이 많은 아이의 선호도 목록이다. 각 앱 이름은 길이가 최대 10이다.

- 출력
가장 나이 많은 아이부터 가장 어린 아이까지 각 아이의 휴대폰에 설치된 앱을 공백으로 구분하여 출력한다.
각 아이의 목록에 있는 모든 앱이 나이 많은 아이에 의해 선택된 테스트 케이스는 없다.

- 예제
입력 1 : 
3
3 AppA AppB AppC
1 AppD
4 AppA AppE AppD AppF
출력 1 : 
AppA AppD AppE
입력 2 :
4
5 SnapChart Rumbler Whimper Whine Tik
5 SnapChart Rumbler Whimper Whine Tik
5 SnapChart Rumbler Whimper Whine Tik
5 SnapChart Rumbler Whimper Whine Tik
출력 2 :
SnapChart Rumbler Whimper Whine
*/

/* 한국어 주석
이 문제는 주어진 앱 목록에서 앞서 선택되지 않은 앱을 선택하여 출력하는 것을 반복하는 문제이다.

다양한 방법이 있지만 <string>과 <unordered_set> 라이브러리를 사용하면 간단하게 구현할 수 있다.
*/

/* English Problem Summary
- Question
Each child has different app preferences and wants to install their most preferred (or closest to most preferred) app on their phone.

Here’s how the children select apps: each child creates a list of apps in order from most preferred to least preferred (excluding any apps they don’t care about).
The oldest child begins by picking the first app on their list to install on their phone.
If a child’s top choice is already selected by an older child, they choose the next available app on their list.
This process continues with each child installing the first app on their list that hasn’t been chosen by anyone else.
Given each child’s app preference list, determine which app each child ends up installing.

- Input
The first line contains a positive integer n (n≤100), which represents the number of children.
The following n lines each begin with a positive integer m (m≤50), followed by m strings, each representing an app name.
The integer m is the number of apps on the child’s list, listed in order from most preferred to least preferred.
The first line represents the oldest child’s list, the second line is the list for the second oldest child, and so on.
Each app name is a string of up to 10 characters.

- Output
Output a single line listing the app that each child installs, from the oldest to the youngest, with each app name separated by a space.
There will be no cases where a child’s entire list is exhausted by previous selections from older children.

- Example
Input 1 :
3
3 AppA AppB AppC
1 AppD
4 AppA AppE AppD AppF
Output 1 :
AppA AppD AppE
Input 2 :
4
5 SnapChart Rumbler Whimper Whine Tik
5 SnapChart Rumbler Whimper Whine Tik
5 SnapChart Rumbler Whimper Whine Tik
5 SnapChart Rumbler Whimper Whine Tik
Output 2 :
SnapChart Rumbler Whimper Whine
*/

/* English Comment
This problem involves selecting an app from each given list of app preferences, ensuring that previously chosen apps are not selected again, and then printing the result in order.

Although there are multiple ways to implement this, using the <string> and <unordered_set> libraries allows for a straightforward solution.
*/

#include<iostream>
#include<string>
#include<unordered_set>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	unordered_set <string> selectedApp;

	while (n--) {
		int m;
		cin >> m;

		while (m--) {
			string appName;
			cin >> appName;
			// if appName is unselected.
			if (selectedApp.count(appName) == 0) {
				selectedApp.insert(appName);
				cout << appName << " ";
				break;
			}
		}

		// read the rest input and ignore.
		while (m--) {
			string dummy;
			cin >> dummy;
		}
	}

	return 0;
}

//Finish