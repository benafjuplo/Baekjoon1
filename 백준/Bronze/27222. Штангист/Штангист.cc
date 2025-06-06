/*
- Title : 27222 - Weightlifter
- Start Time : 25-06-06, 20:25
- End Time : 25-06-06, 20:30
- Try : 1
- Category : mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	vector<int> logExercise(n);

	for (int i = 0; i < n; ++i) {
		cin >> logExercise[i];
	}

	int result = 0;

	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		if (logExercise[i] && y>x) {
			result += y - x;
		}
	}

	cout << result;

	return 0;
}

// Finish