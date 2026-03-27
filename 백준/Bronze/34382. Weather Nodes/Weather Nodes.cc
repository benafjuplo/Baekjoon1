/*
- Title : 34382 - Weather Nodes
- Start Time : 26-03-27, 21:08
- End Time : 26-03-27, 21:12
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

	double sum = 0;
	double avg = 0;

	vector<double> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		sum += v[i];
	}

	avg = sum / n;

	int outOfRange = 0;

	for (int i = 0; i < n; i++) {
		if (v[i] > avg + 10 || v[i] < avg - 10) {
			outOfRange++;
		}
	}

	cout << outOfRange << "\n";

	return 0;
}
