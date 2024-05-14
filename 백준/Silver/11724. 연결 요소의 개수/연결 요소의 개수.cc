/*
- Title : 11724 - Number of Connected Components
- Start Time : 24-05-14, 03:09
- End Time : 24-05-14, 03:26
- Try : 1
*/

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

void bfs(vector<vector<bool>>& v, vector<bool> &isSearched, int x) {
	queue<int> q;
	q.push(x);
	isSearched[x] = true;

	int N = isSearched.size();

	while (!q.empty()) {
		int pt = q.front();
		q.pop();
		for (int i = 0; i < N; i++) {
			if (v[pt][i] && !isSearched[i]) {
				q.push(i);
				isSearched[i] = true;
			}
		}
	}

}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	int cnt = 0;

	vector<vector<bool>> v(N, vector<bool>(N, false));

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		v[x - 1][y - 1] = true;
		v[y - 1][x - 1] = true;
	}

	vector<bool> isSearched(N, false);

	for (int i = 0; i < N; i++) {
		if (!isSearched[i]) {
			cnt++;
			bfs(v, isSearched, i);
		}
	}

	cout << cnt;
}

//Finish