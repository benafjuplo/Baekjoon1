/*
- Title : 28419 - Addition
- Start Time : 24-08-18, 06:54
- End Time : 24-08-18, 07:45
- Try : 2(1 : int size)
- Category : mathematics, long long
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	bool isOdd = true;

	long long sumOfOdd = 0;
	long long sumOfEven = 0;

	for (int i = 0; i < N; i++) {
		int sequence;
		cin >> sequence;

		// Odd
		if (isOdd) {
			isOdd = false;
			sumOfOdd += sequence;
		}
		// Even
		else {
			isOdd = true;
			sumOfEven += sequence;
		}
	}

	long long result = -1;

	if (sumOfOdd == sumOfEven)
		result = 0;
	
	else {
		if (sumOfOdd < sumOfEven)
			result = sumOfEven - sumOfOdd;
		else {
			if(N!=3)
				result = sumOfOdd - sumOfEven;
		}
	}
	
	cout << result;
}

//Finish