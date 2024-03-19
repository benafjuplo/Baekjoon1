#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int sum = 0;

	for (int i = 0; i < 5; i++) {
		int temp;
		cin >> temp;
		sum += temp * temp;
	}

	sum %= 10;

	cout << sum;
}

//Finish