/*
- Title : 15726 - Two fundamental operations
- Start Time : 25-10-13, 03:18
- End Time : 25-10-13, 03:23
- Try : 1
- Category : mathematics, elementary arithemtic
- Language : C++20
*/

/* 한국어 주석
답은 int 범위를 넘어설 수 없다고 했지만 중간 계산 과정에서 int 범위를 넘어설 수 있으므로 long long 타입을 사용해야 한다.
소수점 아래는 버림이고 정수형 자료형 계산을 하기 위하여 나누기 연산을 하기 전에 곱하기 연산을 먼저 수행한다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	long long a, b, c;
	cin >> a >> b >> c;

	long long first = (a * b) / c;
	long long second = (a * c) / b;

	cout << max(first, second) << '\n';

	return 0;
}
