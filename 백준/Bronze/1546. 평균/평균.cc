#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	priority_queue <int> q;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		q.push(temp);
	}
	int M = q.top();
	double total = 0;
	for (int i = 0; i < N; i++) {
		double d;
		d = q.top();
		q.pop();
		d = d / M * 100;
		total += d;
	}
	cout.precision(10);
	cout << total / N;
}