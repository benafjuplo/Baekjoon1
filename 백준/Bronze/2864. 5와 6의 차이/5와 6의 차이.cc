/*
- Title : 2864 - Sum
- Start Time : 26-03-29, 02:30
- End Time : 26-03-29, 02:33
- Try : 1
- Category : string, mathematics, elementary arithmetic
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	string a, b;
	cin >> a >> b;

	int minSum = 0, maxSum = 0;

	string minX = "", maxX = "";

	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '5' || a[i] == '6') {
			minX += '5';
			maxX += '6';
		}
		else {
			minX += a[i];
			maxX += a[i];
		}
	}

	minSum += stoi(minX);
	maxSum += stoi(maxX);

	minX = "";
	maxX = "";

	for (int i = 0; i < b.size(); i++) {
		if (b[i] == '5' || b[i] == '6') {
			minX += '5';
			maxX += '6';
		}
		else {
			minX += b[i];
			maxX += b[i];
		}
	}

	minSum += stoi(minX);
	maxSum += stoi(maxX);

	cout << minSum << " " << maxSum << "\n";	

	return 0;
}
