/*
- Title : 17262 - Overflowing with Fandom
- Start Time : 24-06-11, 21:26
- End Time : 24-06-11, 21:38
- Try : 1
*/

#include<iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int maxS = -1;
	int minE = -1;

	for (int i = 0; i < N; i++) {
		int s, e;
		cin >> s >> e;
		if (i == 0) {
			maxS = s;
			minE = e;
		}

		if (s > maxS)
			maxS = s;
		if (e < minE)
			minE = e;
	}

	int start = minE;	// 가독성
	int end = maxS;		// 가독성

	if (end <= start)
		cout << 0 << "\n";
	else
		cout << end - start << "\n";

}