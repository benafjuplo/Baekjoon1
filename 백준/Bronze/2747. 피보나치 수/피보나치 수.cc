#include<iostream>

using namespace std;

int fibonacci(int n) {

	switch (n) {
	case 0:
		return 0;
		break;
	case 1:
		return 1;
		break;
	case 2:
		return 1;
		break;
	case 3:
		return 2;
		break;
	case 4:
		return 3;
		break;
	case 5:
		return 5;
		break;
	case 6:
		return 8;
		break;
	case 7:
		return 13;
		break;
	case 8:
		return 21;
		break;
	case 9:
		return 34;
		break;
	case 10:
		return 55;
		break;
	case 11:
		return 89;
		break;
	case 12:
		return 144;
		break;
	case 13:
		return 233;
		break;
	case 14:
		return 377;
		break;
	case 15:
		return 610;
		break;
	case 16:
		return 987;
		break;
	case 17:
		return 1597;
		break;
	default:
		return fibonacci(n - 1) + fibonacci(n - 2);
		break;
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	cout << fibonacci(n);
}