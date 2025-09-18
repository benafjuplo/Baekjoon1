/*
- Title : 26148 - Vertical calendar 
- Start Time : 25-09-18, 17:15
- End Time : 25-09-18, 17:27
- Try : 1
- Category : mathematics, simulation
- Language : C++20
*/

/* 한국어 주석
수학적으로 풀이하는 경우 아래와 같이 해결할 수 있다.

세로 달력은 월별로 5주 이상인 주를 의미한다.
세로 달력은 해당 월의 일수에 따라 결정되고 다음과 같다.
해당 월의 세로 달력 = 해당 월의 일수 % 7
일년의 경우에는 윤년을 제외하고 항상 월에 대한 일수가 같다.
31일인 달은 3개, 30일인 달은 2개, 28일인 달은 0개, 29일인 달은 1개이다.
따라서 일년의 세로 달력의 개수는 3 * 7 + 2 * 3이 기본이고 윤년인 경우에는 1이 추가된다.

입력으로 주어지는 시작 요일은 세로 달력의 개수에 영향을 미치지 않는다.

입력의 크기가 작기 때문에 수학적으로 풀지 않고 시뮬레이션으로도 해결할 수 있다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int year;
	cin >> year;
	int day;
	cin >> day;

	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	int ans = 29 + (isLeap ? 1 : 0);
	cout << ans << '\n';

	return 0;
}

/* Non Mathematics solution
#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int year;
	cin >> year;

	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (isLeap) daysInMonth[1] = 29;

	int day; // 0: Mon, 1: Tue, ..., 6: Sun
	cin >> day;
	day--;
	vector<int> cntDays(7, 0);

	int cnt = 0;

	for (int month = 0; month < 12; month++) {
		for (int i = 0; i < daysInMonth[month]; ++i) {
			cntDays[day]++;
			day = (day + 1) % 7;
		}
		for (int i = 0; i < 7; ++i) {
			if (cntDays[i] >= 5) cnt++;
			cntDays[i] = 0;
		}
	}

	cout << cnt << '\n';

	return 0;
}
*/