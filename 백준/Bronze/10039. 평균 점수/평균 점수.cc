#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int score[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> score[i];
		if (score[i] < 40)
			score[i] = 40;
		sum += score[i];
	}
	int average = sum/5;
	cout << average;
}