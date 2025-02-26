/*
- Title : 1547 - Ball
- Start Time : 25-02-26, 00:25
- End Time : 25-02-26, 00:48
- Try : 1
- Category : simulation
- Language : C++20
*/

/* 한국어 주석
간단해보이지만 잘못 구현하기 쉽다.
balls[index] = value;에서 index와 value가 무엇을 의미하는지 확실히 해야한다.
아래의 구현에서는 index는 컵의 번호, value는 컵의 위치를 의미한다.
즉, 정답은 balls[1]이 아닌 1을 value로 가지는 index이다.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int m;
	cin >> m;

	vector<int> balls = { 0, 1, 2, 3 };

	while (m--) {
		int x, y;
		cin >> x >> y;
		if (x != y) {
			int temp = balls[x];
			balls[x] = balls[y];
			balls[y] = temp;
		}
	}

	for (int i = 1; i < 4;++i) {
		if (balls[i] == 1)
			cout << i;
	}

	return 0;
}

//Finish