/*
- Title : 28446 - Finding the Bowling Ball
- Start Time : 25-03-26, 13:50
- End Time : 25-03-26, 13:58
- Try : 1
- Category : unordered_map
- Language : C++20
*/

/* 한국어 주석
설명 생략.
*/

#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//cout.tie(0);

	int orders;
	cin >> orders;

	unordered_map<int, int> m;

	while (orders--) {
		int order;
		cin >> order;

		if (order == 1) {
			int x, w;
			cin >> x >> w;

			m[w] = x;
		}
		else {
			int w;
			cin >> w;

			cout << m[w] << "\n";
		}
	}

	return 0;
}

// Finish