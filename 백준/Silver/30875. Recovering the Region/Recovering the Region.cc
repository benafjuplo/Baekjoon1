/*
- Title : 30875 - Recovering the Region
- Start Time : 25-03-27, 13:45
- End Time : 25-03-27, 14:00
- Try : 1
- Category : ad hoc
- Language : C++20
*/

/* 한국어 주석
잘 생각해보면 구역을 가로줄 혹은 세로줄 들로 나누면 된다는 것을 알 수 있다.
따라서 입력도 n만 받으면 된다.
*/

#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	for (int i = 1; i <= n;i++) {
		for (int j = 0; j < n;j++) {
			cout << i << " ";
		}
		cout << "\n";
	}
	return 0;
}

// Finish
