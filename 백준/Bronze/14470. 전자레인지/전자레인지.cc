/*
- Title : 14470 - Microwave
- Start Time : 25-02-03, 00:??
- End Time : 25-02-03, 00:25
- Try : 1
- Category : simple, basic, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int start, target, iceTime, meltingTime, heatingTime;
	cin >> start >> target >> iceTime >> meltingTime >> heatingTime;

	int result = 0;

	if (start < 0) {
		result += -start * iceTime;
		result += meltingTime;
	}

	result += heatingTime * (target - max(start, 0));
	
	cout << result;

	return 0;
}

//Finish