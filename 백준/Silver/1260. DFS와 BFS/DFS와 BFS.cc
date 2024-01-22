#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<vector<bool>> m1; // Adjacancy Matrix
vector<bool> c1; // Complete
vector<vector<bool>> m2; // Adjacancy Matrix
vector<bool> c2; // Complete
int N, M;
int V;

void DFS(int x){
	cout << x << " ";
	c1[x] = true;
	for (int i = 1; i <= N; i++) {
		if (i == x)
			continue;
		if (m1[x][i] == true && c1[i] == false) {
			DFS(i);
		}
	}
}

queue <int> q;

void BFS() {
	c2[q.front()] = true;
	while (!q.empty()) {
		int v = q.front();
		cout << v << " ";
		q.pop();
		for (int i = 0; i <= N; i++) {
			if (i == v)
				continue;
			if (m2[v][i] == true && c2[i] == false) {
				q.push(i);
				c2[i] = true;
			}
		}
	}
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	
	cin >> N >> M >> V;

	
	for (int i = 0; i <= N; i++) {
		vector<bool> v_bool;
		for (int j = 0; j <= N; j++) {
			v_bool.push_back(false);
		}
		m1.push_back(v_bool);
		m2.push_back(v_bool);
		c1.push_back(false);
		c2.push_back(false);
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		m1[a][b] = true;
		m1[b][a] = true;
		m2[a][b] = true;
		m2[b][a] = true;
	}


	//DFS
	DFS(V);

	cout << "\n";

	//BFS
	q.push(V);
	BFS();
	

}