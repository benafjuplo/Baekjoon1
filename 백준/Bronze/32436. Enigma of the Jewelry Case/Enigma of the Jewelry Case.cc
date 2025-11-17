/*
- Title : 32436 - Enigma of the Jewelry Case
- Start Time : 25-11-18, 04:56
- End Time : 25-11-18, 05:18
- Try : 1
- Category : ad hoc, implementation
- Language : C++20
*/

/* 한국어 주석
N * N 크기의 정사각형 보석 케이스가 있다.
원본 상태의 보석 케이스는 좌측 상단이 가장 작고 우측과 하단으로 엄격히 증가하는 상태이다.
이 문제는 보석 케이스가 90도씩 시계 방향으로 회전된 상태로 주어질 때, 
원래 상태로 복원하기 위해 최소 몇 번 반시계 회전해야 하는지를 구해야 한다.

입력의 보석 케이스를 2차원 배열로 저장하여 직접 회전시키는 시뮬레이션 방법도 가능하다.

하지만 엄격히 증가한다는 조건으로 가장 작은 좌측 상단의 값은 유일하다는 것을 알 수 있다.
따라서 간단히 네 모서리의 값을 비교하여 가장 작은 값으로 회전 횟수를 구한다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);	
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int leftTop = 0, rightTop = 0, leftBottom = 0, rightBottom = 0;

	for (int i = 0; i < n * n; ++i) {
		int x;
		cin >> x;
		if (i == 0)
			leftTop = x;
		else if (i == n - 1)
			rightTop = x;
		else if (i == n * (n - 1))
			leftBottom = x;
		else if (i == n * n - 1)
			rightBottom = x;
	}

	int minValue = min({ leftTop, rightTop, leftBottom, rightBottom });

	if (minValue == leftTop)
		cout << 0;
	else if (minValue == rightTop)
		cout << 1;
	else if (minValue == rightBottom)
		cout << 2;
	else
		cout << 3;

	return 0;
}

// Finish