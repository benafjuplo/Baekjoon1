#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue<int, vector<int>, greater<int>> pq;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int p;
		cin >> p;
		pq.push(p);
	}

	int result = 0;
	int total = 0;

	for (int i = 0; i < N; i++) {
		int p = pq.top();
		pq.pop();
		total += p;
		result += total;
	}

	cout << result;
}