/*
- Title : 33923 - Fence construction at Inkyung Lake
- Start Time : 25-09-06, 09:18
- End Time : 25-09-06, 09:58
- Try : 3(2 : wrong approach)
- Category : mathematics, geometry, Pythagorean theorem
- Language : C++20
*/

/* 한국어 주석
이 문제는 호수의 크기 n, m이 주어졌을 때, 최대 넓이를 구하는 문제이다.

문제는 호수의 크기 n, m이 같을 때와 다를 때로 나누어서 생각해야 한다.
호수의 크기 n, m이 다를 때는, 작은 쪽의 크기를 제곱한 값이 최대 넓이가 된다.
호수의 크기 n, m이 같을 때는, (n-1) * (n-1) + 1이 최대 넓이가 된다. 즉, 아주 약간 비튼 정사각형이 최대 넓이를 가지게 된다.
비튼 정사각형의 넓이는 비튼 정사각형의 변의 길이를 직접 구하지 않고 피타고라스 정리를 이용하여 구할 수 있다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n, m;
	cin >> n >> m;
	n--;
	m--;
	if (n != m) {
		cout << min(n, m) * min(n, m) << "\n";
	}
	else {
		cout << 1 + (n - 1) * (n - 1) << "\n";
	}

	return 0;
}

// Finish