/*
- Title : 32370 - Rook
- Start Time : 26-03-15, 16:50
- End Time : 26-03-15, 17:03
- Try : 2(Wrong condition)
- Category : ad hoc
- Language : C++20
*/

/* 한국어 주석
체스판을 그려보면 경우의 수가 3가지로 나뉜다는 것을 알 수 있다.
1. 룩이 A로 바로 갈 수 있는 경우 -> 1
2. 1번과 같은 형태이지만 B가 가로 막는 경우 -> 3
3. 그 외의 경우 -> 2

코드로 구현할 때 조건에 유의한다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	long long a, b, x, y;
	cin >> a >> b >> x >> y;

	// case 1 -> 1
	if (a == 0 && !(x == 0 && y < b))
		cout << 1;
	else if (b == 0 && !(y == 0 && x < a))
		cout << 1;
	// case 2 -> 3
	else if (a == 0 && (x == 0 && y < b))
		cout << 3;
	else if (b == 0 && (y == 0 && x < a))
		cout << 3;
	// otherwise -> 2
	else
		cout << 2;

	return 0;
}
