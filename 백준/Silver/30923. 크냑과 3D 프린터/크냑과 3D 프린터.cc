/*
- Title : 30923 - Knyak and the 3D Printer
- Start Time : 25-11-23, 03:19
- End Time : 25-11-23, 03:21
- Try : 1
- Category : mathematics, geometry
- Language : C++20
*/

/* 한국어 주석
겹치는 부분만 간단히 빼주면 된다.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int n;
	cin >> n;

	int prev;
	cin >> prev;

	long long answer = 0;
	answer += prev * 4 + 2;

	for (int i = 1; i < n; ++i) {
		int curr;
		cin >> curr;

		answer += curr * 4 + 2;
		//answer -= prev < curr ? prev * 2 : curr * 2;
		answer -= min(prev, curr) * 2;

		prev = curr;
	}

	cout << answer << '\n';

	return 0;
}

// Finish