/*
- Title : 13251 - Drawing Pebbles
- Start Time : 25-03-06, 15:28
- End Time : 25-03-06, 17:21
- Try : 4(3 : Overflow)
- Category : mathematics, factorial, overflow, probability
- Language : C++20
*/

/* 한국어 주석
이 문제는 단순하게 코드를 작성하면 오버플로우가 발생한다.
정답은 확률이므로 0~1 범위이기에 계산 과정에서 오버플로우가 발생하는 문제이다.
따라서 계산 시에 값을 크게하는 계산과 작게하는 계산을 번갈아가면서 수행해야 한다.
*/

#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main() {
	cin.tie(0);
	//cout.tie(0);
	ios_base::sync_with_stdio(false);

	int totalPebble = 0;
	int colors;
	cin >> colors;

	vector<int> pebbleNumber(colors);

	for (int i = 0; i < colors; ++i) {
		cin >> pebbleNumber[i];
		totalPebble += pebbleNumber[i];
	}

	int selectNum;
	cin >> selectNum;

	double result = 0;

	for (int i = 0; i < colors;++i) {
		if (pebbleNumber[i] - selectNum + 1 > 0) {
			double tempResult = 1;
			for (int j = 0;j < selectNum;++j) {
				tempResult *= pebbleNumber[i] - j;
				tempResult /= totalPebble - j;
			}
			result += tempResult;
		}
	}

	cout << setprecision(10) << fixed;
	cout << result;

	return 0;
}

//Finish