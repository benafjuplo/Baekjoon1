/*
- Title : 20737 - Sanic
- Start Time : 25-04-27, 00:??
- End Time : 25-04-27, 00:22
- Try : 1
- Category : mathematics, setprecision, geometry, coin rotation paradox
- Language : C++20
*/

/* 한국어 주석
Coin rotation paradox에 대한 문제이다.
Veritasium의 "The SAT Question Everyone Got Wrong" 영상을 참고하면 도움이 된다.
Coin rotation paradox에서는 바깥쪽으로 동전이 돌 때 돌아가는 동전의 원주가 더 필요하다.
이 문제에서는 안쪽으로 회전하기에 회전하는 동전(소닉의 원, 1) 만큼 빼야된다.
따라서 정답은 항상 r - 1이고 iomanip 라이브러리와 fixed, setprecison을 사용하여 오차 범위를 조정한다.
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	double r;
	cin >> r;

	cout << fixed << setprecision(7);
	cout << r - 1;

	return 0;
}

// Finish