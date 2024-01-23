#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	string N;
	cin >> N;

	priority_queue<int> q;
	for (int i = 0; i < N.size(); i++) {
		q.push(N[i] - '0');
	}
	for (int i = 0; i < N.size(); i++) {
		cout << q.top();
		q.pop();
	}
}