/*
- Title : 13363 - Jumbled Compass
- Start Time : 25-09-04, 12:31
- End Time : 25-09-04, 12:44
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
한 쪽 방향으로만 돌 수 있기에 시계방향과 반시계방향 중 하나를 구하면 나머지 하나는 360도에서 빼면 된다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n1, n2;
	cin >> n1 >> n2;

	int clockwise;
	if(n2 >= n1) clockwise = n2 - n1;
	else clockwise = n2 + 360 - n1;
	int counterclockwise;
	counterclockwise = 360 - clockwise;

	if (clockwise <= counterclockwise) cout << clockwise << '\n';
	else cout << -counterclockwise << '\n';

	return 0;
}

// Finish