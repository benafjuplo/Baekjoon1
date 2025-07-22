/*
- Title : 15721 - Beondegi
- Start Time : 25-07-21, 12:04, 13:25
- End Time :   25-07-21, 12:40, 13:50
- Try : 1
- Category : simulation, brute force, mathematics
- Language : C++20
*/

/* 한국어 주석
시뮬레이션으로 푸는 것이 간단하다.
수학적으로도 해결은 가능하다.
*/

#include<iostream>

using namespace std;

inline void playStep(int& a, int& x, int& result) {
	x++;
	result++;
	if (result >= a)	result = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, t, sign;					// 0 == beon / 1 == degi
	cin >> a >> t >> sign;

	int cntSign[2] = { 0,0 };

	int n = 1;

	int result = -1;
	for (; ; ++n) {
		playStep(a, cntSign[0], result);
		if (cntSign[sign] == t)	break;

		playStep(a, cntSign[1], result);
		if (cntSign[sign] == t)	break;

		playStep(a, cntSign[0], result);
		if (cntSign[sign] == t)	break;

		playStep(a, cntSign[1], result);
		if (cntSign[sign] == t)	break;

		for (int i = 0; i < n + 1; ++i) {
			playStep(a, cntSign[0], result);
			if (cntSign[sign] == t)	break;
		}
		if (cntSign[sign] == t)	break;

		for (int i = 0; i < n + 1; ++i) {
			playStep(a, cntSign[1], result);
			if (cntSign[sign] == t)	break;
		}
		if (cntSign[sign] == t)	break;
	}

	cout << result;

	return 0;
}

// Finish