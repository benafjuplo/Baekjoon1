/*
- Title : Simple Problem (Small)
- Start Time : 25-05-26, 00:48
- End Time : 25-05-26, 00:51
- Try : 1
- Category : mathematics
- Language : C++20
*/

/* 한국어 주석
문제의 조건을 만족하는 경우는 x, y, z 가 같은 경우이다.
아래는 증명이다.

조건 x mod y = y mod z = z mod x = r

r > 0라 가정하면 x mod y = r 이므로 x = ky + r이 된다.(k >= 0, y > r > 0)
k = 0인 경우, x = r 이다. 그런데 z mod x = r 조건에 의하여 x > r 이므로 모순이다.
k > 0인 경우, x > y 이다. 비슷하게 y mod z = r을 통해 y > z 이고, z mod x = r을 통해 z > x를 보일 수 있다.
정리하면 x > y > z > x 이므로 모순이다.
따라서 r은 0 이어야 한다.

x mod y = y mod z = z mod x = 0 이므로 서로 나누어 떨어지려면 모두 같은 경우 밖에 없다.
따라서 조건을 만족하는 정수 쌍은 x = y = z뿐이다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int T;
	cin >> T;

	while (T--) {
		int a, b, c;
		cin >> a >> b >> c;

		cout <<  min(a, min(b, c)) << "\n";
	}

	return 0;
}

// Finish