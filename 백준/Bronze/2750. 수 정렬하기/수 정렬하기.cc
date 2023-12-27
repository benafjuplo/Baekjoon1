#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	priority_queue<int, vector<int>, greater<int>> q;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		q.push(temp);
	}

	for (int i = 0; i < N; i++) {
		int temp;
		temp = q.top();
		q.pop();
		cout << temp << "\n";
	}
}