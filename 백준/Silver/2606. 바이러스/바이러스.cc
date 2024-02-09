#include<iostream>
#include<list>
#include<vector>
#include<queue>
#include<iterator>
#include<algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int computer;
	cin >> computer;

	int link;
	cin >> link;

	vector<list<int>> g;

	//Initialize
	for (int i = 0; i < computer+1; i++) {
		list<int> temp;
		g.push_back(temp);
	}

	//Link
	for (int i = 0; i < link; i++) {
		int a, b;
		cin >> a >> b;
		g[b].push_back(a);
		g[a].push_back(b);
	}

	//BFS
	queue<int>q;
	vector<int> v(computer+1);
	q.push(1);
	v[1] = 1;
	while(!q.empty()){
		for (auto it = g[q.front()].begin(); it != g[q.front()].end();it++) {
			if (v[*it] != 1) {
				v[*it] = 1;
				q.push(*it);
			}
		}
		q.pop();
	}
	int cnt = 0;
	for (auto i : v) {
		if (i == 1)
			cnt++;
	}
	
	cout << cnt-1;

}