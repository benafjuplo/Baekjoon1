#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int X;
	cin >> X;
	
	int level = 1;
	int cnt = 0;

	while (true) {
		cnt += level;
		if (cnt >= X)
			break;
		level++;
	}

	cnt -= level;
	cnt++;

	int denominator = 1;	// 분모
	int numerator = 1;		// 분자
	int diff = X-cnt;
	
	// 짝수, 분모 = level;
	if (level % 2 == 0) {
		denominator = level;
		denominator -= diff;
		numerator += diff;
	}

	// 홀수, 분자 = level;
	else {
		numerator = level;
		numerator -= diff;
		denominator += diff;
	}

	cout << numerator <<"/" << denominator;
}