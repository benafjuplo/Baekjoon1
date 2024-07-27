/*
- Title : 24445 - Algorithm Class - Breadth-First Search 2
- Start Time : 24-07-26, 15:42
- End Time : 24-07-26, 16:21
- Try : 3(1:Adjacency Matrix, 1:Sorting)
- Category : Breadth First Search(BFS), Sorting, Adjacency List
*/

#include<iostream>
#include<queue>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

void bfs(vector<list<int>>& v, vector<int>& result, int N, int R) {
	vector<bool> visited(N + 1, false);
	queue <int> q;
	int seq = 0;
	q.push(R);

	while (!q.empty()) {
		seq++;
		int pos = q.front();
		result[pos] = seq;
		visited[pos] = true;
		q.pop();
		for (auto it : v[pos]) {
			if (!visited[it]) {
				visited[it] = true;
				q.push(it);
			}
		}
	}
}


int main() {
	cin.tie(0);
	cout.tie(0);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	vector<list<int>>v(N + 1);
	//vector<vector<bool>>v(N + 1, vector<bool>(N + 1));

	int R;
	cin >> R;

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
		
		//v[x][y] = true;
		//v[y][x] = true;
	}

	for (int i = 1; i <= N; i++) {
		v[i].sort([](int a, int b) {return b < a; });
	}

	vector<int> result(N+1, 0);

	bfs(v, result, N, R);

	for (int i = 1; i <= N; i++)
		cout << result[i] << "\n";
}

//Finish