/*
- Title : 6815 - Cool Numbers
- Start Time : 25-08-29, 23:14
- End Time : 25-08-29, 23:22
- Try : 1
- Category : mathematics, elementary arithmetic, brute-force, two pointers
- Language : C++20
*/

/* 한국어 주석
투 포인터를 이용한 완전 탐색으로 해결가능하다.
약간 변형하면 벡터을 이용하지 않고도 구현이 가능하다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int a, b;
	cin >> a >> b;

	int square = 1, cube = 1;

	int count = 0;

	for (int i = 1, j = 1; square <= b && cube <= b;) {
		if (square < cube) {
			i++;
			square = i * i;
		}
		else if (square > cube) {
			j++;
			cube = j * j * j;
		}
		else {
			if (square >= a) {
				count++;
			}
			i++;
			j++;
			square = i * i;
			cube = j * j * j;
		}
	}

	cout << count << '\n';

	return 0;
}

// Finsih