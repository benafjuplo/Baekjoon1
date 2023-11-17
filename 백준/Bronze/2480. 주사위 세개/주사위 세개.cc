#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int dice[3];
	cin >> dice[0] >> dice[1] >> dice[2];
	int price = 0;

	if (dice[0] == dice[1] && dice[1] == dice[2]) {
		price = 10000 + dice[0] * 1000;
	}
	else if (dice[0] == dice[1] || dice[0] == dice[2] || dice[1] == dice[2]) {
		if (dice[0] == dice[1])
			price = 1000 + dice[0] * 100;
		else if(dice[0] == dice[2])
			price = 1000 + dice[0] * 100;
		else
			price = 1000 + dice[1] * 100;
	}
	else {
		int temp = max(dice[0], dice[1]);
		temp = max(temp, dice[2]);
		price = temp * 100;
	}
	cout << price;
}