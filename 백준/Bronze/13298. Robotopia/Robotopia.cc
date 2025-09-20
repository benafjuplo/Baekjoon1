/*
- Title : 13298 - Robotopia
- Start Time :	25-09-19, 17:46, 25-09-20, 19:30, 25-09-20,21:30
- End Time :	25-09-19, ??:??, 25-09-20, 20:21, 25-09-20,21:57
- Try : 3(1 : special case in same line case, 1 : positive interger)
- Category : mathematics, linear equation, brute force
- Language : C++20
*/

/* 한국어 주석
입력 : a, c, b, d, p, q
ax + by = p, cx + dy = q -> x = (dp - bq) / (ad - bc), y = (aq - cp) / (ad - bc)

1) ad == bc -> 평행 or 같은 직선
평행하면 해 없음
같은 직선이면 제1사분면 조건으로 인해 모든 경우가 가능함(해가 없을 수도, 유일한 해가 있을 수도, 무수히 많은 해가 있을 수도 있음)
따라서 x를 1부터 증가시키면서 y가 양의 범위 내에서 정수 해의 개수를 세어줌. (문제의 조건에 따라 무조건 감소 함수이므로 x가 증가할수록 y는 감소함)
1개인 경우에만 유일한 해로 출력.

2) ad != bc -> 아래의 조건을 제외하면 유일한 해
x <= 0 or y <= 0 -> 해 없음
x, y 정수 아님 -> 해 없음
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	while (n--) {
		int a, c, b, d, p, q;
		cin >> a >> c >> b >> d >> p >> q;

		// Parrallel or same line
		if (a * d == b * c) {
			// Parallel
			if (b * q != d * p) {
				cout << "?\n";
			}

			// Same line
			else {
				int x = 0;
				int cnt = 0;
				int resultX = 0;
				while (++x) {
					int y = (p - a * x) / b;
					if (y <= 0) break;
					int modY = (p - a * x) % b;
					if (modY != 0) continue;
					resultX = x;
					cnt++;
				}
				if (cnt == 0) cout << "?\n";
				else if (cnt == 1) cout << resultX << ' ' << (p - a * resultX) / b << '\n';
				else cout << "?\n";
			}
		}

		else {
			int modX = (d * p - b * q) % (a * d - b * c);
			int modY = (a * q - c * p) % (a * d - b * c);
			if(modX != 0 || modY != 0) {
				cout << "?\n";
				continue;
			}

			int x = (d * p - b * q) / (a * d - b * c);
			int y = (a * q - c * p) / (a * d - b * c);
			if (x <= 0 || y <= 0) {
				cout << "?\n";
				continue;
			}

			cout << x << ' ' << y << '\n';
		}
	}

	return 0;
}

// Finish