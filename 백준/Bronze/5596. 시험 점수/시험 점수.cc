#include<iostream>

using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int score1[4];
	int score2[4];

	cin >> score1[0] >> score1[1] >> score1[2] >> score1[3];
	cin >> score2[0] >> score2[1] >> score2[2] >> score2[3];

	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < 4; i++) {
		sum1 += score1[i];
		sum2 += score2[i];
	}

	if (sum1 >= sum2) {
		cout << sum1;
	}
	else {
		cout << sum2;
	}
}