/*
- Title : 1308 - D-Day
- Start Time : 25-03-10, 13:10
- End Time : 25-03-10, 13:33
- Try : 2(1 : if-else condition miss)
- Category : chrono, leaf year, C++20
- Language : C++20
*/

/* 한국어 주석
문제에 주어진 범위의 년도를 계산하는 라이브러리는 <chrono>와 C++20 이상을 사용하면 아래와 같이 계산 가능하다.
"gg"에 대한 조건에 주의한다.
*/

#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int startYear; unsigned startMonth, startDay;
	cin >> startYear >> startMonth >> startDay;
	year_month_day start{ year{startYear}, month{startMonth}, day{startDay} };

	int endYear; unsigned endMonth, endDay;
	cin >> endYear >> endMonth >> endDay;
	year_month_day end{ year{endYear}, month{endMonth}, day{endDay} };

	if (endYear - startYear >= 1001) {
		cout << "gg" << "\n";
	}

	else if ((endYear - startYear == 1000) && (startMonth < endMonth || (startMonth == endMonth && startDay <= endDay))) {
		cout << "gg" << "\n";
	}

	else {
		sys_days sdStart = start;
		sys_days sdEnd = end;
		auto dayDiff = sdEnd - sdStart;
		cout << "D-" << dayDiff.count();
	}

	return 0;
}

//Finish