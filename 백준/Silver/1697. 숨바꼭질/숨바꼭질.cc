/*
- Title : 1697 - Hide and Seek
- Start Time : 24-05-12, 21:18, 24-05-13, 01:49
- End Time   : 24-05-12, 22:27, 24-05-13, 02:02
- Try : 1
*/

#define SIZE 100000

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void move(vector<int>& movement, int x) {
	queue<int> q;
	q.push(x);

	while (!q.empty()) {
		int pt = q.front();
		q.pop();
		//pt-1
		if (pt - 1 >= 0) {
			if (movement[pt - 1] == -1 || movement[pt] + 1 < movement[pt - 1]) {
				movement[pt - 1] = movement[pt] + 1;
				q.push(pt - 1);
			}
		}

		//pt+1
		if (pt + 1 <= SIZE) {
			if (movement[pt + 1] == -1 || movement[pt] + 1 < movement[pt + 1]) {
				movement[pt + 1] = movement[pt] + 1;
				q.push(pt + 1);
			}
		}

		//2 * pt
		if (pt * 2 <= SIZE) {
			if (movement[pt * 2] == -1 || movement[pt] + 1 < movement[pt * 2]) {
				movement[pt * 2] = movement[pt] + 1;
				q.push(pt * 2);
			}
		}
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K;
	cin >> N >> K;

	vector <int> movement(SIZE + 1, -1);

	movement[N] = 0;

	if (N >= K) {
		cout << N - K;
		return 0;
	}

	// N < K
	move(movement, N);

	cout << movement[K];
}

//Finish