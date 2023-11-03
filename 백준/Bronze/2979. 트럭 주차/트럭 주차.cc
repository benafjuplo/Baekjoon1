#include<iostream>
#include<vector>
using namespace std;

bool isIn(int a, int b, int x) {
	if (a <= x && x <= b) {
		return true;
	}
	else
		return false;
}

int main() {
	int A, B, C;	// 1 <= C <= B <= A <= 100
	int car[3][2];
	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++) {
		cin >> car[i][0] >> car[i][1];
		car[i][1] -= 1;
	}

	int money = 0;

	for (int i = 1; i <= 100; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			if (isIn(car[j][0], car[j][1], i))
				cnt++;
		}
		switch (cnt) {
		case 0:
			break;
		case 1:
			money += A;
			break;
		case 2:
			/*if (2 * A < 2 * B)
				money += 2 * A;
			else*/
				money += 2 * B;
			break;
		case 3:
			/*if (2 * A < 2 * B && 2*A< 2*C)
				money += 2 * A;
			else if (2 * B < 2 * A && 2 * B < 2 * C)
				money += 2 * B;
			else*/
				money += 3 * C;
			break;
		default:
			exit(1);
		}
	}
	cout << money;
}