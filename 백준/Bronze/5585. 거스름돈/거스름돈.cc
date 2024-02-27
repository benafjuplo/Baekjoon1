#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	
	int change = 1000 - n;

	int cnt = 0;
	int x;
	for (int i = 0; i < 6; i++) {

		switch (i) {
		case 0:
			x = change / 500;
			change -= x * 500;
			cnt += x;
			break;
		case 1:
			x = change / 100;
			change -= x * 100;
			cnt += x;
			break;
		case 2:
			x = change / 50;
			change -= x * 50;
			cnt += x;
			break;
		case 3:
			x = change / 10;
			change -= x * 10;
			cnt += x;
			break;
		case 4:
			x = change / 5;
			change -= x * 5;
			cnt += x;
			break;
		case 5:
			x = change / 1;
			change -= x * 1;
			cnt += x;
			break;
		default:
			break;
		}
	}

	cout << cnt;
}