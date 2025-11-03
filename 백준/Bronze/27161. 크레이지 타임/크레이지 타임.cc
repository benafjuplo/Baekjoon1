/*
- Title : 27161 - Crazy Time
- Start Time : 25-11-02, 12:50
- End Time : 25-11-02, 13:07
- Try : 1
- Category : implementation, simulation
- Language : C++20
*/

/* 한국어 주석
모래시계는 시간을 반전시킨다. 역방향만 시키는 것이 아님에 유의한다.
시간은 1 ~ 12 사이임에 유의한다. 1번 조건과 2번 조건 하나만 만족해야 특수한 동작이 일어난다.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int time = 0;
	bool isForward = true;

	while (n--) {
		string s;
		int x;
		cin >> s >> x;

		if (isForward)
			time++;
		else
			time--;

		if (time > 12)
			time = 1;
		else if (time < 1)
			time = 12;

		bool firstRule = (s == "HOURGLASS");
		bool secondRule = (x == time);

		if (firstRule && !secondRule)
			isForward = !isForward;

		if (!firstRule && secondRule)
			cout << time << " " << "YES" << "\n";
		else
			cout << time << " " << "NO" << "\n";		
	}

	return 0;
}

// Finish